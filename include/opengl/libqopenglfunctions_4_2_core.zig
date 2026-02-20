const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html)
pub const qopenglfunctions_4_2_core = struct {
    /// New constructs a new QOpenGLFunctions_4_2_Core object.
    ///
    pub fn New() QtC.QOpenGLFunctions_4_2_Core {
        return qtc.QOpenGLFunctions_4_2_Core_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_2_Core_OnInitializeOpenGLFunctions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_2_Core_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlViewport(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRange(@ptrCast(self), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsEnabled(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexLevelParameteriv(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexLevelParameterfv(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*anyopaque `
    ///
    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexImage(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: ?*anyopaque, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_2_Core_GlGetString(@ptrCast(self), @bitCast(name));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetIntegerv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFloatv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetDoublev(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBooleanv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlReadPixels(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReadBuffer(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPixelStorei(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPixelStoref(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthFunc(@ptrCast(self), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilOp(@ptrCast(self), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilFunc(@ptrCast(self), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLogicOp(@ptrCast(self), @bitCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFunc(@ptrCast(self), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFlush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthMask(@ptrCast(self), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlColorMask(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearDepth(@ptrCast(self), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearStencil(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlClearColor(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClear(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawBuffer(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` border: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*const anyopaque `
    ///
    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameteri(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlScissor(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPolygonMode(@ptrCast(self), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLineWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlHint(@ptrCast(self), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFrontFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCullFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindTexture(@ptrCast(self), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*const anyopaque `
    ///
    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    /// ` border: i32 `
    ///
    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPolygonOffset(@ptrCast(self), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElements(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArrays(@ptrCast(self), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawRangeElements(@ptrCast(self), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquation(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlBlendColor(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetCompressedTexImage(@ptrCast(self), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` imageSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` border: i32 `
    ///
    /// ` imageSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSampleCoverage(@ptrCast(self), @bitCast(value), @bitCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlActiveTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameteriv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameteri(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameterfv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameterf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: *?*const anyopaque `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn GlMultiDrawElements(self: ?*anyopaque, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawElements(@ptrCast(self), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawArrays(@ptrCast(self), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFuncSeparate(@ptrCast(self), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferPointerv(@ptrCast(self), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlUnmapBuffer(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Core_GlMapBuffer(@ptrCast(self), @bitCast(target), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferSubData(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBufferSubData(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBufferData(@ptrCast(self), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsBuffer(@ptrCast(self), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenBuffers(@ptrCast(self), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteBuffers(@ptrCast(self), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBuffer(@ptrCast(self), @bitCast(target), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectuiv(@ptrCast(self), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectiv(@ptrCast(self), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndQuery(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginQuery(@ptrCast(self), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsQuery(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteQueries(@ptrCast(self), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenQueries(@ptrCast(self), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribPointer(@ptrCast(self), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlValidateProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4i(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3i(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2i(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1i(@ptrCast(self), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4f(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3f(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2f(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1f(@ptrCast(self), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUseProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        const stringVal_chararr = allocator.alloc([*c]const u8, stringVal.len) catch @panic("qopenglfunctions_4_2_core.GlShaderSource: Memory allocation failed");
        defer allocator.free(stringVal_chararr);
        for (stringVal, 0..stringVal.len) |str, i| {
            stringVal_chararr[i] = @ptrCast(str.ptr);
        }
        qtc.QOpenGLFunctions_4_2_Core_GlShaderSource(@ptrCast(self), @bitCast(shader), @bitCast(count), stringVal_chararr.ptr, length.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLinkProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribPointerv(@ptrCast(self), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribfv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribdv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformiv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformfv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetUniformLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderSource(@ptrCast(self), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderInfoLog(@ptrCast(self), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderiv(@ptrCast(self), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramInfoLog(@ptrCast(self), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramiv(@ptrCast(self), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetAttribLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` maxCount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` obj: []u32 `
    ///
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: []i32, obj: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetAttachedShaders(@ptrCast(self), @bitCast(program), @bitCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnableVertexAttribArray(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisableVertexAttribArray(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDetachShader(@ptrCast(self), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateShader(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateProgram(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompileShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlBindAttribLocation(@ptrCast(self), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlAttachShader(@ptrCast(self), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilMaskSeparate(@ptrCast(self), @bitCast(face), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlStencilFuncSeparate(@ptrCast(self), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` sfail: u32 `
    ///
    /// ` dpfail: u32 `
    ///
    /// ` dppass: u32 `
    ///
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilOpSeparate(@ptrCast(self), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationSeparate(@ptrCast(self), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsVertexArray(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenVertexArrays(@ptrCast(self), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteVertexArrays(@ptrCast(self), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindVertexArray(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFlushMappedBufferRange(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Core_GlMapBufferRange(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTextureLayer(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlRenderbufferStorageMultisample(@ptrCast(self), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlitFramebuffer(@ptrCast(self), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenerateMipmap(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferRenderbuffer(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    /// ` zoffset: i32 `
    ///
    pub fn GlFramebufferTexture3D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture3D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture2D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlFramebufferTexture1D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture1D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenFramebuffers(@ptrCast(self), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteFramebuffers(@ptrCast(self), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindFramebuffer(@ptrCast(self), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsFramebuffer(@ptrCast(self), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetRenderbufferParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlRenderbufferStorage(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenRenderbuffers(@ptrCast(self), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteRenderbuffers(@ptrCast(self), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindRenderbuffer(@ptrCast(self), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsRenderbuffer(@ptrCast(self), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_2_Core_GlGetStringi(@ptrCast(self), @bitCast(name), @bitCast(index));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferfi(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferfv(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferuiv(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferiv(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterIuiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterIiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterIuiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterIiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4ui(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3ui(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2ui(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1ui(@ptrCast(self), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetFragDataLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlBindFragDataLocation(@ptrCast(self), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformuiv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribIuiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribIiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribIPointer(@ptrCast(self), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlEndConditionalRender(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndConditionalRender(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginConditionalRender(@ptrCast(self), @bitCast(id), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClampColor(@ptrCast(self), @bitCast(target), @bitCast(clamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` varyings: []const [:0]const u8 `
    ///
    /// ` bufferMode: u32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlTransformFeedbackVaryings(self: ?*anyopaque, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32, allocator: std.mem.Allocator) void {
        const varyings_chararr = allocator.alloc([*c]const u8, varyings.len) catch @panic("qopenglfunctions_4_2_core.GlTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i| {
            varyings_chararr[i] = @ptrCast(str.ptr);
        }
        qtc.QOpenGLFunctions_4_2_Core_GlTransformFeedbackVaryings(@ptrCast(self), @bitCast(program), @bitCast(count), varyings_chararr.ptr, @bitCast(bufferMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBufferBase(@ptrCast(self), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBufferRange(@ptrCast(self), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlEndTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginTransformFeedback(@ptrCast(self), @bitCast(primitiveMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsEnabledi(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisablei(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnablei(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetIntegeriV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBooleaniV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlColorMaski(@ptrCast(self), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyBufferSubData(@ptrCast(self), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformBlockBinding(@ptrCast(self), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockName(@ptrCast(self), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockiv(@ptrCast(self), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetUniformBlockIndex(@ptrCast(self), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformIndex: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` uniformName: [:0]u8 `
    ///
    pub fn GlGetActiveUniformName(self: ?*anyopaque, program: u32, uniformIndex: u32, bufSize: i32, length: []i32, uniformName: [:0]u8) void {
        const uniformName_Cstring = uniformName.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformName(@ptrCast(self), @bitCast(program), @bitCast(uniformIndex), @bitCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformsiv(@ptrCast(self), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformCount: i32 `
    ///
    /// ` uniformNames: []const [:0]const u8 `
    ///
    /// ` uniformIndices: []u32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlGetUniformIndices(self: ?*anyopaque, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32, allocator: std.mem.Allocator) void {
        const uniformNames_chararr = allocator.alloc([*c]const u8, uniformNames.len) catch @panic("qopenglfunctions_4_2_core.GlGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i| {
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        }
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformIndices(@ptrCast(self), @bitCast(program), @bitCast(uniformCount), uniformNames_chararr.ptr, uniformIndices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPrimitiveRestartIndex(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexBuffer(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstanced(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysInstanced(@ptrCast(self), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlSampleMaski(self: ?*anyopaque, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSampleMaski(@ptrCast(self), @bitCast(index), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetMultisamplefv(@ptrCast(self), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` samples: i32 `
    ///
    /// ` internalformat: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    /// ` fixedsamplelocations: u8 `
    ///
    pub fn GlTexImage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage3DMultisample(@ptrCast(self), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` samples: i32 `
    ///
    /// ` internalformat: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` fixedsamplelocations: u8 `
    ///
    pub fn GlTexImage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage2DMultisample(@ptrCast(self), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInteger64v(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProvokingVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlProvokingVertex(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProvokingVertex(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMultiDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: *?*const anyopaque `
    ///
    /// ` drawcount: i32 `
    ///
    /// ` basevertex: []const i32 `
    ///
    pub fn GlMultiDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32, basevertex: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawElementsBaseVertex(@ptrCast(self), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount), basevertex.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlDrawElementsInstancedBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertex(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlDrawRangeElementsBaseVertex(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawRangeElementsBaseVertex(@ptrCast(self), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsBaseVertex(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn GlFramebufferTexture(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferParameteri64v(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInteger64iV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP4uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP4uiv(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP4ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP4ui(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP3uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP3uiv(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP3ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP3ui(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP2uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP2uiv(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP2ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP2ui(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP1uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP1uiv(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP1ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP1ui(@ptrCast(self), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjectui64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u64 `
    ///
    pub fn GlGetQueryObjectui64v(self: ?*anyopaque, id: u32, pname: u32, params: []u64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectui64v(@ptrCast(self), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjecti64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetQueryObjecti64v(self: ?*anyopaque, id: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjecti64v(@ptrCast(self), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glQueryCounter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlQueryCounter(self: ?*anyopaque, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlQueryCounter(@ptrCast(self), @bitCast(id), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIuiv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterfv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIiv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameteriv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const u32 `
    ///
    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterIuiv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterIiv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const f32 `
    ///
    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterfv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterf(@ptrCast(self), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameteriv(@ptrCast(self), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameteri(@ptrCast(self), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` unit: u32 `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindSampler(@ptrCast(self), @bitCast(unit), @bitCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsSampler(@ptrCast(self), @bitCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteSamplers(@ptrCast(self), @bitCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []u32 `
    ///
    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenSamplers(@ptrCast(self), @bitCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFragDataIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataIndex(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetFragDataIndex(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindFragDataLocationIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` colorNumber: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocationIndexed(self: ?*anyopaque, program: u32, colorNumber: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlBindFragDataLocationIndexed(@ptrCast(self), @bitCast(program), @bitCast(colorNumber), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribDivisor(@ptrCast(self), @bitCast(index), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryIndexediv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryIndexediv(self: ?*anyopaque, target: u32, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryIndexediv(@ptrCast(self), @bitCast(target), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEndQueryIndexed(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndQueryIndexed(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQueryIndexed(self: ?*anyopaque, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginQueryIndexed(@ptrCast(self), @bitCast(target), @bitCast(index), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedbackStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    pub fn GlDrawTransformFeedbackStream(self: ?*anyopaque, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStream(@ptrCast(self), @bitCast(mode), @bitCast(id), @bitCast(stream));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlDrawTransformFeedback(self: ?*anyopaque, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedback(@ptrCast(self), @bitCast(mode), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlResumeTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlResumeTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlPauseTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPauseTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsTransformFeedback(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenTransformFeedbacks(@ptrCast(self), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteTransformFeedbacks(@ptrCast(self), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindTransformFeedback(@ptrCast(self), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPatchParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPatchParameterfv(self: ?*anyopaque, pname: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPatchParameterfv(@ptrCast(self), @bitCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPatchParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPatchParameteri(@ptrCast(self), @bitCast(pname), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramStageiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []i32 `
    ///
    pub fn GlGetProgramStageiv(self: ?*anyopaque, program: u32, shadertype: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramStageiv(@ptrCast(self), @bitCast(program), @bitCast(shadertype), @bitCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformSubroutineuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformSubroutineuiv(self: ?*anyopaque, shadertype: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformSubroutineuiv(@ptrCast(self), @bitCast(shadertype), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformSubroutinesuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` indices: []const u32 `
    ///
    pub fn GlUniformSubroutinesuiv(self: ?*anyopaque, shadertype: u32, count: i32, indices: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformSubroutinesuiv(@ptrCast(self), @bitCast(shadertype), @bitCast(count), indices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveSubroutineName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` name: [:0]u8 `
    ///
    pub fn GlGetActiveSubroutineName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineName(@ptrCast(self), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveSubroutineUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` name: [:0]u8 `
    ///
    pub fn GlGetActiveSubroutineUniformName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformName(@ptrCast(self), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveSubroutineUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []i32 `
    ///
    pub fn GlGetActiveSubroutineUniformiv(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformiv(@ptrCast(self), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSubroutineIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetSubroutineIndex(self: ?*anyopaque, program: u32, shadertype: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetSubroutineIndex(@ptrCast(self), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSubroutineUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetSubroutineUniformLocation(self: ?*anyopaque, program: u32, shadertype: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetSubroutineUniformLocation(@ptrCast(self), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetUniformdv(self: ?*anyopaque, program: u32, location: i32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformdv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix4x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix4x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix3x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix3x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix2x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix2x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2dv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform4dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4dv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform3dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3dv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform2dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2dv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform1dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1dv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlUniform4d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4d(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlUniform3d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3d(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlUniform2d(self: ?*anyopaque, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2d(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlUniform1d(self: ?*anyopaque, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1d(@ptrCast(self), @bitCast(location), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsIndirect(@ptrCast(self), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysIndirect(@ptrCast(self), @bitCast(mode), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFuncSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlBlendFuncSeparatei(self: ?*anyopaque, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFuncSeparatei(@ptrCast(self), @bitCast(buf), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFunci)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` src: u32 `
    ///
    /// ` dst: u32 `
    ///
    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFunci(@ptrCast(self), @bitCast(buf), @bitCast(src), @bitCast(dst));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquationSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationSeparatei(@ptrCast(self), @bitCast(buf), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquationi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationi(@ptrCast(self), @bitCast(buf), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` value: f32 `
    ///
    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMinSampleShading(@ptrCast(self), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetDoublei_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f64 `
    ///
    pub fn GlGetDoubleiV(self: ?*anyopaque, target: u32, index: u32, data: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetDoubleiV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFloati_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f32 `
    ///
    pub fn GlGetFloatiV(self: ?*anyopaque, target: u32, index: u32, data: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFloatiV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRangeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` n: f64 `
    ///
    /// ` f: f64 `
    ///
    pub fn GlDepthRangeIndexed(self: ?*anyopaque, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangeIndexed(@ptrCast(self), @bitCast(index), @bitCast(n), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRangeArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlDepthRangeArrayv(self: ?*anyopaque, first: u32, count: i32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangeArrayv(@ptrCast(self), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissorIndexedv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlScissorIndexedv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorIndexedv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissorIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` left: i32 `
    ///
    /// ` bottom: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlScissorIndexed(self: ?*anyopaque, index: u32, left: i32, bottom: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorIndexed(@ptrCast(self), @bitCast(index), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissorArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlScissorArrayv(self: ?*anyopaque, first: u32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorArrayv(@ptrCast(self), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewportIndexedfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlViewportIndexedfv(self: ?*anyopaque, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportIndexedfv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewportIndexedf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` w: f32 `
    ///
    /// ` h: f32 `
    ///
    pub fn GlViewportIndexedf(self: ?*anyopaque, index: u32, x: f32, y: f32, w: f32, h: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportIndexedf(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewportArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlViewportArrayv(self: ?*anyopaque, first: u32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportArrayv(@ptrCast(self), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribLdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribLdv(self: ?*anyopaque, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribLdv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribLPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlVertexAttribLPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribLPointer(@ptrCast(self), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL4dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL4dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL3dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL3dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL2dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL2dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL1dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL1dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlVertexAttribL4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL4d(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertexAttribL3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL3d(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertexAttribL2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL2d(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlVertexAttribL1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL1d(@ptrCast(self), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramPipelineInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetProgramPipelineInfoLog(self: ?*anyopaque, pipeline: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramPipelineInfoLog(@ptrCast(self), @bitCast(pipeline), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glValidateProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlValidateProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlValidateProgramPipeline(@ptrCast(self), @bitCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix4x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix3x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix4x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix2x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix3x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix2x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix4x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix3x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix4x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix2x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix3x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix2x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniformMatrix2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniformMatrix2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform4uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4uiv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniform4ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4ui(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniform4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    /// ` v1: f64 `
    ///
    /// ` v2: f64 `
    ///
    /// ` v3: f64 `
    ///
    pub fn GlProgramUniform4d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4d(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniform4f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4f(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform4iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4iv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniform4i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4i(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform3uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3uiv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniform3ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3ui(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniform3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    /// ` v1: f64 `
    ///
    /// ` v2: f64 `
    ///
    pub fn GlProgramUniform3d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3d(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniform3f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3f(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform3iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3iv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlProgramUniform3i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3i(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform2uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2uiv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlProgramUniform2ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2ui(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniform2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    /// ` v1: f64 `
    ///
    pub fn GlProgramUniform2d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2d(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlProgramUniform2f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2f(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform2iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2iv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlProgramUniform2i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2i(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform1uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1uiv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlProgramUniform1ui(self: ?*anyopaque, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1ui(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlProgramUniform1dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1dv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    pub fn GlProgramUniform1d(self: ?*anyopaque, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1d(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform1fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1fv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlProgramUniform1f(self: ?*anyopaque, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1f(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform1iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1iv(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlProgramUniform1i(self: ?*anyopaque, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1i(@ptrCast(self), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramPipelineiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramPipelineiv(self: ?*anyopaque, pipeline: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramPipelineiv(@ptrCast(self), @bitCast(pipeline), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlIsProgramPipeline(self: ?*anyopaque, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsProgramPipeline(@ptrCast(self), @bitCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []u32 `
    ///
    pub fn GlGenProgramPipelines(self: ?*anyopaque, n: i32, pipelines: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenProgramPipelines(@ptrCast(self), @bitCast(n), pipelines.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []const u32 `
    ///
    pub fn GlDeleteProgramPipelines(self: ?*anyopaque, n: i32, pipelines: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteProgramPipelines(@ptrCast(self), @bitCast(n), pipelines.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlBindProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindProgramPipeline(@ptrCast(self), @bitCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCreateShaderProgramv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` strings: []const [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlCreateShaderProgramv(self: ?*anyopaque, typeVal: u32, count: i32, strings: []const [:0]const u8, allocator: std.mem.Allocator) u32 {
        const strings_chararr = allocator.alloc([*c]const u8, strings.len) catch @panic("qopenglfunctions_4_2_core.GlCreateShaderProgramv: Memory allocation failed");
        defer allocator.free(strings_chararr);
        for (strings, 0..strings.len) |str, i| {
            strings_chararr[i] = @ptrCast(str.ptr);
        }
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateShaderProgramv(@ptrCast(self), @bitCast(typeVal), @bitCast(count), strings_chararr.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glActiveShaderProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlActiveShaderProgram(self: ?*anyopaque, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlActiveShaderProgram(@ptrCast(self), @bitCast(pipeline), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUseProgramStages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` stages: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgramStages(self: ?*anyopaque, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUseProgramStages(@ptrCast(self), @bitCast(pipeline), @bitCast(stages), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlProgramParameteri(self: ?*anyopaque, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramParameteri(@ptrCast(self), @bitCast(program), @bitCast(pname), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` binaryFormat: u32 `
    ///
    /// ` binary: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    pub fn GlProgramBinary(self: ?*anyopaque, program: u32, binaryFormat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramBinary(@ptrCast(self), @bitCast(program), @bitCast(binaryFormat), @ptrCast(binary), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearDepthf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` dd: f32 `
    ///
    pub fn GlClearDepthf(self: ?*anyopaque, dd: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearDepthf(@ptrCast(self), @bitCast(dd));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRangef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: f32 `
    ///
    /// ` f: f32 `
    ///
    pub fn GlDepthRangef(self: ?*anyopaque, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangef(@ptrCast(self), @bitCast(n), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderPrecisionFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderPrecisionFormat(@ptrCast(self), @bitCast(shadertype), @bitCast(precisiontype), range.ptr, precision.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glShaderBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` shaders: []const u32 `
    ///
    /// ` binaryformat: u32 `
    ///
    /// ` binary: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    pub fn GlShaderBinary(self: ?*anyopaque, count: i32, shaders: []const u32, binaryformat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlShaderBinary(@ptrCast(self), @bitCast(count), shaders.ptr, @bitCast(binaryformat), @ptrCast(binary), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn GlReleaseShaderCompiler(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReleaseShaderCompiler(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexStorage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlTexStorage3D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage3D(@ptrCast(self), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexStorage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlTexStorage2D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage2D(@ptrCast(self), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexStorage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` levels: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    pub fn GlTexStorage1D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage1D(@ptrCast(self), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMemoryBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` barriers: u32 `
    ///
    pub fn GlMemoryBarrier(self: ?*anyopaque, barriers: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMemoryBarrier(@ptrCast(self), @bitCast(barriers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindImageTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlBindImageTexture(self: ?*anyopaque, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindImageTexture(@ptrCast(self), @bitCast(unit), @bitCast(texture), @bitCast(level), @bitCast(layered), @bitCast(layer), @bitCast(access), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveAtomicCounterBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` bufferIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetActiveAtomicCounterBufferiv(self: ?*anyopaque, program: u32, bufferIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveAtomicCounterBufferiv(@ptrCast(self), @bitCast(program), @bitCast(bufferIndex), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetInternalformativ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    pub fn GlGetInternalformativ(self: ?*anyopaque, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInternalformativ(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(pname), @bitCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedbackStreamInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawTransformFeedbackStreamInstanced(self: ?*anyopaque, mode: u32, id: u32, stream: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStreamInstanced(@ptrCast(self), @bitCast(mode), @bitCast(id), @bitCast(stream), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedbackInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawTransformFeedbackInstanced(self: ?*anyopaque, mode: u32, id: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackInstanced(@ptrCast(self), @bitCast(mode), @bitCast(id), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstancedBaseVertexBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    /// ` baseinstance: u32 `
    ///
    pub fn GlDrawElementsInstancedBaseVertexBaseInstance(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertexBaseInstance(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex), @bitCast(baseinstance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
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
    /// ` baseinstance: u32 `
    ///
    pub fn GlDrawElementsInstancedBaseInstance(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseInstance(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(baseinstance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArraysInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    /// ` baseinstance: u32 `
    ///
    pub fn GlDrawArraysInstancedBaseInstance(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysInstancedBaseInstance(@ptrCast(self), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount), @bitCast(baseinstance));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_2_Core_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_2_Core_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_2_Core_OnIsInitialized(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLFunctions_4_2_Core, context: QtC.QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_2_Core_OnSetOwningContext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_2_Core_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_2_Core_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QOpenGLContext `
    ///
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_2_Core_OnOwningContext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#dtor.QOpenGLFunctions_4_2_Core)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_2_Core `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_Delete(@ptrCast(self));
    }
};
