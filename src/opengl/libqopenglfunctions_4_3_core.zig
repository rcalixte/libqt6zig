const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html)
pub const qopenglfunctions_4_3_core = struct {
    /// New constructs a new QOpenGLFunctions_4_3_Core object.
    ///
    pub fn New() QtC.QOpenGLFunctions_4_3_Core {
        return qtc.QOpenGLFunctions_4_3_Core_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_3_Core_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_3_Core_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_3_Core_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDepthRange(@ptrCast(self), @floatCast(nearVal), @floatCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexImage(@ptrCast(self), @intCast(target), @intCast(level), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: ?*anyopaque, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_3_Core_GlGetString(@ptrCast(self), @intCast(name));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetIntegerv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetFloatv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetDoublev(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetBooleanv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPixelStoref(@ptrCast(self), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlLogicOp(@ptrCast(self), @intCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlFlush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearDepth(@ptrCast(self), @floatCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlClearColor(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue), @floatCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawBuffer(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPolygonMode(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPointSize(@ptrCast(self), @floatCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlLineWidth(@ptrCast(self), @floatCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenTextures(@ptrCast(self), @intCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteTextures(@ptrCast(self), @intCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCopyTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(x), @intCast(y), @intCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCopyTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPolygonOffset(@ptrCast(self), @floatCast(factor), @floatCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCopyTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(format), @intCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawRangeElements(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBlendColor(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue), @floatCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetCompressedTexImage(@ptrCast(self), @intCast(target), @intCast(level), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCompressedTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCompressedTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCompressedTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCompressedTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSampleCoverage(@ptrCast(self), @floatCast(value), @intCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPointParameteriv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPointParameteri(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPointParameterfv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPointParameterf(@ptrCast(self), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlMultiDrawArrays(@ptrCast(self), @intCast(mode), first.ptr, count.ptr, @intCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBlendFuncSeparate(@ptrCast(self), @intCast(sfactorRGB), @intCast(dfactorRGB), @intCast(sfactorAlpha), @intCast(dfactorAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlUnmapBuffer(@ptrCast(self), @intCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_3_Core_GlMapBuffer(@ptrCast(self), @intCast(target), @intCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), @ptrCast(data), @intCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenBuffers(@ptrCast(self), @intCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteBuffers(@ptrCast(self), @intCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetQueryObjectuiv(@ptrCast(self), @intCast(id), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetQueryObjectiv(@ptrCast(self), @intCast(id), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetQueryiv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEndQuery(@ptrCast(self), @intCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBeginQuery(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsQuery(@ptrCast(self), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteQueries(@ptrCast(self), @intCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenQueries(@ptrCast(self), @intCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlValidateProgram(@ptrCast(self), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4iv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3iv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2iv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1iv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4fv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3fv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2fv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1fv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1i(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4f(@ptrCast(self), @intCast(location), @floatCast(v0), @floatCast(v1), @floatCast(v2), @floatCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3f(@ptrCast(self), @intCast(location), @floatCast(v0), @floatCast(v1), @floatCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2f(@ptrCast(self), @intCast(location), @floatCast(v0), @floatCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1f(@ptrCast(self), @intCast(location), @floatCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUseProgram(@ptrCast(self), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlLinkProgram(@ptrCast(self), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsShader(@ptrCast(self), @intCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsProgram(@ptrCast(self), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetVertexAttribiv(@ptrCast(self), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetVertexAttribfv(@ptrCast(self), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetVertexAttribdv(@ptrCast(self), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetUniformiv(@ptrCast(self), @intCast(program), @intCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetUniformfv(@ptrCast(self), @intCast(program), @intCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetUniformLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetShaderSource(@ptrCast(self), @intCast(shader), @intCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetShaderInfoLog(@ptrCast(self), @intCast(shader), @intCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetShaderiv(@ptrCast(self), @intCast(shader), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramInfoLog(@ptrCast(self), @intCast(program), @intCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramiv(@ptrCast(self), @intCast(program), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetAttribLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetAttachedShaders(@ptrCast(self), @intCast(program), @intCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEnableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDisableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDetachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteShader(@ptrCast(self), @intCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteProgram(@ptrCast(self), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_3_Core_GlCreateShader(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_4_3_Core_GlCreateProgram(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlCompileShader(@ptrCast(self), @intCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_3_Core_GlBindAttribLocation(@ptrCast(self), @intCast(program), @intCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlAttachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlStencilMaskSeparate(@ptrCast(self), @intCast(face), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlStencilFuncSeparate(@ptrCast(self), @intCast(face), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlStencilOpSeparate(@ptrCast(self), @intCast(face), @intCast(sfail), @intCast(dpfail), @intCast(dppass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBlendEquationSeparate(@ptrCast(self), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix4x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix3x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix4x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix2x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix3x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix2x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsVertexArray(@ptrCast(self), @intCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenVertexArrays(@ptrCast(self), @intCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteVertexArrays(@ptrCast(self), @intCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindVertexArray(@ptrCast(self), @intCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_3_Core_GlFlushMappedBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        return qtc.QOpenGLFunctions_4_3_Core_GlMapBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length), @intCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferTextureLayer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level), @intCast(layer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlRenderbufferStorageMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBlitFramebuffer(@ptrCast(self), @intCast(srcX0), @intCast(srcY0), @intCast(srcX1), @intCast(srcY1), @intCast(dstX0), @intCast(dstY0), @intCast(dstX1), @intCast(dstY1), @intCast(mask), @intCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenerateMipmap(@ptrCast(self), @intCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferRenderbuffer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(renderbuffertarget), @intCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferTexture3D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level), @intCast(zoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferTexture2D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferTexture1D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenFramebuffers(@ptrCast(self), @intCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteFramebuffers(@ptrCast(self), @intCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindFramebuffer(@ptrCast(self), @intCast(target), @intCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsFramebuffer(@ptrCast(self), @intCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetRenderbufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlRenderbufferStorage(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenRenderbuffers(@ptrCast(self), @intCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteRenderbuffers(@ptrCast(self), @intCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindRenderbuffer(@ptrCast(self), @intCast(target), @intCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsRenderbuffer(@ptrCast(self), @intCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_3_Core_GlGetStringi(@ptrCast(self), @intCast(name), @intCast(index));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlClearBufferfi(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @floatCast(depth), @intCast(stencil));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearBufferfv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearBufferuiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearBufferiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4uiv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3uiv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2uiv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1uiv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1ui(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetFragDataLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_3_Core_GlBindFragDataLocation(@ptrCast(self), @intCast(program), @intCast(color), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetUniformuiv(@ptrCast(self), @intCast(program), @intCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetVertexAttribIuiv(@ptrCast(self), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetVertexAttribIiv(@ptrCast(self), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribIPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlEndConditionalRender(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEndConditionalRender(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBeginConditionalRender(@ptrCast(self), @intCast(id), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClampColor(@ptrCast(self), @intCast(target), @intCast(clamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindBufferBase(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBindBufferRange(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer), @intCast(offset), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlEndTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEndTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBeginTransformFeedback(@ptrCast(self), @intCast(primitiveMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsEnabledi(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDisablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEnablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetIntegeriV(@ptrCast(self), @intCast(target), @intCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetBooleaniV(@ptrCast(self), @intCast(target), @intCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlColorMaski(@ptrCast(self), @intCast(index), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlCopyBufferSubData(@ptrCast(self), @intCast(readTarget), @intCast(writeTarget), @intCast(readOffset), @intCast(writeOffset), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniformBlockBinding(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(uniformBlockBinding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveUniformBlockName(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveUniformBlockiv(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetUniformBlockIndex(@ptrCast(self), @intCast(program), uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveUniformName(@ptrCast(self), @intCast(program), @intCast(uniformIndex), @intCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveUniformsiv(@ptrCast(self), @intCast(program), @intCast(uniformCount), uniformIndices.ptr, @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPrimitiveRestartIndex(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexBuffer(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElementsInstanced(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), @ptrCast(indices), @intCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawArraysInstanced(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count), @intCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlSampleMaski(self: ?*anyopaque, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSampleMaski(@ptrCast(self), @intCast(index), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetMultisamplefv(@ptrCast(self), @intCast(pname), @intCast(index), val.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexImage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexImage3DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexImage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexImage2DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetInteger64v(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProvokingVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlProvokingVertex(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlProvokingVertex(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElementsInstancedBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), @ptrCast(indices), @intCast(instancecount), @intCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawRangeElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), @ptrCast(indices), @intCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), @ptrCast(indices), @intCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferTexture(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetBufferParameteri64v(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetInteger64iV(@ptrCast(self), @intCast(target), @intCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP4uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP4ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP3uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP3ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP2uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP2ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP1uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribP1ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetQueryObjectui64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u64 `
    ///
    pub fn GlGetQueryObjectui64v(self: ?*anyopaque, id: u32, pname: u32, params: []u64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetQueryObjectui64v(@ptrCast(self), @intCast(id), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetQueryObjecti64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetQueryObjecti64v(self: ?*anyopaque, id: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetQueryObjecti64v(@ptrCast(self), @intCast(id), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glQueryCounter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlQueryCounter(self: ?*anyopaque, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlQueryCounter(@ptrCast(self), @intCast(id), @intCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const u32 `
    ///
    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const f32 `
    ///
    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSamplerParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSamplerParameterf(@ptrCast(self), @intCast(sampler), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glSamplerParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlSamplerParameteri(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` unit: u32 `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindSampler(@ptrCast(self), @intCast(unit), @intCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsSampler(@ptrCast(self), @intCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteSamplers(@ptrCast(self), @intCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []u32 `
    ///
    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenSamplers(@ptrCast(self), @intCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetFragDataIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataIndex(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetFragDataIndex(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindFragDataLocationIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBindFragDataLocationIndexed(@ptrCast(self), @intCast(program), @intCast(colorNumber), @intCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribDivisor(@ptrCast(self), @intCast(index), @intCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetQueryIndexediv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetQueryIndexediv(@ptrCast(self), @intCast(target), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glEndQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEndQueryIndexed(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlEndQueryIndexed(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBeginQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQueryIndexed(self: ?*anyopaque, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBeginQueryIndexed(@ptrCast(self), @intCast(target), @intCast(index), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawTransformFeedbackStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    pub fn GlDrawTransformFeedbackStream(self: ?*anyopaque, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawTransformFeedbackStream(@ptrCast(self), @intCast(mode), @intCast(id), @intCast(stream));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlDrawTransformFeedback(self: ?*anyopaque, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawTransformFeedback(@ptrCast(self), @intCast(mode), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlResumeTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlResumeTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlPauseTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPauseTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsTransformFeedback(@ptrCast(self), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenTransformFeedbacks(@ptrCast(self), @intCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteTransformFeedbacks(@ptrCast(self), @intCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindTransformFeedback(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPatchParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPatchParameterfv(self: ?*anyopaque, pname: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPatchParameterfv(@ptrCast(self), @intCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glPatchParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlPatchParameteri(@ptrCast(self), @intCast(pname), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramStageiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramStageiv(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformSubroutineuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformSubroutineuiv(self: ?*anyopaque, shadertype: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetUniformSubroutineuiv(@ptrCast(self), @intCast(shadertype), @intCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformSubroutinesuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` indices: []const u32 `
    ///
    pub fn GlUniformSubroutinesuiv(self: ?*anyopaque, shadertype: u32, count: i32, indices: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniformSubroutinesuiv(@ptrCast(self), @intCast(shadertype), @intCast(count), indices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveSubroutineName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveSubroutineName(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveSubroutineUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveSubroutineUniformName(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveSubroutineUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveSubroutineUniformiv(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetSubroutineIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetSubroutineIndex(self: ?*anyopaque, program: u32, shadertype: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetSubroutineIndex(@ptrCast(self), @intCast(program), @intCast(shadertype), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetSubroutineUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetSubroutineUniformLocation(self: ?*anyopaque, program: u32, shadertype: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetSubroutineUniformLocation(@ptrCast(self), @intCast(program), @intCast(shadertype), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetUniformdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetUniformdv(self: ?*anyopaque, program: u32, location: i32, params: []f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetUniformdv(@ptrCast(self), @intCast(program), @intCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix4x3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix4x2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix3x4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix3x2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix2x4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix2x3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniformMatrix2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform4dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4dv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform3dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3dv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform2dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2dv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform1dv(self: ?*anyopaque, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1dv(@ptrCast(self), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform4d(@ptrCast(self), @intCast(location), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlUniform3d(@ptrCast(self), @intCast(location), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlUniform2d(self: ?*anyopaque, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform2d(@ptrCast(self), @intCast(location), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlUniform1d(self: ?*anyopaque, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUniform1d(@ptrCast(self), @intCast(location), @floatCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElementsIndirect(@ptrCast(self), @intCast(mode), @intCast(typeVal), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawArraysIndirect(@ptrCast(self), @intCast(mode), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendFuncSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBlendFuncSeparatei(@ptrCast(self), @intCast(buf), @intCast(srcRGB), @intCast(dstRGB), @intCast(srcAlpha), @intCast(dstAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendFunci)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` src: u32 `
    ///
    /// ` dst: u32 `
    ///
    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBlendFunci(@ptrCast(self), @intCast(buf), @intCast(src), @intCast(dst));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendEquationSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBlendEquationSeparatei(@ptrCast(self), @intCast(buf), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBlendEquationi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBlendEquationi(@ptrCast(self), @intCast(buf), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` value: f32 `
    ///
    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlMinSampleShading(@ptrCast(self), @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetDoublei_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f64 `
    ///
    pub fn GlGetDoubleiV(self: ?*anyopaque, target: u32, index: u32, data: []f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetDoubleiV(@ptrCast(self), @intCast(target), @intCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetFloati_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f32 `
    ///
    pub fn GlGetFloatiV(self: ?*anyopaque, target: u32, index: u32, data: []f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetFloatiV(@ptrCast(self), @intCast(target), @intCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDepthRangeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` n: f64 `
    ///
    /// ` f: f64 `
    ///
    pub fn GlDepthRangeIndexed(self: ?*anyopaque, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDepthRangeIndexed(@ptrCast(self), @intCast(index), @floatCast(n), @floatCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDepthRangeArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlDepthRangeArrayv(self: ?*anyopaque, first: u32, count: i32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDepthRangeArrayv(@ptrCast(self), @intCast(first), @intCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glScissorIndexedv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlScissorIndexedv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlScissorIndexedv(@ptrCast(self), @intCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glScissorIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlScissorIndexed(@ptrCast(self), @intCast(index), @intCast(left), @intCast(bottom), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glScissorArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlScissorArrayv(self: ?*anyopaque, first: u32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlScissorArrayv(@ptrCast(self), @intCast(first), @intCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glViewportIndexedfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlViewportIndexedfv(self: ?*anyopaque, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlViewportIndexedfv(@ptrCast(self), @intCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glViewportIndexedf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlViewportIndexedf(@ptrCast(self), @intCast(index), @floatCast(x), @floatCast(y), @floatCast(w), @floatCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glViewportArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlViewportArrayv(self: ?*anyopaque, first: u32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlViewportArrayv(@ptrCast(self), @intCast(first), @intCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetVertexAttribLdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribLdv(self: ?*anyopaque, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetVertexAttribLdv(@ptrCast(self), @intCast(index), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribLPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribLPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL4dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL4dv(@ptrCast(self), @intCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL3dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL3dv(@ptrCast(self), @intCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL2dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL2dv(@ptrCast(self), @intCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttribL1dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL1dv(@ptrCast(self), @intCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL4d(@ptrCast(self), @intCast(index), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL3d(@ptrCast(self), @intCast(index), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertexAttribL2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL2d(@ptrCast(self), @intCast(index), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribL1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlVertexAttribL1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribL1d(@ptrCast(self), @intCast(index), @floatCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramPipelineInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramPipelineInfoLog(@ptrCast(self), @intCast(pipeline), @intCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glValidateProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlValidateProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlValidateProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix4x3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix3x4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix4x2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix2x4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix3x2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix2x3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix4x3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix3x4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix4x2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix2x4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix3x2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix2x3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniformMatrix2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4d(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0), @floatCast(v1), @floatCast(v2), @floatCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4f(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0), @floatCast(v1), @floatCast(v2), @floatCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform4i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3d(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0), @floatCast(v1), @floatCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3f(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0), @floatCast(v1), @floatCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform3i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2d(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0), @floatCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2f(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0), @floatCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform2i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlProgramUniform1ui(self: ?*anyopaque, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    pub fn GlProgramUniform1d(self: ?*anyopaque, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1d(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlProgramUniform1f(self: ?*anyopaque, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1f(@ptrCast(self), @intCast(program), @intCast(location), @floatCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlProgramUniform1i(self: ?*anyopaque, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlProgramUniform1i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramPipelineiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramPipelineiv(self: ?*anyopaque, pipeline: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramPipelineiv(@ptrCast(self), @intCast(pipeline), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glIsProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlIsProgramPipeline(self: ?*anyopaque, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_3_Core_GlIsProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGenProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []u32 `
    ///
    pub fn GlGenProgramPipelines(self: ?*anyopaque, n: i32, pipelines: []u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGenProgramPipelines(@ptrCast(self), @intCast(n), pipelines.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDeleteProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []const u32 `
    ///
    pub fn GlDeleteProgramPipelines(self: ?*anyopaque, n: i32, pipelines: []const u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDeleteProgramPipelines(@ptrCast(self), @intCast(n), pipelines.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlBindProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glActiveShaderProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlActiveShaderProgram(self: ?*anyopaque, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlActiveShaderProgram(@ptrCast(self), @intCast(pipeline), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glUseProgramStages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` stages: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgramStages(self: ?*anyopaque, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlUseProgramStages(@ptrCast(self), @intCast(pipeline), @intCast(stages), @intCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlProgramParameteri(self: ?*anyopaque, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlProgramParameteri(@ptrCast(self), @intCast(program), @intCast(pname), @intCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glProgramBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlProgramBinary(@ptrCast(self), @intCast(program), @intCast(binaryFormat), @ptrCast(binary), @intCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearDepthf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` dd: f32 `
    ///
    pub fn GlClearDepthf(self: ?*anyopaque, dd: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearDepthf(@ptrCast(self), @floatCast(dd));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDepthRangef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` n: f32 `
    ///
    /// ` f: f32 `
    ///
    pub fn GlDepthRangef(self: ?*anyopaque, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDepthRangef(@ptrCast(self), @floatCast(n), @floatCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetShaderPrecisionFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetShaderPrecisionFormat(@ptrCast(self), @intCast(shadertype), @intCast(precisiontype), range.ptr, precision.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glShaderBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlShaderBinary(@ptrCast(self), @intCast(count), shaders.ptr, @intCast(binaryformat), @ptrCast(binary), @intCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn GlReleaseShaderCompiler(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlReleaseShaderCompiler(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexStorage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexStorage3D(@ptrCast(self), @intCast(target), @intCast(levels), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexStorage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexStorage2D(@ptrCast(self), @intCast(target), @intCast(levels), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexStorage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlTexStorage1D(@ptrCast(self), @intCast(target), @intCast(levels), @intCast(internalformat), @intCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMemoryBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` barriers: u32 `
    ///
    pub fn GlMemoryBarrier(self: ?*anyopaque, barriers: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlMemoryBarrier(@ptrCast(self), @intCast(barriers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindImageTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlBindImageTexture(@ptrCast(self), @intCast(unit), @intCast(texture), @intCast(level), @intCast(layered), @intCast(layer), @intCast(access), @intCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetActiveAtomicCounterBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetActiveAtomicCounterBufferiv(@ptrCast(self), @intCast(program), @intCast(bufferIndex), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetInternalformativ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlGetInternalformativ(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(pname), @intCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawTransformFeedbackStreamInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawTransformFeedbackStreamInstanced(@ptrCast(self), @intCast(mode), @intCast(id), @intCast(stream), @intCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawTransformFeedbackInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawTransformFeedbackInstanced(self: ?*anyopaque, mode: u32, id: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDrawTransformFeedbackInstanced(@ptrCast(self), @intCast(mode), @intCast(id), @intCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElementsInstancedBaseVertexBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElementsInstancedBaseVertexBaseInstance(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), @ptrCast(indices), @intCast(instancecount), @intCast(basevertex), @intCast(baseinstance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawElementsInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawElementsInstancedBaseInstance(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), @ptrCast(indices), @intCast(instancecount), @intCast(baseinstance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDrawArraysInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
        qtc.QOpenGLFunctions_4_3_Core_GlDrawArraysInstancedBaseInstance(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count), @intCast(instancecount), @intCast(baseinstance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexStorage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
    pub fn GlTexStorage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexStorage3DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexStorage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
    pub fn GlTexStorage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexStorage2DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTexBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
    pub fn GlTexBufferRange(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTexBufferRange(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(buffer), @intCast(offset), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glShaderStorageBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` storageBlockIndex: u32 `
    ///
    /// ` storageBlockBinding: u32 `
    ///
    pub fn GlShaderStorageBlockBinding(self: ?*anyopaque, program: u32, storageBlockIndex: u32, storageBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlShaderStorageBlockBinding(@ptrCast(self), @intCast(program), @intCast(storageBlockIndex), @intCast(storageBlockBinding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramResourceLocationIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetProgramResourceLocationIndex(self: ?*anyopaque, program: u32, programInterface: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetProgramResourceLocationIndex(@ptrCast(self), @intCast(program), @intCast(programInterface), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramResourceLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetProgramResourceLocation(self: ?*anyopaque, program: u32, programInterface: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetProgramResourceLocation(@ptrCast(self), @intCast(program), @intCast(programInterface), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramResourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
    pub fn GlGetProgramResourceName(self: ?*anyopaque, program: u32, programInterface: u32, index: u32, bufSize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramResourceName(@ptrCast(self), @intCast(program), @intCast(programInterface), @intCast(index), @intCast(bufSize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramResourceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetProgramResourceIndex(self: ?*anyopaque, program: u32, programInterface: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_3_Core_GlGetProgramResourceIndex(@ptrCast(self), @intCast(program), @intCast(programInterface), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetProgramInterfaceiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramInterfaceiv(self: ?*anyopaque, program: u32, programInterface: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetProgramInterfaceiv(@ptrCast(self), @intCast(program), @intCast(programInterface), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMultiDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    /// ` drawcount: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn GlMultiDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: ?*const anyopaque, drawcount: i32, stride: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlMultiDrawElementsIndirect(@ptrCast(self), @intCast(mode), @intCast(typeVal), @ptrCast(indirect), @intCast(drawcount), @intCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glMultiDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    /// ` drawcount: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn GlMultiDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: ?*const anyopaque, drawcount: i32, stride: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlMultiDrawArraysIndirect(@ptrCast(self), @intCast(mode), @ptrCast(indirect), @intCast(drawcount), @intCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glInvalidateBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlInvalidateBufferData(self: ?*anyopaque, buffer: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlInvalidateBufferData(@ptrCast(self), @intCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glInvalidateBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlInvalidateBufferSubData(self: ?*anyopaque, buffer: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_3_Core_GlInvalidateBufferSubData(@ptrCast(self), @intCast(buffer), @intCast(offset), @intCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glInvalidateTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn GlInvalidateTexImage(self: ?*anyopaque, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlInvalidateTexImage(@ptrCast(self), @intCast(texture), @intCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glInvalidateTexSubImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` texture: u32 `
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
    pub fn GlInvalidateTexSubImage(self: ?*anyopaque, texture: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlInvalidateTexSubImage(@ptrCast(self), @intCast(texture), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetInternalformati64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetInternalformati64v(self: ?*anyopaque, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i64) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetInternalformati64v(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(pname), @intCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glGetFramebufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetFramebufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlGetFramebufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glFramebufferParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFramebufferParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlFramebufferParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexBindingDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` bindingindex: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn GlVertexBindingDivisor(self: ?*anyopaque, bindingindex: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexBindingDivisor(@ptrCast(self), @intCast(bindingindex), @intCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` bindingindex: u32 `
    ///
    pub fn GlVertexAttribBinding(self: ?*anyopaque, attribindex: u32, bindingindex: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribBinding(@ptrCast(self), @intCast(attribindex), @intCast(bindingindex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribLFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` relativeoffset: u32 `
    ///
    pub fn GlVertexAttribLFormat(self: ?*anyopaque, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribLFormat(@ptrCast(self), @intCast(attribindex), @intCast(size), @intCast(typeVal), @intCast(relativeoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribIFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` relativeoffset: u32 `
    ///
    pub fn GlVertexAttribIFormat(self: ?*anyopaque, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribIFormat(@ptrCast(self), @intCast(attribindex), @intCast(size), @intCast(typeVal), @intCast(relativeoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glVertexAttribFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
    pub fn GlVertexAttribFormat(self: ?*anyopaque, attribindex: u32, size: i32, typeVal: u32, normalized: u8, relativeoffset: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlVertexAttribFormat(@ptrCast(self), @intCast(attribindex), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(relativeoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glBindVertexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` bindingindex: u32 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` stride: i32 `
    ///
    pub fn GlBindVertexBuffer(self: ?*anyopaque, bindingindex: u32, buffer: u32, offset: isize, stride: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlBindVertexBuffer(@ptrCast(self), @intCast(bindingindex), @intCast(buffer), @intCast(offset), @intCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glTextureView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` texture: u32 `
    ///
    /// ` target: u32 `
    ///
    /// ` origtexture: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` minlevel: u32 `
    ///
    /// ` numlevels: u32 `
    ///
    /// ` minlayer: u32 `
    ///
    /// ` numlayers: u32 `
    ///
    pub fn GlTextureView(self: ?*anyopaque, texture: u32, target: u32, origtexture: u32, internalformat: u32, minlevel: u32, numlevels: u32, minlayer: u32, numlayers: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlTextureView(@ptrCast(self), @intCast(texture), @intCast(target), @intCast(origtexture), @intCast(internalformat), @intCast(minlevel), @intCast(numlevels), @intCast(minlayer), @intCast(numlayers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glCopyImageSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
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
    pub fn GlCopyImageSubData(self: ?*anyopaque, srcName: u32, srcTarget: u32, srcLevel: i32, srcX: i32, srcY: i32, srcZ: i32, dstName: u32, dstTarget: u32, dstLevel: i32, dstX: i32, dstY: i32, dstZ: i32, srcWidth: i32, srcHeight: i32, srcDepth: i32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlCopyImageSubData(@ptrCast(self), @intCast(srcName), @intCast(srcTarget), @intCast(srcLevel), @intCast(srcX), @intCast(srcY), @intCast(srcZ), @intCast(dstName), @intCast(dstTarget), @intCast(dstLevel), @intCast(dstX), @intCast(dstY), @intCast(dstZ), @intCast(srcWidth), @intCast(srcHeight), @intCast(srcDepth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDispatchComputeIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` indirect: isize `
    ///
    pub fn GlDispatchComputeIndirect(self: ?*anyopaque, indirect: isize) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDispatchComputeIndirect(@ptrCast(self), @intCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glDispatchCompute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` num_groups_x: u32 `
    ///
    /// ` num_groups_y: u32 `
    ///
    /// ` num_groups_z: u32 `
    ///
    pub fn GlDispatchCompute(self: ?*anyopaque, num_groups_x: u32, num_groups_y: u32, num_groups_z: u32) void {
        qtc.QOpenGLFunctions_4_3_Core_GlDispatchCompute(@ptrCast(self), @intCast(num_groups_x), @intCast(num_groups_y), @intCast(num_groups_z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlClearBufferSubData(self: ?*anyopaque, target: u32, internalformat: u32, offset: isize, size: isize, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearBufferSubData(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(offset), @intCast(size), @intCast(format), @intCast(typeVal), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#glClearBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlClearBufferData(self: ?*anyopaque, target: u32, internalformat: u32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_GlClearBufferData(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(format), @intCast(typeVal), @ptrCast(data));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_3_Core_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_3_Core_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_3_Core_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLFunctions_4_3_Core, context: QtC.QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_3_Core_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_3_Core_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_3_Core_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QOpenGLContext `
    ///
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_3_Core_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-core.html#dtor.QOpenGLFunctions_4_3_Core)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_4_3_Core `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_3_Core_Delete(@ptrCast(self));
    }
};
