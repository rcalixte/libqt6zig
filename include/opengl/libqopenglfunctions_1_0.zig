const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html)
pub const qopenglfunctions_1_0 = struct {
    /// New constructs a new QOpenGLFunctions_1_0 object.
    ///
    pub fn New() QtC.QOpenGLFunctions_1_0 {
        return qtc.QOpenGLFunctions_1_0_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_0_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_0_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_0_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_0_GlDepthRange(@ptrCast(self), @floatCast(nearVal), @floatCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_0_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: *anyopaque `
    ///
    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: *anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexImage(@ptrCast(self), @intCast(target), @intCast(level), @intCast(format), @intCast(typeVal), pixels);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: ?*anyopaque, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_1_0_GlGetString(@ptrCast(self), @intCast(name));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetIntegerv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetFloatv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetDoublev(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_1_0_GlGetBooleanv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
    /// ` pixels: *anyopaque `
    ///
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelStoref(@ptrCast(self), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_1_0_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_0_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlLogicOp(@ptrCast(self), @intCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_0_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlFlush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_0_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_0_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_0_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_1_0_GlClearDepth(@ptrCast(self), @floatCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_0_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlClearColor(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue), @floatCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlDrawBuffer(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
    /// ` pixels: *const anyopaque `
    ///
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
    /// ` pixels: *const anyopaque `
    ///
    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlPolygonMode(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPointSize(@ptrCast(self), @floatCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_1_0_GlLineWidth(@ptrCast(self), @floatCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTranslatef(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTranslated(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlScalef(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlScaled(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRotatef(@ptrCast(self), @floatCast(angle), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRotated(@ptrCast(self), @floatCast(angle), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlPushMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlPushMatrix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlPopMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlPopMatrix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlOrtho(@ptrCast(self), @floatCast(left), @floatCast(right), @floatCast(bottom), @floatCast(top), @floatCast(zNear), @floatCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlMultMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlMultMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlMatrixMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadMatrixd(self: ?*anyopaque, m: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlLoadMatrixd(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadMatrixf(self: ?*anyopaque, m: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlLoadMatrixf(@ptrCast(self), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlLoadIdentity(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlLoadIdentity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlFrustum(@ptrCast(self), @floatCast(left), @floatCast(right), @floatCast(bottom), @floatCast(top), @floatCast(zNear), @floatCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_0_GlIsList(@ptrCast(self), @intCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mask: []u8 `
    ///
    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: []u8) void {
        qtc.QOpenGLFunctions_1_0_GlGetPolygonStipple(@ptrCast(self), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: []u16) void {
        qtc.QOpenGLFunctions_1_0_GlGetPixelMapusv(@ptrCast(self), @intCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: []u32) void {
        qtc.QOpenGLFunctions_1_0_GlGetPixelMapuiv(@ptrCast(self), @intCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetPixelMapfv(@ptrCast(self), @intCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMapiv(@ptrCast(self), @intCast(target), @intCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMapfv(@ptrCast(self), @intCast(target), @intCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetMapdv(@ptrCast(self), @intCast(target), @intCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetLightiv(@ptrCast(self), @intCast(light), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetLightfv(@ptrCast(self), @intCast(light), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetClipPlane(@ptrCast(self), @intCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: *const anyopaque `
    ///
    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlDrawPixels(@ptrCast(self), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlCopyPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_1_0_GlPixelMapusv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelMapuiv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelMapfv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelTransferi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelTransferf(@ptrCast(self), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelZoom(@ptrCast(self), @floatCast(xfactor), @floatCast(yfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_0_GlAlphaFunc(@ptrCast(self), @intCast(func), @floatCast(ref));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalPoint2(@ptrCast(self), @intCast(i), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlEvalMesh2(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val), @intCast(j1), @intCast(j2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalPoint1(@ptrCast(self), @intCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalMesh1(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2fv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2f(@ptrCast(self), @floatCast(u), @floatCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2dv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2d(@ptrCast(self), @floatCast(u), @floatCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1fv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: f32 `
    ///
    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1f(@ptrCast(self), @floatCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1dv(@ptrCast(self), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` u: f64 `
    ///
    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1d(@ptrCast(self), @floatCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlMapGrid2f(@ptrCast(self), @intCast(un), @floatCast(u1Val), @floatCast(u2Val), @intCast(vn), @floatCast(v1), @floatCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlMapGrid2d(@ptrCast(self), @intCast(un), @floatCast(u1Val), @floatCast(u2Val), @intCast(vn), @floatCast(v1), @floatCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_0_GlMapGrid1f(@ptrCast(self), @intCast(un), @floatCast(u1Val), @floatCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_0_GlMapGrid1d(@ptrCast(self), @intCast(un), @floatCast(u1Val), @floatCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlMap2f(@ptrCast(self), @intCast(target), @floatCast(u1Val), @floatCast(u2Val), @intCast(ustride), @intCast(uorder), @floatCast(v1), @floatCast(v2), @intCast(vstride), @intCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlMap2d(@ptrCast(self), @intCast(target), @floatCast(u1Val), @floatCast(u2Val), @intCast(ustride), @intCast(uorder), @floatCast(v1), @floatCast(v2), @intCast(vstride), @intCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlMap1f(@ptrCast(self), @intCast(target), @floatCast(u1Val), @floatCast(u2Val), @intCast(stride), @intCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlMap1d(@ptrCast(self), @intCast(target), @floatCast(u1Val), @floatCast(u2Val), @intCast(stride), @intCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlPushAttrib(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlPopAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlPopAttrib(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_0_GlAccum(@ptrCast(self), @intCast(op), @floatCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexMask(@ptrCast(self), @intCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_0_GlClearIndex(@ptrCast(self), @floatCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlClearAccum(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue), @floatCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_0_GlPushName(@ptrCast(self), @intCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlPopName(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlPopName(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` token: f32 `
    ///
    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPassThrough(@ptrCast(self), @floatCast(token));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_0_GlLoadName(@ptrCast(self), @intCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlInitNames(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlInitNames(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_0_GlRenderMode(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_1_0_GlSelectBuffer(@ptrCast(self), @intCast(size), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlFeedbackBuffer(@ptrCast(self), @intCast(size), @intCast(typeVal), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGeni(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGenf(@ptrCast(self), @intCast(coord), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexGend(@ptrCast(self), @intCast(coord), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnvi(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnvf(@ptrCast(self), @intCast(target), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlShadeModel(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn GlPolygonStipple(self: ?*anyopaque, mask: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlPolygonStipple(@ptrCast(self), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlMateriali(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlMaterialf(@ptrCast(self), @intCast(face), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_0_GlLineStipple(@ptrCast(self), @intCast(factor), @intCast(pattern));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModeliv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModeli(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModelfv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModelf(@ptrCast(self), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlLightiv(@ptrCast(self), @intCast(light), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlLighti(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightfv(@ptrCast(self), @intCast(light), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightf(@ptrCast(self), @intCast(light), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlFogiv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlFogi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlFogfv(@ptrCast(self), @intCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlFogf(@ptrCast(self), @intCast(pname), @floatCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlColorMaterial(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlClipPlane(@ptrCast(self), @intCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlVertex4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlVertex4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlVertex4f(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlVertex4d(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3f(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3d(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2f(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2d(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlTexCoord4s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlTexCoord4i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlTexCoord4f(@ptrCast(self), @floatCast(s), @floatCast(t), @floatCast(r), @floatCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlTexCoord4d(@ptrCast(self), @floatCast(s), @floatCast(t), @floatCast(r), @floatCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3f(@ptrCast(self), @floatCast(s), @floatCast(t), @floatCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3d(@ptrCast(self), @floatCast(s), @floatCast(t), @floatCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2s(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2i(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2f(@ptrCast(self), @floatCast(s), @floatCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2d(@ptrCast(self), @floatCast(s), @floatCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord1sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1s(@ptrCast(self), @intCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord1iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1i(@ptrCast(self), @intCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord1fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1f(@ptrCast(self), @floatCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord1dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1d(@ptrCast(self), @floatCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn GlRectsv(self: ?*anyopaque, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRectsv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRects(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn GlRectiv(self: ?*anyopaque, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRectiv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRecti(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn GlRectfv(self: ?*anyopaque, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRectfv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRectf(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn GlRectdv(self: ?*anyopaque, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRectdv(@ptrCast(self), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRectd(@ptrCast(self), @floatCast(x1), @floatCast(y1), @floatCast(x2), @floatCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRasterPos4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRasterPos4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRasterPos4f(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlRasterPos4d(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z), @floatCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3f(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3d(@ptrCast(self), @floatCast(x), @floatCast(y), @floatCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos2sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos2iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos2fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2f(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos2dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2d(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlNormal3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3s(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlNormal3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3i(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlNormal3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3f(@ptrCast(self), @floatCast(nx), @floatCast(ny), @floatCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlNormal3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3d(@ptrCast(self), @floatCast(nx), @floatCast(ny), @floatCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlNormal3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3b(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const i16 `
    ///
    pub fn GlIndexsv(self: ?*anyopaque, c: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlIndexsv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: i16 `
    ///
    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_1_0_GlIndexs(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const i32 `
    ///
    pub fn GlIndexiv(self: ?*anyopaque, c: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexiv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: i32 `
    ///
    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexi(@ptrCast(self), @intCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const f32 `
    ///
    pub fn GlIndexfv(self: ?*anyopaque, c: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexfv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexf(@ptrCast(self), @floatCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const f64 `
    ///
    pub fn GlIndexdv(self: ?*anyopaque, c: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlIndexdv(@ptrCast(self), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` c: f64 `
    ///
    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_1_0_GlIndexd(@ptrCast(self), @floatCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlEnd(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlEdgeFlagv(@ptrCast(self), flag.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_0_GlEdgeFlag(@ptrCast(self), @intCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor4usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor4usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor4uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor4ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor4ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor4sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor4sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor4iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor4fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4f(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue), @floatCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor4dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor4dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4d(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue), @floatCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor4bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor4bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlColor4b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor3usv(self: ?*anyopaque, v: []const u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3usv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor3uiv(self: ?*anyopaque, v: []const u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3uiv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor3ubv(self: ?*anyopaque, v: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3ubv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor3sv(self: ?*anyopaque, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3sv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor3iv(self: ?*anyopaque, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3iv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor3fv(self: ?*anyopaque, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3fv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3f(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor3dv(self: ?*anyopaque, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor3dv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor3d(@ptrCast(self), @floatCast(red), @floatCast(green), @floatCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor3bv(self: ?*anyopaque, v: []const i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3bv(@ptrCast(self), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
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
        qtc.QOpenGLFunctions_1_0_GlBitmap(@ptrCast(self), @intCast(width), @intCast(height), @floatCast(xorig), @floatCast(yorig), @floatCast(xmove), @floatCast(ymove), bitmap.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlBegin(@ptrCast(self), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` base: u32 `
    ///
    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_1_0_GlListBase(@ptrCast(self), @intCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_0_GlGenLists(@ptrCast(self), @intCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_0_GlDeleteLists(@ptrCast(self), @intCast(list), @intCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: *const anyopaque `
    ///
    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: *const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlCallLists(@ptrCast(self), @intCast(n), @intCast(typeVal), lists);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_1_0_GlCallList(@ptrCast(self), @intCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn GlEndList(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlEndList(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlNewList(@ptrCast(self), @intCast(list), @intCast(mode));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_0_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_0_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_0_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0`
    ///
    /// ` callback: *const fn (self: QtC.QOpenGLFunctions_1_0, context: QtC.QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_1_0_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_1_0_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_1_0_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QOpenGLContext `
    ///
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_1_0_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#dtor.QOpenGLFunctions_1_0)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions_1_0 `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_Delete(@ptrCast(self));
    }
};
