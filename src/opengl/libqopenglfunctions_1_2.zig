const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html)
pub const qopenglfunctions_1_2 = struct {
    /// New constructs a new QOpenGLFunctions_1_2 object.
    ///
    pub fn New() QtC.QOpenGLFunctions_1_2 {
        return qtc.QOpenGLFunctions_1_2_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_2_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_2_OnInitializeOpenGLFunctions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeOpenGLFunctions` instead
    ///
    pub const QBaseInitializeOpenGLFunctions = SuperInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn SuperInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_2_SuperInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlViewport(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_2_GlDepthRange(@ptrCast(self), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_2_GlIsEnabled(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetTexLevelParameteriv(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetTexLevelParameterfv(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetTexImage(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: ?*anyopaque, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_1_2_GlGetString(@ptrCast(self), @bitCast(name));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetIntegerv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetFloatv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetDoublev(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_1_2_GlGetBooleanv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlReadPixels(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlReadBuffer(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelStorei(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelStoref(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDepthFunc(@ptrCast(self), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_2_GlStencilOp(@ptrCast(self), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlStencilFunc(@ptrCast(self), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlLogicOp(@ptrCast(self), @bitCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBlendFunc(@ptrCast(self), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlFlush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_2_GlEnable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDisable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_2_GlDepthMask(@ptrCast(self), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColorMask(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlStencilMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_1_2_GlClearDepth(@ptrCast(self), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_2_GlClearStencil(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlClearColor(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlClear(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDrawBuffer(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameteri(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameterf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlScissor(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPolygonMode(@ptrCast(self), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPointSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_1_2_GlLineWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlHint(@ptrCast(self), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlFrontFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlCullFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const u8 `
    ///
    pub fn GlIndexubv(self: ?*anyopaque, c: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlIndexubv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: u8 `
    ///
    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_1_2_GlIndexub(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_1_2_GlIsTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_1_2_GlGenTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlDeleteTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBindTexture(@ptrCast(self), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyTexSubImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyTexImage1D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPolygonOffset(@ptrCast(self), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetPointerv(self: ?*anyopaque, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetPointerv(@ptrCast(self), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlDrawElements(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_1_2_GlDrawArrays(@ptrCast(self), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexSubImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexImage3D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlDrawRangeElements(@ptrCast(self), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBlendEquation(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlBlendColor(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTranslatef(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTranslated(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlScalef(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlScaled(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRotatef(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRotated(@ptrCast(self), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlPushMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlPushMatrix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlPopMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlPopMatrix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlOrtho(@ptrCast(self), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlMultMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlMultMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlMatrixMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlLoadMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlLoadMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlLoadIdentity(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlLoadIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlFrustum(@ptrCast(self), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_2_GlIsList(@ptrCast(self), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexGeniv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexGenfv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexGendv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexEnviv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexEnvfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: []u8 `
    ///
    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: []u8) void {
        qtc.QOpenGLFunctions_1_2_GlGetPolygonStipple(@ptrCast(self), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: []u16) void {
        qtc.QOpenGLFunctions_1_2_GlGetPixelMapusv(@ptrCast(self), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: []u32) void {
        qtc.QOpenGLFunctions_1_2_GlGetPixelMapuiv(@ptrCast(self), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetPixelMapfv(@ptrCast(self), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMaterialiv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMaterialfv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMapiv(@ptrCast(self), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMapfv(@ptrCast(self), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetMapdv(@ptrCast(self), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetLightiv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetLightfv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetClipPlane(@ptrCast(self), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlDrawPixels(@ptrCast(self), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyPixels(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_1_2_GlPixelMapusv(@ptrCast(self), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelMapuiv(@ptrCast(self), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelMapfv(@ptrCast(self), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelTransferi(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelTransferf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelZoom(@ptrCast(self), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_2_GlAlphaFunc(@ptrCast(self), @bitCast(func), @bitCast(ref));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalPoint2(@ptrCast(self), @bitCast(i), @bitCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlEvalMesh2(@ptrCast(self), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalPoint1(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalMesh1(@ptrCast(self), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2fv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2f(@ptrCast(self), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2dv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2d(@ptrCast(self), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1fv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: f32 `
    ///
    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1f(@ptrCast(self), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1dv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` u: f64 `
    ///
    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1d(@ptrCast(self), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlMapGrid2f(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlMapGrid2d(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_2_GlMapGrid1f(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_2_GlMapGrid1d(@ptrCast(self), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlMap2f(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlMap2d(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlMap1f(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlMap1d(@ptrCast(self), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPushAttrib(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlPopAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlPopAttrib(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_2_GlAccum(@ptrCast(self), @bitCast(op), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_2_GlClearIndex(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlClearAccum(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPushName(@ptrCast(self), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlPopName(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlPopName(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` token: f32 `
    ///
    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPassThrough(@ptrCast(self), @bitCast(token));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_2_GlLoadName(@ptrCast(self), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlInitNames(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlInitNames(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_2_GlRenderMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_1_2_GlSelectBuffer(@ptrCast(self), @bitCast(size), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlFeedbackBuffer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGeniv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGeni(@ptrCast(self), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGenfv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGenf(@ptrCast(self), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexGendv(@ptrCast(self), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexGend(@ptrCast(self), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnviv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnvi(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnvfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnvf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlShadeModel(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn GlPolygonStipple(self: ?*anyopaque, mask: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlPolygonStipple(@ptrCast(self), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlMaterialiv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlMateriali(@ptrCast(self), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlMaterialfv(@ptrCast(self), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlMaterialf(@ptrCast(self), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_2_GlLineStipple(@ptrCast(self), @bitCast(factor), @bitCast(pattern));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModeliv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModeli(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModelfv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModelf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlLightiv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlLighti(@ptrCast(self), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightfv(@ptrCast(self), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightf(@ptrCast(self), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlFogiv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlFogi(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlFogfv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlFogf(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlColorMaterial(@ptrCast(self), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlClipPlane(@ptrCast(self), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlVertex4s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlVertex4i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlVertex4f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlVertex4d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2s(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2i(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2f(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2d(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexCoord4s(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexCoord4i(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexCoord4f(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexCoord4d(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3s(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3i(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3f(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3d(@ptrCast(self), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2s(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2i(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2f(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2d(@ptrCast(self), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord1sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1s(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord1iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1i(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord1fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1f(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord1dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1d(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn GlRectsv(self: ?*anyopaque, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRectsv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRects(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn GlRectiv(self: ?*anyopaque, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRectiv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRecti(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn GlRectfv(self: ?*anyopaque, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRectfv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRectf(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn GlRectdv(self: ?*anyopaque, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRectdv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRectd(@ptrCast(self), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRasterPos4s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRasterPos4i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRasterPos4f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlRasterPos4d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3s(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3i(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3f(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3d(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2s(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2i(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2f(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2d(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlNormal3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3s(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlNormal3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3i(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlNormal3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3f(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlNormal3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3d(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlNormal3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3b(@ptrCast(self), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const i16 `
    ///
    pub fn GlIndexsv(self: ?*anyopaque, c: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlIndexsv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: i16 `
    ///
    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_1_2_GlIndexs(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const i32 `
    ///
    pub fn GlIndexiv(self: ?*anyopaque, c: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexiv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: i32 `
    ///
    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexi(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const f32 `
    ///
    pub fn GlIndexfv(self: ?*anyopaque, c: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexfv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexf(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const f64 `
    ///
    pub fn GlIndexdv(self: ?*anyopaque, c: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlIndexdv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` c: f64 `
    ///
    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_1_2_GlIndexd(@ptrCast(self), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlEnd(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlEdgeFlagv(@ptrCast(self), flag.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_2_GlEdgeFlag(@ptrCast(self), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor4usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor4usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4us(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor4uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4ui(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor4ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor4ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4ub(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4s(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4i(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4f(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4d(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor4bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor4bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColor4b(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor3usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3us(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor3uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3ui(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor3ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3ub(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3s(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3i(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3f(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor3d(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3b(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlBitmap(@ptrCast(self), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBegin(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` base: u32 `
    ///
    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_1_2_GlListBase(@ptrCast(self), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_2_GlGenLists(@ptrCast(self), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_2_GlDeleteLists(@ptrCast(self), @bitCast(list), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlCallLists(@ptrCast(self), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_1_2_GlCallList(@ptrCast(self), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlEndList(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlEndList(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlNewList(@ptrCast(self), @bitCast(list), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPushClientAttrib(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn GlPopClientAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlPopClientAttrib(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPrioritizeTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` priorities: []const f32 `
    ///
    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: []const u32, priorities: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlPrioritizeTextures(@ptrCast(self), @bitCast(n), textures.ptr, priorities.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glAreTexturesResident)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` residences: []u8 `
    ///
    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: []const u32, residences: []u8) u8 {
        return qtc.QOpenGLFunctions_1_2_GlAreTexturesResident(@ptrCast(self), @bitCast(n), textures.ptr, residences.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlVertexPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlTexCoordPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlNormalPointer(@ptrCast(self), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glInterleavedArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` format: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlInterleavedArrays(@ptrCast(self), @bitCast(format), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlIndexPointer(@ptrCast(self), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEnableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_1_2_GlEnableClientState(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEdgeFlagPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlEdgeFlagPointer(@ptrCast(self), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDisableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDisableClientState(@ptrCast(self), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColorPointer(@ptrCast(self), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glArrayElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_2_GlArrayElement(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glResetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_1_2_GlResetMinmax(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glResetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_1_2_GlResetHistogram(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_2_GlMinmax(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlHistogram(@ptrCast(self), @bitCast(target), @bitCast(width), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMinmaxParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMinmaxParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMinmaxParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMinmaxParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetMinmax(@ptrCast(self), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetHistogramParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetHistogramParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetHistogramParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetHistogramParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetHistogram(@ptrCast(self), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glSeparableFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlSeparableFilter2D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetSeparableFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetSeparableFilter(@ptrCast(self), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetConvolutionParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetConvolutionParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetConvolutionFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetConvolutionFilter(@ptrCast(self), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyConvolutionFilter2D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyConvolutionFilter1D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: i32 `
    ///
    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameteri(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: f32 `
    ///
    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameterf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlConvolutionFilter2D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlConvolutionFilter1D(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyColorSubTable(@ptrCast(self), @bitCast(target), @bitCast(start), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColorSubTable(@ptrCast(self), @bitCast(target), @bitCast(start), @bitCast(count), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetColorTableParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetColorTableParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlGetColorTable(@ptrCast(self), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlCopyColorTable(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlColorTableParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlColorTableParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
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
        qtc.QOpenGLFunctions_1_2_GlColorTable(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_2_IsInitialized(@ptrCast(self));
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
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn SuperIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_2_SuperIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_2_OnIsInitialized(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_SetOwningContext(@ptrCast(self), @ptrCast(context));
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
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SuperSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_SuperSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLFunctions_1_2, context: QtC.QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_1_2_OnSetOwningContext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_1_2_OwningContext(@ptrCast(self));
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
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn SuperOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_1_2_SuperOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QOpenGLContext `
    ///
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_1_2_OnOwningContext(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#dtor.QOpenGLFunctions_1_2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_2 `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_Delete(@ptrCast(self));
    }
};
