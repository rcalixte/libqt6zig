const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html)
pub const qopenglfunctions_3_0 = struct {
    /// New constructs a new QOpenGLFunctions_3_0 object.
    ///
    pub fn New() QtC.QOpenGLFunctions_3_0 {
        return qtc.QOpenGLFunctions_3_0_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_3_0_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_0_OnInitializeOpenGLFunctions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeOpenGLFunctions` instead
    ///
    pub const QBaseInitializeOpenGLFunctions = SuperInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn SuperInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_3_0_SuperInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlViewport(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_3_0_GlDepthRange(@ptrCast(self), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsEnabled(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetTexLevelParameteriv(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetTexLevelParameterfv(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetTexImage(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: ?*anyopaque, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_3_0_GlGetString(@ptrCast(self), @bitCast(name));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetIntegerv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetFloatv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_0_GlGetDoublev(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_3_0_GlGetBooleanv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlReadPixels(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlReadBuffer(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelStorei(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelStoref(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDepthFunc(@ptrCast(self), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_3_0_GlStencilOp(@ptrCast(self), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlStencilFunc(@ptrCast(self), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlLogicOp(@ptrCast(self), @bitCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBlendFunc(@ptrCast(self), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlFlush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_3_0_GlEnable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDisable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_3_0_GlDepthMask(@ptrCast(self), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlColorMask(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlStencilMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_3_0_GlClearDepth(@ptrCast(self), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_3_0_GlClearStencil(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlClearColor(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlClear(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDrawBuffer(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexParameteri(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexParameterf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlScissor(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlPolygonMode(@ptrCast(self), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPointSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_3_0_GlLineWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlHint(@ptrCast(self), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlFrontFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlCullFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: []const u8 `
    ///
    pub fn GlIndexubv(self: ?*anyopaque, c: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlIndexubv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: u8 `
    ///
    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_3_0_GlIndexub(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBindTexture(@ptrCast(self), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCopyTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCopyTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCopyTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCopyTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPolygonOffset(@ptrCast(self), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetPointerv(self: ?*anyopaque, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetPointerv(@ptrCast(self), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlDrawElements(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_3_0_GlDrawArrays(@ptrCast(self), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCopyTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlTexImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlDrawRangeElements(@ptrCast(self), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBlendEquation(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlBlendColor(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetCompressedTexImage(@ptrCast(self), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCompressedTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCompressedTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCompressedTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCompressedTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCompressedTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlCompressedTexImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_3_0_GlSampleCoverage(@ptrCast(self), @bitCast(value), @bitCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_3_0_GlActiveTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlPointParameteriv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlPointParameteri(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlPointParameterfv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPointParameterf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlMultiDrawElements(@ptrCast(self), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlMultiDrawArrays(@ptrCast(self), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlBlendFuncSeparate(@ptrCast(self), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetBufferPointerv(@ptrCast(self), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetBufferParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlUnmapBuffer(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_0_GlMapBuffer(@ptrCast(self), @bitCast(target), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetBufferSubData(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlBufferSubData(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlBufferData(@ptrCast(self), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsBuffer(@ptrCast(self), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenBuffers(@ptrCast(self), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteBuffers(@ptrCast(self), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBindBuffer(@ptrCast(self), @bitCast(target), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGetQueryObjectuiv(@ptrCast(self), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetQueryObjectiv(@ptrCast(self), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetQueryiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_3_0_GlEndQuery(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBeginQuery(@ptrCast(self), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsQuery(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteQueries(@ptrCast(self), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenQueries(@ptrCast(self), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlVertexAttribPointer(@ptrCast(self), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_0_GlValidateProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform4iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform3iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform2iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform1iv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform4fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform3fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform2fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform1fv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniform4i(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniform3i(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform2i(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform1i(@ptrCast(self), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniform4f(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniform3f(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform2f(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform1f(@ptrCast(self), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_0_GlUseProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        const stringVal_chararr = allocator.alloc([*c]const u8, stringVal.len) catch @panic("qopenglfunctions_3_0.GlShaderSource: Memory allocation failed");
        defer allocator.free(stringVal_chararr);
        for (stringVal, 0..stringVal.len) |str, i| {
            stringVal_chararr[i] = @ptrCast(str.ptr);
        }
        qtc.QOpenGLFunctions_3_0_GlShaderSource(@ptrCast(self), @bitCast(shader), @bitCast(count), stringVal_chararr.ptr, length.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_0_GlLinkProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetVertexAttribPointerv(@ptrCast(self), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetVertexAttribiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetVertexAttribfv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_0_GlGetVertexAttribdv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetUniformiv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetUniformfv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_0_GlGetUniformLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetShaderSource(@ptrCast(self), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetShaderInfoLog(@ptrCast(self), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetShaderiv(@ptrCast(self), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetProgramInfoLog(@ptrCast(self), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetProgramiv(@ptrCast(self), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_0_GlGetAttribLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetAttachedShaders(@ptrCast(self), @bitCast(program), @bitCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_3_0_GlEnableVertexAttribArray(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDisableVertexAttribArray(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDetachShader(@ptrCast(self), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_3_0_GlCreateShader(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_3_0_GlCreateProgram(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_3_0_GlCompileShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_3_0_GlBindAttribLocation(@ptrCast(self), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_0_GlAttachShader(@ptrCast(self), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlStencilMaskSeparate(@ptrCast(self), @bitCast(face), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlStencilFuncSeparate(@ptrCast(self), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlStencilOpSeparate(@ptrCast(self), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBlendEquationSeparate(@ptrCast(self), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix4x3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix3x4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix4x2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix2x4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix3x2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniformMatrix2x3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsVertexArray(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenVertexArrays(@ptrCast(self), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteVertexArrays(@ptrCast(self), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBindVertexArray(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_3_0_GlFlushMappedBufferRange(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        return qtc.QOpenGLFunctions_3_0_GlMapBufferRange(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlFramebufferTextureLayer(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlRenderbufferStorageMultisample(@ptrCast(self), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlBlitFramebuffer(@ptrCast(self), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenerateMipmap(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlFramebufferRenderbuffer(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlFramebufferTexture3D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlFramebufferTexture2D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlFramebufferTexture1D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenFramebuffers(@ptrCast(self), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteFramebuffers(@ptrCast(self), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBindFramebuffer(@ptrCast(self), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsFramebuffer(@ptrCast(self), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetRenderbufferParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlRenderbufferStorage(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGenRenderbuffers(@ptrCast(self), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteRenderbuffers(@ptrCast(self), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBindRenderbuffer(@ptrCast(self), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsRenderbuffer(@ptrCast(self), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_3_0_GlGetStringi(@ptrCast(self), @bitCast(name), @bitCast(index));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlClearBufferfi(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlClearBufferfv(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlClearBufferuiv(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlClearBufferiv(@ptrCast(self), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexParameterIuiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexParameterIiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlTexParameterIuiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexParameterIiv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform4uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform3uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform2uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform1uiv(@ptrCast(self), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniform4ui(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlUniform3ui(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform2ui(@ptrCast(self), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_3_0_GlUniform1ui(@ptrCast(self), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_0_GlGetFragDataLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_3_0_GlBindFragDataLocation(@ptrCast(self), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGetUniformuiv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGetVertexAttribIuiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetVertexAttribIiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlVertexAttribIPointer(@ptrCast(self), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlEndConditionalRender(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlEndConditionalRender(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBeginConditionalRender(@ptrCast(self), @bitCast(id), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_3_0_GlClampColor(@ptrCast(self), @bitCast(target), @bitCast(clamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        const varyings_chararr = allocator.alloc([*c]const u8, varyings.len) catch @panic("qopenglfunctions_3_0.GlTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i| {
            varyings_chararr[i] = @ptrCast(str.ptr);
        }
        qtc.QOpenGLFunctions_3_0_GlTransformFeedbackVaryings(@ptrCast(self), @bitCast(program), @bitCast(count), varyings_chararr.ptr, @bitCast(bufferMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBindBufferBase(@ptrCast(self), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlBindBufferRange(@ptrCast(self), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlEndTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlEndTransformFeedback(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBeginTransformFeedback(@ptrCast(self), @bitCast(primitiveMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsEnabledi(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDisablei(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_0_GlEnablei(@ptrCast(self), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetIntegeriV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_3_0_GlGetBooleaniV(@ptrCast(self), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
        qtc.QOpenGLFunctions_3_0_GlColorMaski(@ptrCast(self), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTranslatef(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlTranslated(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlScalef(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlScaled(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlRotatef(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` angle: f64 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlRotated(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlPushMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlPushMatrix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlPopMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlPopMatrix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` left: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` zNear: f64 `
    ///
    /// ` zFar: f64 `
    ///
    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_3_0_GlOrtho(@ptrCast(self), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlMatrixMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlLoadMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlLoadMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlLoadIdentity(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlLoadIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` left: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` zNear: f64 `
    ///
    /// ` zFar: f64 `
    ///
    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_3_0_GlFrustum(@ptrCast(self), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_3_0_GlIsList(@ptrCast(self), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexGeniv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexGenfv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexGendv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexEnviv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetTexEnvfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: []u8 `
    ///
    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: []u8) void {
        qtc.QOpenGLFunctions_3_0_GlGetPolygonStipple(@ptrCast(self), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: []u16) void {
        qtc.QOpenGLFunctions_3_0_GlGetPixelMapusv(@ptrCast(self), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlGetPixelMapuiv(@ptrCast(self), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetPixelMapfv(@ptrCast(self), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetMaterialiv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetMaterialfv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetMapiv(@ptrCast(self), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetMapfv(@ptrCast(self), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_3_0_GlGetMapdv(@ptrCast(self), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetLightiv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetLightfv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_3_0_GlGetClipPlane(@ptrCast(self), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlDrawPixels(@ptrCast(self), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_3_0_GlCopyPixels(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlPixelMapusv(@ptrCast(self), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelMapuiv(@ptrCast(self), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelMapfv(@ptrCast(self), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelTransferi(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelTransferf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPixelZoom(@ptrCast(self), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_3_0_GlAlphaFunc(@ptrCast(self), @bitCast(func), @bitCast(ref));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalPoint2(@ptrCast(self), @bitCast(i), @bitCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    /// ` j1: i32 `
    ///
    /// ` j2: i32 `
    ///
    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalMesh2(@ptrCast(self), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalPoint1(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalMesh1(@ptrCast(self), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord2fv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord2f(@ptrCast(self), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord2dv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord2d(@ptrCast(self), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord1fv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: f32 `
    ///
    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord1f(@ptrCast(self), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord1dv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` u: f64 `
    ///
    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_3_0_GlEvalCoord1d(@ptrCast(self), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    /// ` vn: i32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMapGrid2f(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    /// ` vn: i32 `
    ///
    /// ` v1: f64 `
    ///
    /// ` v2: f64 `
    ///
    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_3_0_GlMapGrid2d(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMapGrid1f(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_3_0_GlMapGrid1d(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    /// ` ustride: i32 `
    ///
    /// ` uorder: i32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    /// ` vstride: i32 `
    ///
    /// ` vorder: i32 `
    ///
    /// ` points: []const f32 `
    ///
    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMap2f(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    /// ` ustride: i32 `
    ///
    /// ` uorder: i32 `
    ///
    /// ` v1: f64 `
    ///
    /// ` v2: f64 `
    ///
    /// ` vstride: i32 `
    ///
    /// ` vorder: i32 `
    ///
    /// ` points: []const f64 `
    ///
    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMap2d(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` order: i32 `
    ///
    /// ` points: []const f32 `
    ///
    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMap1f(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    /// ` stride: i32 `
    ///
    /// ` order: i32 `
    ///
    /// ` points: []const f64 `
    ///
    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMap1d(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlPushAttrib(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlPopAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlPopAttrib(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_3_0_GlAccum(@ptrCast(self), @bitCast(op), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlIndexMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_3_0_GlClearIndex(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_0_GlClearAccum(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_3_0_GlPushName(@ptrCast(self), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlPopName(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlPopName(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` token: f32 `
    ///
    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_3_0_GlPassThrough(@ptrCast(self), @bitCast(token));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_3_0_GlLoadName(@ptrCast(self), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlInitNames(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlInitNames(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_3_0_GlRenderMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_3_0_GlSelectBuffer(@ptrCast(self), @bitCast(size), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlFeedbackBuffer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexGeniv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexGeni(@ptrCast(self), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexGenfv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexGenf(@ptrCast(self), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexGendv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexGend(@ptrCast(self), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexEnviv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexEnvi(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexEnvfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexEnvf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlShadeModel(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn GlPolygonStipple(self: ?*anyopaque, mask: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlPolygonStipple(@ptrCast(self), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlMaterialiv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlMateriali(@ptrCast(self), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMaterialfv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMaterialf(@ptrCast(self), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_3_0_GlLineStipple(@ptrCast(self), @bitCast(factor), @bitCast(pattern));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlLightModeliv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlLightModeli(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlLightModelfv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlLightModelf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlLightiv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlLighti(@ptrCast(self), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlLightfv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlLightf(@ptrCast(self), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlFogiv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_0_GlFogi(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlFogfv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_0_GlFogf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlColorMaterial(@ptrCast(self), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlClipPlane(@ptrCast(self), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertex4d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertex3d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2s(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2i(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2f(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertex2d(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4s(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4i(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4f(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord4d(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3s(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3i(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3f(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord3d(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2s(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2i(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2f(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord2d(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord1sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1s(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord1iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1i(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord1fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1f(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord1dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoord1d(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn GlRectsv(self: ?*anyopaque, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlRectsv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x1: i16 `
    ///
    /// ` y1: i16 `
    ///
    /// ` x2: i16 `
    ///
    /// ` y2: i16 `
    ///
    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_3_0_GlRects(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn GlRectiv(self: ?*anyopaque, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlRectiv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_3_0_GlRecti(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn GlRectfv(self: ?*anyopaque, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlRectfv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x1: f32 `
    ///
    /// ` y1: f32 `
    ///
    /// ` x2: f32 `
    ///
    /// ` y2: f32 `
    ///
    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_3_0_GlRectf(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn GlRectdv(self: ?*anyopaque, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlRectdv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_3_0_GlRectd(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos4d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos3d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2s(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2i(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2f(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_0_GlRasterPos2d(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlNormal3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3s(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlNormal3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3i(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlNormal3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3f(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlNormal3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3d(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlNormal3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_3_0_GlNormal3b(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: []const i16 `
    ///
    pub fn GlIndexsv(self: ?*anyopaque, c: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlIndexsv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: i16 `
    ///
    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_3_0_GlIndexs(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: []const i32 `
    ///
    pub fn GlIndexiv(self: ?*anyopaque, c: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlIndexiv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: i32 `
    ///
    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_3_0_GlIndexi(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: []const f32 `
    ///
    pub fn GlIndexfv(self: ?*anyopaque, c: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlIndexfv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_3_0_GlIndexf(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: []const f64 `
    ///
    pub fn GlIndexdv(self: ?*anyopaque, c: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlIndexdv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` c: f64 `
    ///
    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_3_0_GlIndexd(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlEnd(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlEdgeFlagv(@ptrCast(self), flag.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_3_0_GlEdgeFlag(@ptrCast(self), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor4usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlColor4usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_3_0_GlColor4us(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor4uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlColor4uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    /// ` alpha: u32 `
    ///
    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_3_0_GlColor4ui(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor4ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlColor4ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_3_0_GlColor4ub(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlColor4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    /// ` alpha: i16 `
    ///
    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_3_0_GlColor4s(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlColor4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    /// ` alpha: i32 `
    ///
    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_3_0_GlColor4i(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlColor4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_0_GlColor4f(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlColor4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_3_0_GlColor4d(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor4bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlColor4bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    /// ` alpha: i8 `
    ///
    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_3_0_GlColor4b(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor3usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlColor3usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_3_0_GlColor3us(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor3uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlColor3uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_3_0_GlColor3ui(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor3ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlColor3ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_3_0_GlColor3ub(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlColor3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_3_0_GlColor3s(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlColor3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_3_0_GlColor3i(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlColor3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_3_0_GlColor3f(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlColor3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_3_0_GlColor3d(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlColor3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_3_0_GlColor3b(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` xorig: f32 `
    ///
    /// ` yorig: f32 `
    ///
    /// ` xmove: f32 `
    ///
    /// ` ymove: f32 `
    ///
    /// ` bitmap: []const u8 `
    ///
    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlBitmap(@ptrCast(self), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlBegin(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` base: u32 `
    ///
    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_3_0_GlListBase(@ptrCast(self), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_3_0_GlGenLists(@ptrCast(self), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_3_0_GlDeleteLists(@ptrCast(self), @bitCast(list), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlCallLists(@ptrCast(self), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_3_0_GlCallList(@ptrCast(self), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlEndList(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlEndList(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_0_GlNewList(@ptrCast(self), @bitCast(list), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPushClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_3_0_GlPushClientAttrib(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPopClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn GlPopClientAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlPopClientAttrib(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glPrioritizeTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` priorities: []const f32 `
    ///
    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: []const u32, priorities: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlPrioritizeTextures(@ptrCast(self), @bitCast(n), textures.ptr, priorities.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glAreTexturesResident)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` residences: []u8 `
    ///
    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: []const u32, residences: []u8) u8 {
        return qtc.QOpenGLFunctions_3_0_GlAreTexturesResident(@ptrCast(self), @bitCast(n), textures.ptr, residences.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlVertexPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glTexCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlTexCoordPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glNormalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlNormalPointer(@ptrCast(self), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glInterleavedArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` format: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlInterleavedArrays(@ptrCast(self), @bitCast(format), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glIndexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlIndexPointer(@ptrCast(self), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEnableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_3_0_GlEnableClientState(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glEdgeFlagPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlEdgeFlagPointer(@ptrCast(self), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glDisableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_3_0_GlDisableClientState(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlColorPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glArrayElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_3_0_GlArrayElement(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glResetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_3_0_GlResetMinmax(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glResetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_3_0_GlResetHistogram(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_3_0_GlMinmax(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlHistogram(self: ?*anyopaque, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_3_0_GlHistogram(@ptrCast(self), @bitCast(target), @bitCast(width), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMinmaxParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetMinmaxParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMinmaxParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetMinmaxParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` reset: u8 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` values: ?*anyopaque `
    ///
    pub fn GlGetMinmax(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetMinmax(@ptrCast(self), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetHistogramParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetHistogramParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetHistogramParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetHistogramParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` reset: u8 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` values: ?*anyopaque `
    ///
    pub fn GlGetHistogram(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetHistogram(@ptrCast(self), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSeparableFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` row: ?*const anyopaque `
    ///
    /// ` column: ?*const anyopaque `
    ///
    pub fn GlSeparableFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*const anyopaque, column: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlSeparableFilter2D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetSeparableFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` row: ?*anyopaque `
    ///
    /// ` column: ?*anyopaque `
    ///
    /// ` span: ?*anyopaque `
    ///
    pub fn GlGetSeparableFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetSeparableFilter(@ptrCast(self), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetConvolutionParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetConvolutionParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetConvolutionFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*anyopaque `
    ///
    pub fn GlGetConvolutionFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetConvolutionFilter(@ptrCast(self), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
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
    pub fn GlCopyConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_0_GlCopyConvolutionFilter2D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn GlCopyConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_0_GlCopyConvolutionFilter1D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlConvolutionParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glConvolutionParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: i32 `
    ///
    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_3_0_GlConvolutionParameteri(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlConvolutionParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glConvolutionParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: f32 `
    ///
    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_3_0_GlConvolutionParameterf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*const anyopaque `
    ///
    pub fn GlConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlConvolutionFilter2D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*const anyopaque `
    ///
    pub fn GlConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlConvolutionFilter1D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` start: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn GlCopyColorSubTable(self: ?*anyopaque, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_0_GlCopyColorSubTable(@ptrCast(self), @bitCast(target), @bitCast(start), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` start: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlColorSubTable(self: ?*anyopaque, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlColorSubTable(@ptrCast(self), @bitCast(target), @bitCast(start), @bitCast(count), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_0_GlGetColorTableParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_0_GlGetColorTableParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glGetColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` table: ?*anyopaque `
    ///
    pub fn GlGetColorTable(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlGetColorTable(@ptrCast(self), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glCopyColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn GlCopyColorTable(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_0_GlCopyColorTable(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlColorTableParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlColorTableParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` table: ?*const anyopaque `
    ///
    pub fn GlColorTable(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlColorTable(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultTransposeMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultTransposeMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultTransposeMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultTransposeMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLoadTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadTransposeMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlLoadTransposeMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glLoadTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadTransposeMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlLoadTransposeMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord4sv(self: ?*anyopaque, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4sv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn GlMultiTexCoord4s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4s(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord4iv(self: ?*anyopaque, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4iv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn GlMultiTexCoord4i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4i(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord4fv(self: ?*anyopaque, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4fv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn GlMultiTexCoord4f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4f(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord4dv(self: ?*anyopaque, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4dv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn GlMultiTexCoord4d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord4d(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord3sv(self: ?*anyopaque, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3sv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlMultiTexCoord3s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3s(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord3iv(self: ?*anyopaque, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3iv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlMultiTexCoord3i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3i(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord3fv(self: ?*anyopaque, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3fv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlMultiTexCoord3f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3f(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord3dv(self: ?*anyopaque, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3dv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlMultiTexCoord3d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord3d(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord2sv(self: ?*anyopaque, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2sv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlMultiTexCoord2s(self: ?*anyopaque, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2s(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord2iv(self: ?*anyopaque, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2iv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlMultiTexCoord2i(self: ?*anyopaque, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2i(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord2fv(self: ?*anyopaque, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2fv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlMultiTexCoord2f(self: ?*anyopaque, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2f(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord2dv(self: ?*anyopaque, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2dv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlMultiTexCoord2d(self: ?*anyopaque, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord2d(@ptrCast(self), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord1sv(self: ?*anyopaque, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1sv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlMultiTexCoord1s(self: ?*anyopaque, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1s(@ptrCast(self), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord1iv(self: ?*anyopaque, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1iv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlMultiTexCoord1i(self: ?*anyopaque, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1i(@ptrCast(self), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord1fv(self: ?*anyopaque, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1fv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlMultiTexCoord1f(self: ?*anyopaque, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1f(@ptrCast(self), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord1dv(self: ?*anyopaque, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1dv(@ptrCast(self), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glMultiTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlMultiTexCoord1d(self: ?*anyopaque, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_3_0_GlMultiTexCoord1d(@ptrCast(self), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glClientActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlClientActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_3_0_GlClientActiveTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlWindowPos3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlWindowPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlWindowPos3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlWindowPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlWindowPos3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlWindowPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlWindowPos3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlWindowPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos3d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlWindowPos2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlWindowPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2s(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlWindowPos2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlWindowPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2i(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlWindowPos2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlWindowPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2f(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlWindowPos2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glWindowPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlWindowPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_0_GlWindowPos2d(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlSecondaryColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColorPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlSecondaryColor3usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlSecondaryColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3us(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlSecondaryColor3uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlSecondaryColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3ui(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlSecondaryColor3ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlSecondaryColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3ub(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlSecondaryColor3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlSecondaryColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3s(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlSecondaryColor3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlSecondaryColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3i(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlSecondaryColor3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlSecondaryColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3f(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlSecondaryColor3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlSecondaryColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3d(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlSecondaryColor3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glSecondaryColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlSecondaryColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_3_0_GlSecondaryColor3b(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlFogCoordPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_0_GlFogCoordPointer(@ptrCast(self), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogCoorddv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: []const f64 `
    ///
    pub fn GlFogCoorddv(self: ?*anyopaque, coord: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlFogCoorddv(@ptrCast(self), coord.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogCoordd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: f64 `
    ///
    pub fn GlFogCoordd(self: ?*anyopaque, coord: f64) void {
        qtc.QOpenGLFunctions_3_0_GlFogCoordd(@ptrCast(self), @bitCast(coord));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogCoordfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: []const f32 `
    ///
    pub fn GlFogCoordfv(self: ?*anyopaque, coord: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlFogCoordfv(@ptrCast(self), coord.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glFogCoordf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` coord: f32 `
    ///
    pub fn GlFogCoordf(self: ?*anyopaque, coord: f32) void {
        qtc.QOpenGLFunctions_3_0_GlFogCoordf(@ptrCast(self), @bitCast(coord));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlVertexAttrib4usv(self: ?*anyopaque, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4usv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttrib4uiv(self: ?*anyopaque, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4uiv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlVertexAttrib4ubv(self: ?*anyopaque, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4ubv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib4sv(self: ?*anyopaque, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4sv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlVertexAttrib4s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4s(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttrib4iv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4iv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib4fv(self: ?*anyopaque, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4fv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlVertexAttrib4f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4f(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib4dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
    pub fn GlVertexAttrib4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4d(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlVertexAttrib4bv(self: ?*anyopaque, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4bv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Nusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlVertexAttrib4Nusv(self: ?*anyopaque, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Nusv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Nuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttrib4Nuiv(self: ?*anyopaque, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Nuiv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Nubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlVertexAttrib4Nubv(self: ?*anyopaque, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Nubv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Nub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u8 `
    ///
    /// ` y: u8 `
    ///
    /// ` z: u8 `
    ///
    /// ` w: u8 `
    ///
    pub fn GlVertexAttrib4Nub(self: ?*anyopaque, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Nub(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Nsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib4Nsv(self: ?*anyopaque, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Nsv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Niv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttrib4Niv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Niv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib4Nbv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlVertexAttrib4Nbv(self: ?*anyopaque, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib4Nbv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib3sv(self: ?*anyopaque, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib3sv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertexAttrib3s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib3s(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib3fv(self: ?*anyopaque, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib3fv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertexAttrib3f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib3f(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib3dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib3dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertexAttrib3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib3d(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib2sv(self: ?*anyopaque, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib2sv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertexAttrib2s(self: ?*anyopaque, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib2s(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib2fv(self: ?*anyopaque, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib2fv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertexAttrib2f(self: ?*anyopaque, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib2f(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib2dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib2dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertexAttrib2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib2d(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib1sv(self: ?*anyopaque, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib1sv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    pub fn GlVertexAttrib1s(self: ?*anyopaque, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib1s(@ptrCast(self), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib1fv(self: ?*anyopaque, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib1fv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    pub fn GlVertexAttrib1f(self: ?*anyopaque, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib1f(@ptrCast(self), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib1dv(self: ?*anyopaque, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib1dv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttrib1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlVertexAttrib1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttrib1d(@ptrCast(self), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlVertexAttribI4usv(self: ?*anyopaque, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4usv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlVertexAttribI4ubv(self: ?*anyopaque, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4ubv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttribI4sv(self: ?*anyopaque, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4sv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlVertexAttribI4bv(self: ?*anyopaque, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4bv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI4uiv(self: ?*anyopaque, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4uiv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI3uiv(self: ?*anyopaque, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI3uiv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI2uiv(self: ?*anyopaque, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI2uiv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI1uiv(self: ?*anyopaque, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI1uiv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI4iv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4iv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI3iv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI3iv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI2iv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI2iv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI1iv(self: ?*anyopaque, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI1iv(@ptrCast(self), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
    pub fn GlVertexAttribI4ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4ui(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    /// ` z: u32 `
    ///
    pub fn GlVertexAttribI3ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI3ui(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    pub fn GlVertexAttribI2ui(self: ?*anyopaque, index: u32, x: u32, y: u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI2ui(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    pub fn GlVertexAttribI1ui(self: ?*anyopaque, index: u32, x: u32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI1ui(@ptrCast(self), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
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
    pub fn GlVertexAttribI4i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI4i(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertexAttribI3i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI3i(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertexAttribI2i(self: ?*anyopaque, index: u32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI2i(@ptrCast(self), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#glVertexAttribI1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    pub fn GlVertexAttribI1i(self: ?*anyopaque, index: u32, x: i32) void {
        qtc.QOpenGLFunctions_3_0_GlVertexAttribI1i(@ptrCast(self), @bitCast(index), @bitCast(x));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_3_0_IsInitialized(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsInitialized` instead
    ///
    pub const QBaseIsInitialized = SuperIsInitialized;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn SuperIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_3_0_SuperIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_0_OnIsInitialized(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// ### DEPRECATED: Use `SuperSetOwningContext` instead
    ///
    pub const QBaseSetOwningContext = SuperSetOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SuperSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_SuperSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLFunctions_3_0, context: QtC.QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_3_0_OnSetOwningContext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_3_0_OwningContext(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperOwningContext` instead
    ///
    pub const QBaseOwningContext = SuperOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn SuperOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_3_0_SuperOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QOpenGLContext `
    ///
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_3_0_OnOwningContext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0.html#dtor.QOpenGLFunctions_3_0)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_3_0 `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_0_Delete(@ptrCast(self));
    }
};
