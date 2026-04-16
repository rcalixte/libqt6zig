const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html)
pub const QOpenGLFunctions_1_5 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_5,

    pub const _is_QOpenGLFunctions_1_5 = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// New constructs a new QOpenGLFunctions_1_5 object.
    ///
    pub fn New() QOpenGLFunctions_1_5 {
        return .{ .ptr = qtc.QOpenGLFunctions_1_5_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn InitializeOpenGLFunctions(self: QOpenGLFunctions_1_5) bool {
        return qtc.QOpenGLFunctions_1_5_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: QOpenGLFunctions_1_5, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_5_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeOpenGLFunctions` instead
    ///
    pub const QBaseInitializeOpenGLFunctions = SuperInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn SuperInitializeOpenGLFunctions(self: QOpenGLFunctions_1_5) bool {
        return qtc.QOpenGLFunctions_1_5_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlViewport(self: QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: QOpenGLFunctions_1_5, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_5_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: QOpenGLFunctions_1_5, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexLevelParameteriv(self: QOpenGLFunctions_1_5, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexLevelParameterfv(self: QOpenGLFunctions_1_5, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlGetTexImage(self: QOpenGLFunctions_1_5, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: QOpenGLFunctions_1_5, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_1_5_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: QOpenGLFunctions_1_5, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: QOpenGLFunctions_1_5, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: QOpenGLFunctions_1_5, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: QOpenGLFunctions_1_5, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_1_5_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlReadPixels(self: QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: QOpenGLFunctions_1_5, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: QOpenGLFunctions_1_5, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: QOpenGLFunctions_1_5, func: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: QOpenGLFunctions_1_5, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_5_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: QOpenGLFunctions_1_5, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: QOpenGLFunctions_1_5, opcode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: QOpenGLFunctions_1_5, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlFlush(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlFlush(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlFinish(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlFinish(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: QOpenGLFunctions_1_5, cap: u32) void {
        qtc.QOpenGLFunctions_1_5_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: QOpenGLFunctions_1_5, cap: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: QOpenGLFunctions_1_5, flag: u8) void {
        qtc.QOpenGLFunctions_1_5_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColorMask(self: QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_5_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: QOpenGLFunctions_1_5, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: QOpenGLFunctions_1_5, depth: f64) void {
        qtc.QOpenGLFunctions_1_5_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: QOpenGLFunctions_1_5, s: i32) void {
        qtc.QOpenGLFunctions_1_5_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearColor(self: QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: QOpenGLFunctions_1_5, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlTexImage2D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlTexImage1D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: QOpenGLFunctions_1_5, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: QOpenGLFunctions_1_5, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlScissor(self: QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: QOpenGLFunctions_1_5, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: QOpenGLFunctions_1_5, size: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: QOpenGLFunctions_1_5, width: f32) void {
        qtc.QOpenGLFunctions_1_5_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: QOpenGLFunctions_1_5, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: []const u8 `
    ///
    pub fn GlIndexubv(self: QOpenGLFunctions_1_5, c: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlIndexubv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: u8 `
    ///
    pub fn GlIndexub(self: QOpenGLFunctions_1_5, c: u8) void {
        qtc.QOpenGLFunctions_1_5_GlIndexub(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: QOpenGLFunctions_1_5, texture: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: QOpenGLFunctions_1_5, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_1_5_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: QOpenGLFunctions_1_5, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: QOpenGLFunctions_1_5, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlTexSubImage2D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlTexSubImage1D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyTexSubImage2D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyTexSubImage1D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyTexImage2D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyTexImage1D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: QOpenGLFunctions_1_5, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetPointerv(self: QOpenGLFunctions_1_5, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetPointerv(@ptrCast(self.ptr), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn GlDrawElements(self: QOpenGLFunctions_1_5, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: QOpenGLFunctions_1_5, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_1_5_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyTexSubImage3D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlTexSubImage3D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlTexImage3D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlDrawRangeElements(self: QOpenGLFunctions_1_5, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlBlendColor(self: QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn GlGetCompressedTexImage(self: QOpenGLFunctions_1_5, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetCompressedTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCompressedTexSubImage1D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCompressedTexSubImage2D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCompressedTexSubImage3D(self: QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCompressedTexImage1D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCompressedTexImage2D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCompressedTexImage3D(self: QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: QOpenGLFunctions_1_5, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_1_5_GlSampleCoverage(@ptrCast(self.ptr), @bitCast(value), @bitCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: QOpenGLFunctions_1_5, texture: u32) void {
        qtc.QOpenGLFunctions_1_5_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlPointParameteriv(self: QOpenGLFunctions_1_5, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameteriv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPointParameteri(self: QOpenGLFunctions_1_5, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlPointParameterfv(self: QOpenGLFunctions_1_5, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameterfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPointParameterf(self: QOpenGLFunctions_1_5, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameterf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMultiDrawElements(self: QOpenGLFunctions_1_5, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiDrawElements(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn GlMultiDrawArrays(self: QOpenGLFunctions_1_5, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiDrawArrays(@ptrCast(self.ptr), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparate(self: QOpenGLFunctions_1_5, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetBufferPointerv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: QOpenGLFunctions_1_5, target: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBuffer(self: QOpenGLFunctions_1_5, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_1_5_GlMapBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn GlGetBufferSubData(self: QOpenGLFunctions_1_5, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlBufferSubData(self: QOpenGLFunctions_1_5, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn GlBufferData(self: QOpenGLFunctions_1_5, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: QOpenGLFunctions_1_5, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: QOpenGLFunctions_1_5, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_1_5_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: QOpenGLFunctions_1_5, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: QOpenGLFunctions_1_5, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: QOpenGLFunctions_1_5, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_1_5_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryObjectiv(self: QOpenGLFunctions_1_5, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetQueryObjectiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: QOpenGLFunctions_1_5, target: u32) void {
        qtc.QOpenGLFunctions_1_5_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: QOpenGLFunctions_1_5, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: QOpenGLFunctions_1_5, id: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: QOpenGLFunctions_1_5, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: QOpenGLFunctions_1_5, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_1_5_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlTranslatef(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTranslatef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlTranslated(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTranslated(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlScalef(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlScalef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlScaled(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlScaled(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRotatef(self: QOpenGLFunctions_1_5, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRotatef(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` angle: f64 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRotated(self: QOpenGLFunctions_1_5, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRotated(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlPushMatrix(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlPushMatrix(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlPopMatrix(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlPopMatrix(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlOrtho(self: QOpenGLFunctions_1_5, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_5_GlOrtho(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultMatrixd(self: QOpenGLFunctions_1_5, m: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultMatrixf(self: QOpenGLFunctions_1_5, m: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlMatrixMode(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlMatrixMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadMatrixd(self: QOpenGLFunctions_1_5, m: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlLoadMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadMatrixf(self: QOpenGLFunctions_1_5, m: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLoadMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlLoadIdentity(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlLoadIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlFrustum(self: QOpenGLFunctions_1_5, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_5_GlFrustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlIsList(self: QOpenGLFunctions_1_5, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexGeniv(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexGenfv(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetTexGendv(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexEnviv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexEnvfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: []u8 `
    ///
    pub fn GlGetPolygonStipple(self: QOpenGLFunctions_1_5, mask: []u8) void {
        qtc.QOpenGLFunctions_1_5_GlGetPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn GlGetPixelMapusv(self: QOpenGLFunctions_1_5, mapVal: u32, values: []u16) void {
        qtc.QOpenGLFunctions_1_5_GlGetPixelMapusv(@ptrCast(self.ptr), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn GlGetPixelMapuiv(self: QOpenGLFunctions_1_5, mapVal: u32, values: []u32) void {
        qtc.QOpenGLFunctions_1_5_GlGetPixelMapuiv(@ptrCast(self.ptr), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn GlGetPixelMapfv(self: QOpenGLFunctions_1_5, mapVal: u32, values: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetPixelMapfv(@ptrCast(self.ptr), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMaterialiv(self: QOpenGLFunctions_1_5, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMaterialfv(self: QOpenGLFunctions_1_5, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn GlGetMapiv(self: QOpenGLFunctions_1_5, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMapiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn GlGetMapfv(self: QOpenGLFunctions_1_5, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMapfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn GlGetMapdv(self: QOpenGLFunctions_1_5, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetMapdv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetLightiv(self: QOpenGLFunctions_1_5, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetLightfv(self: QOpenGLFunctions_1_5, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn GlGetClipPlane(self: QOpenGLFunctions_1_5, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlDrawPixels(self: QOpenGLFunctions_1_5, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlDrawPixels(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyPixels(self: QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn GlPixelMapusv(self: QOpenGLFunctions_1_5, mapVal: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_1_5_GlPixelMapusv(@ptrCast(self.ptr), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn GlPixelMapuiv(self: QOpenGLFunctions_1_5, mapVal: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelMapuiv(@ptrCast(self.ptr), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPixelMapfv(self: QOpenGLFunctions_1_5, mapVal: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelMapfv(@ptrCast(self.ptr), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelTransferi(self: QOpenGLFunctions_1_5, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelTransferi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelTransferf(self: QOpenGLFunctions_1_5, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelTransferf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn GlPixelZoom(self: QOpenGLFunctions_1_5, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelZoom(@ptrCast(self.ptr), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn GlAlphaFunc(self: QOpenGLFunctions_1_5, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_5_GlAlphaFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn GlEvalPoint2(self: QOpenGLFunctions_1_5, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalPoint2(@ptrCast(self.ptr), @bitCast(i), @bitCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlEvalMesh2(self: QOpenGLFunctions_1_5, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalMesh2(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlEvalPoint1(self: QOpenGLFunctions_1_5, i: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalPoint1(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn GlEvalMesh1(self: QOpenGLFunctions_1_5, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalMesh1(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord2fv(self: QOpenGLFunctions_1_5, u: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn GlEvalCoord2f(self: QOpenGLFunctions_1_5, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2f(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord2dv(self: QOpenGLFunctions_1_5, u: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn GlEvalCoord2d(self: QOpenGLFunctions_1_5, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2d(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord1fv(self: QOpenGLFunctions_1_5, u: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: f32 `
    ///
    pub fn GlEvalCoord1f(self: QOpenGLFunctions_1_5, u: f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1f(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord1dv(self: QOpenGLFunctions_1_5, u: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` u: f64 `
    ///
    pub fn GlEvalCoord1d(self: QOpenGLFunctions_1_5, u: f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1d(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMapGrid2f(self: QOpenGLFunctions_1_5, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid2f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMapGrid2d(self: QOpenGLFunctions_1_5, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid2d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn GlMapGrid1f(self: QOpenGLFunctions_1_5, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid1f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn GlMapGrid1d(self: QOpenGLFunctions_1_5, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid1d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMap2f(self: QOpenGLFunctions_1_5, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMap2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMap2d(self: QOpenGLFunctions_1_5, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMap2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMap1f(self: QOpenGLFunctions_1_5, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMap1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMap1d(self: QOpenGLFunctions_1_5, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMap1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushAttrib(self: QOpenGLFunctions_1_5, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPushAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlPopAttrib(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlPopAttrib(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn GlAccum(self: QOpenGLFunctions_1_5, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_5_GlAccum(@ptrCast(self.ptr), @bitCast(op), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlIndexMask(self: QOpenGLFunctions_1_5, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlClearIndex(self: QOpenGLFunctions_1_5, c: f32) void {
        qtc.QOpenGLFunctions_1_5_GlClearIndex(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearAccum(self: QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlClearAccum(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlPushName(self: QOpenGLFunctions_1_5, name: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPushName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlPopName(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlPopName(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` token: f32 `
    ///
    pub fn GlPassThrough(self: QOpenGLFunctions_1_5, token: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPassThrough(@ptrCast(self.ptr), @bitCast(token));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` name: u32 `
    ///
    pub fn GlLoadName(self: QOpenGLFunctions_1_5, name: u32) void {
        qtc.QOpenGLFunctions_1_5_GlLoadName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlInitNames(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlInitNames(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlRenderMode(self: QOpenGLFunctions_1_5, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_5_GlRenderMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn GlSelectBuffer(self: QOpenGLFunctions_1_5, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_1_5_GlSelectBuffer(@ptrCast(self.ptr), @bitCast(size), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn GlFeedbackBuffer(self: QOpenGLFunctions_1_5, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlFeedbackBuffer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexGeniv(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexGeni(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGeni(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexGenfv(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexGenf(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGenf(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn GlTexGendv(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn GlTexGend(self: QOpenGLFunctions_1_5, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexGend(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexEnviv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexEnvi(self: QOpenGLFunctions_1_5, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnvi(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexEnvfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexEnvf(self: QOpenGLFunctions_1_5, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnvf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlShadeModel(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlShadeModel(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn GlPolygonStipple(self: QOpenGLFunctions_1_5, mask: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlMaterialiv(self: QOpenGLFunctions_1_5, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlMateriali(self: QOpenGLFunctions_1_5, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMateriali(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlMaterialfv(self: QOpenGLFunctions_1_5, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlMaterialf(self: QOpenGLFunctions_1_5, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMaterialf(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn GlLineStipple(self: QOpenGLFunctions_1_5, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_5_GlLineStipple(@ptrCast(self.ptr), @bitCast(factor), @bitCast(pattern));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightModeliv(self: QOpenGLFunctions_1_5, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModeliv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLightModeli(self: QOpenGLFunctions_1_5, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModeli(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightModelfv(self: QOpenGLFunctions_1_5, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModelfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightModelf(self: QOpenGLFunctions_1_5, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModelf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightiv(self: QOpenGLFunctions_1_5, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLighti(self: QOpenGLFunctions_1_5, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlLighti(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightfv(self: QOpenGLFunctions_1_5, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightf(self: QOpenGLFunctions_1_5, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightf(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlFogiv(self: QOpenGLFunctions_1_5, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlFogiv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFogi(self: QOpenGLFunctions_1_5, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlFogi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlFogfv(self: QOpenGLFunctions_1_5, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlFogf(self: QOpenGLFunctions_1_5, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlColorMaterial(self: QOpenGLFunctions_1_5, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlColorMaterial(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn GlClipPlane(self: QOpenGLFunctions_1_5, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex4sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlVertex4s(self: QOpenGLFunctions_1_5, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex4iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlVertex4i(self: QOpenGLFunctions_1_5, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex4fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlVertex4f(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex4dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlVertex4d(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertex3s(self: QOpenGLFunctions_1_5, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertex3i(self: QOpenGLFunctions_1_5, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertex3f(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertex3d(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex2sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertex2s(self: QOpenGLFunctions_1_5, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex2iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertex2i(self: QOpenGLFunctions_1_5, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex2fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertex2f(self: QOpenGLFunctions_1_5, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex2dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertex2d(self: QOpenGLFunctions_1_5, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord4sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn GlTexCoord4s(self: QOpenGLFunctions_1_5, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord4iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn GlTexCoord4i(self: QOpenGLFunctions_1_5, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord4fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn GlTexCoord4f(self: QOpenGLFunctions_1_5, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord4dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn GlTexCoord4d(self: QOpenGLFunctions_1_5, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlTexCoord3s(self: QOpenGLFunctions_1_5, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlTexCoord3i(self: QOpenGLFunctions_1_5, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlTexCoord3f(self: QOpenGLFunctions_1_5, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlTexCoord3d(self: QOpenGLFunctions_1_5, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord2sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlTexCoord2s(self: QOpenGLFunctions_1_5, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord2iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlTexCoord2i(self: QOpenGLFunctions_1_5, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord2fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlTexCoord2f(self: QOpenGLFunctions_1_5, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord2dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlTexCoord2d(self: QOpenGLFunctions_1_5, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord1sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlTexCoord1s(self: QOpenGLFunctions_1_5, s: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1s(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord1iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlTexCoord1i(self: QOpenGLFunctions_1_5, s: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1i(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord1fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlTexCoord1f(self: QOpenGLFunctions_1_5, s: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1f(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord1dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlTexCoord1d(self: QOpenGLFunctions_1_5, s: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1d(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn GlRectsv(self: QOpenGLFunctions_1_5, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRectsv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x1: i16 `
    ///
    /// ` y1: i16 `
    ///
    /// ` x2: i16 `
    ///
    /// ` y2: i16 `
    ///
    pub fn GlRects(self: QOpenGLFunctions_1_5, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRects(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn GlRectiv(self: QOpenGLFunctions_1_5, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRectiv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn GlRecti(self: QOpenGLFunctions_1_5, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRecti(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn GlRectfv(self: QOpenGLFunctions_1_5, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRectfv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x1: f32 `
    ///
    /// ` y1: f32 `
    ///
    /// ` x2: f32 `
    ///
    /// ` y2: f32 `
    ///
    pub fn GlRectf(self: QOpenGLFunctions_1_5, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRectf(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn GlRectdv(self: QOpenGLFunctions_1_5, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRectdv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn GlRectd(self: QOpenGLFunctions_1_5, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRectd(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos4sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlRasterPos4s(self: QOpenGLFunctions_1_5, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos4iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlRasterPos4i(self: QOpenGLFunctions_1_5, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos4fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlRasterPos4f(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos4dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlRasterPos4d(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlRasterPos3s(self: QOpenGLFunctions_1_5, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlRasterPos3i(self: QOpenGLFunctions_1_5, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRasterPos3f(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRasterPos3d(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos2sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlRasterPos2s(self: QOpenGLFunctions_1_5, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos2iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlRasterPos2i(self: QOpenGLFunctions_1_5, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos2fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlRasterPos2f(self: QOpenGLFunctions_1_5, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos2dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlRasterPos2d(self: QOpenGLFunctions_1_5, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlNormal3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn GlNormal3s(self: QOpenGLFunctions_1_5, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3s(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlNormal3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn GlNormal3i(self: QOpenGLFunctions_1_5, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3i(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlNormal3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn GlNormal3f(self: QOpenGLFunctions_1_5, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3f(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlNormal3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn GlNormal3d(self: QOpenGLFunctions_1_5, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3d(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlNormal3bv(self: QOpenGLFunctions_1_5, v: []const i8) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn GlNormal3b(self: QOpenGLFunctions_1_5, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3b(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: []const i16 `
    ///
    pub fn GlIndexsv(self: QOpenGLFunctions_1_5, c: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlIndexsv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: i16 `
    ///
    pub fn GlIndexs(self: QOpenGLFunctions_1_5, c: i16) void {
        qtc.QOpenGLFunctions_1_5_GlIndexs(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: []const i32 `
    ///
    pub fn GlIndexiv(self: QOpenGLFunctions_1_5, c: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexiv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: i32 `
    ///
    pub fn GlIndexi(self: QOpenGLFunctions_1_5, c: i32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexi(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: []const f32 `
    ///
    pub fn GlIndexfv(self: QOpenGLFunctions_1_5, c: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexfv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: f32 `
    ///
    pub fn GlIndexf(self: QOpenGLFunctions_1_5, c: f32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexf(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: []const f64 `
    ///
    pub fn GlIndexdv(self: QOpenGLFunctions_1_5, c: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlIndexdv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` c: f64 `
    ///
    pub fn GlIndexd(self: QOpenGLFunctions_1_5, c: f64) void {
        qtc.QOpenGLFunctions_1_5_GlIndexd(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlEnd(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn GlEdgeFlagv(self: QOpenGLFunctions_1_5, flag: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlEdgeFlagv(@ptrCast(self.ptr), flag.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlEdgeFlag(self: QOpenGLFunctions_1_5, flag: u8) void {
        qtc.QOpenGLFunctions_1_5_GlEdgeFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor4usv(self: QOpenGLFunctions_1_5, v: []const u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn GlColor4us(self: QOpenGLFunctions_1_5, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor4uiv(self: QOpenGLFunctions_1_5, v: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    /// ` alpha: u32 `
    ///
    pub fn GlColor4ui(self: QOpenGLFunctions_1_5, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor4ubv(self: QOpenGLFunctions_1_5, v: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColor4ub(self: QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor4sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    /// ` alpha: i16 `
    ///
    pub fn GlColor4s(self: QOpenGLFunctions_1_5, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor4iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    /// ` alpha: i32 `
    ///
    pub fn GlColor4i(self: QOpenGLFunctions_1_5, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor4fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlColor4f(self: QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor4dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn GlColor4d(self: QOpenGLFunctions_1_5, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor4d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor4bv(self: QOpenGLFunctions_1_5, v: []const i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    /// ` alpha: i8 `
    ///
    pub fn GlColor4b(self: QOpenGLFunctions_1_5, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor3usv(self: QOpenGLFunctions_1_5, v: []const u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlColor3us(self: QOpenGLFunctions_1_5, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor3uiv(self: QOpenGLFunctions_1_5, v: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlColor3ui(self: QOpenGLFunctions_1_5, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor3ubv(self: QOpenGLFunctions_1_5, v: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlColor3ub(self: QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlColor3s(self: QOpenGLFunctions_1_5, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlColor3i(self: QOpenGLFunctions_1_5, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlColor3f(self: QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlColor3d(self: QOpenGLFunctions_1_5, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor3bv(self: QOpenGLFunctions_1_5, v: []const i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlColor3b(self: QOpenGLFunctions_1_5, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlBitmap(self: QOpenGLFunctions_1_5, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlBitmap(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBegin(self: QOpenGLFunctions_1_5, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBegin(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` base: u32 `
    ///
    pub fn GlListBase(self: QOpenGLFunctions_1_5, base: u32) void {
        qtc.QOpenGLFunctions_1_5_GlListBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlGenLists(self: QOpenGLFunctions_1_5, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_5_GlGenLists(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlDeleteLists(self: QOpenGLFunctions_1_5, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteLists(@ptrCast(self.ptr), @bitCast(list), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn GlCallLists(self: QOpenGLFunctions_1_5, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlCallLists(@ptrCast(self.ptr), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` list: u32 `
    ///
    pub fn GlCallList(self: QOpenGLFunctions_1_5, list: u32) void {
        qtc.QOpenGLFunctions_1_5_GlCallList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlEndList(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlEndList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlNewList(self: QOpenGLFunctions_1_5, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlNewList(@ptrCast(self.ptr), @bitCast(list), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushClientAttrib(self: QOpenGLFunctions_1_5, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPushClientAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn GlPopClientAttrib(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_GlPopClientAttrib(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPrioritizeTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` priorities: []const f32 `
    ///
    pub fn GlPrioritizeTextures(self: QOpenGLFunctions_1_5, n: i32, textures: []const u32, priorities: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlPrioritizeTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr, priorities.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glAreTexturesResident)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` residences: []u8 `
    ///
    pub fn GlAreTexturesResident(self: QOpenGLFunctions_1_5, n: i32, textures: []const u32, residences: []u8) u8 {
        return qtc.QOpenGLFunctions_1_5_GlAreTexturesResident(@ptrCast(self.ptr), @bitCast(n), textures.ptr, residences.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlVertexPointer(self: QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlVertexPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlTexCoordPointer(self: QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoordPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlNormalPointer(self: QOpenGLFunctions_1_5, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlNormalPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glInterleavedArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` format: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlInterleavedArrays(self: QOpenGLFunctions_1_5, format: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlInterleavedArrays(@ptrCast(self.ptr), @bitCast(format), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlIndexPointer(self: QOpenGLFunctions_1_5, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlIndexPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEnableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlEnableClientState(self: QOpenGLFunctions_1_5, array: u32) void {
        qtc.QOpenGLFunctions_1_5_GlEnableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEdgeFlagPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlEdgeFlagPointer(self: QOpenGLFunctions_1_5, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlEdgeFlagPointer(@ptrCast(self.ptr), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDisableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` array: u32 `
    ///
    pub fn GlDisableClientState(self: QOpenGLFunctions_1_5, array: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDisableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlColorPointer(self: QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glArrayElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` i: i32 `
    ///
    pub fn GlArrayElement(self: QOpenGLFunctions_1_5, i: i32) void {
        qtc.QOpenGLFunctions_1_5_GlArrayElement(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glResetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetMinmax(self: QOpenGLFunctions_1_5, target: u32) void {
        qtc.QOpenGLFunctions_1_5_GlResetMinmax(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glResetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetHistogram(self: QOpenGLFunctions_1_5, target: u32) void {
        qtc.QOpenGLFunctions_1_5_GlResetHistogram(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlMinmax(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_5_GlMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlHistogram(self: QOpenGLFunctions_1_5, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_5_GlHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(width), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMinmaxParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMinmaxParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMinmaxParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMinmaxParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMinmaxParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMinmaxParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlGetMinmax(self: QOpenGLFunctions_1_5, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetHistogramParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetHistogramParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetHistogramParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetHistogramParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetHistogramParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetHistogramParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlGetHistogram(self: QOpenGLFunctions_1_5, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSeparableFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlSeparableFilter2D(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*const anyopaque, column: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlSeparableFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetSeparableFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlGetSeparableFilter(self: QOpenGLFunctions_1_5, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetSeparableFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetConvolutionParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetConvolutionParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetConvolutionFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*anyopaque `
    ///
    pub fn GlGetConvolutionFilter(self: QOpenGLFunctions_1_5, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetConvolutionFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyConvolutionFilter2D(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyConvolutionFilter1D(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlConvolutionParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: i32 `
    ///
    pub fn GlConvolutionParameteri(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlConvolutionParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: f32 `
    ///
    pub fn GlConvolutionParameterf(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlConvolutionFilter2D(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlConvolutionFilter1D(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyColorSubTable(self: QOpenGLFunctions_1_5, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlColorSubTable(self: QOpenGLFunctions_1_5, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(count), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetColorTableParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetColorTableParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` table: ?*anyopaque `
    ///
    pub fn GlGetColorTable(self: QOpenGLFunctions_1_5, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlGetColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlCopyColorTable(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlColorTableParameteriv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlColorTableParameterfv(self: QOpenGLFunctions_1_5, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlColorTable(self: QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultTransposeMatrixd(self: QOpenGLFunctions_1_5, m: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultTransposeMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultTransposeMatrixf(self: QOpenGLFunctions_1_5, m: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultTransposeMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadTransposeMatrixd(self: QOpenGLFunctions_1_5, m: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlLoadTransposeMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadTransposeMatrixf(self: QOpenGLFunctions_1_5, m: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLoadTransposeMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord4sv(self: QOpenGLFunctions_1_5, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMultiTexCoord4s(self: QOpenGLFunctions_1_5, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord4iv(self: QOpenGLFunctions_1_5, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMultiTexCoord4i(self: QOpenGLFunctions_1_5, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord4fv(self: QOpenGLFunctions_1_5, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMultiTexCoord4f(self: QOpenGLFunctions_1_5, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord4dv(self: QOpenGLFunctions_1_5, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
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
    pub fn GlMultiTexCoord4d(self: QOpenGLFunctions_1_5, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord3sv(self: QOpenGLFunctions_1_5, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlMultiTexCoord3s(self: QOpenGLFunctions_1_5, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord3iv(self: QOpenGLFunctions_1_5, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlMultiTexCoord3i(self: QOpenGLFunctions_1_5, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord3fv(self: QOpenGLFunctions_1_5, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlMultiTexCoord3f(self: QOpenGLFunctions_1_5, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord3dv(self: QOpenGLFunctions_1_5, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlMultiTexCoord3d(self: QOpenGLFunctions_1_5, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord2sv(self: QOpenGLFunctions_1_5, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlMultiTexCoord2s(self: QOpenGLFunctions_1_5, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord2iv(self: QOpenGLFunctions_1_5, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlMultiTexCoord2i(self: QOpenGLFunctions_1_5, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord2fv(self: QOpenGLFunctions_1_5, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlMultiTexCoord2f(self: QOpenGLFunctions_1_5, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord2dv(self: QOpenGLFunctions_1_5, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlMultiTexCoord2d(self: QOpenGLFunctions_1_5, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord1sv(self: QOpenGLFunctions_1_5, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlMultiTexCoord1s(self: QOpenGLFunctions_1_5, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord1iv(self: QOpenGLFunctions_1_5, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlMultiTexCoord1i(self: QOpenGLFunctions_1_5, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord1fv(self: QOpenGLFunctions_1_5, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlMultiTexCoord1f(self: QOpenGLFunctions_1_5, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord1dv(self: QOpenGLFunctions_1_5, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlMultiTexCoord1d(self: QOpenGLFunctions_1_5, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClientActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlClientActiveTexture(self: QOpenGLFunctions_1_5, texture: u32) void {
        qtc.QOpenGLFunctions_1_5_GlClientActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlWindowPos3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlWindowPos3s(self: QOpenGLFunctions_1_5, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlWindowPos3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlWindowPos3i(self: QOpenGLFunctions_1_5, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlWindowPos3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlWindowPos3f(self: QOpenGLFunctions_1_5, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlWindowPos3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlWindowPos3d(self: QOpenGLFunctions_1_5, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlWindowPos2sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlWindowPos2s(self: QOpenGLFunctions_1_5, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlWindowPos2iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlWindowPos2i(self: QOpenGLFunctions_1_5, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlWindowPos2fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlWindowPos2f(self: QOpenGLFunctions_1_5, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlWindowPos2dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlWindowPos2d(self: QOpenGLFunctions_1_5, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlSecondaryColorPointer(self: QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlSecondaryColor3usv(self: QOpenGLFunctions_1_5, v: []const u16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlSecondaryColor3us(self: QOpenGLFunctions_1_5, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlSecondaryColor3uiv(self: QOpenGLFunctions_1_5, v: []const u32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlSecondaryColor3ui(self: QOpenGLFunctions_1_5, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlSecondaryColor3ubv(self: QOpenGLFunctions_1_5, v: []const u8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlSecondaryColor3ub(self: QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlSecondaryColor3sv(self: QOpenGLFunctions_1_5, v: []const i16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlSecondaryColor3s(self: QOpenGLFunctions_1_5, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlSecondaryColor3iv(self: QOpenGLFunctions_1_5, v: []const i32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlSecondaryColor3i(self: QOpenGLFunctions_1_5, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlSecondaryColor3fv(self: QOpenGLFunctions_1_5, v: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlSecondaryColor3f(self: QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlSecondaryColor3dv(self: QOpenGLFunctions_1_5, v: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlSecondaryColor3d(self: QOpenGLFunctions_1_5, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlSecondaryColor3bv(self: QOpenGLFunctions_1_5, v: []const i8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlSecondaryColor3b(self: QOpenGLFunctions_1_5, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlFogCoordPointer(self: QOpenGLFunctions_1_5, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoorddv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: []const f64 `
    ///
    pub fn GlFogCoorddv(self: QOpenGLFunctions_1_5, coord: []const f64) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoorddv(@ptrCast(self.ptr), coord.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: f64 `
    ///
    pub fn GlFogCoordd(self: QOpenGLFunctions_1_5, coord: f64) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordd(@ptrCast(self.ptr), @bitCast(coord));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: []const f32 `
    ///
    pub fn GlFogCoordfv(self: QOpenGLFunctions_1_5, coord: []const f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordfv(@ptrCast(self.ptr), coord.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` coord: f32 `
    ///
    pub fn GlFogCoordf(self: QOpenGLFunctions_1_5, coord: f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordf(@ptrCast(self.ptr), @bitCast(coord));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn IsInitialized(self: QOpenGLFunctions_1_5) bool {
        return qtc.QOpenGLFunctions_1_5_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn SuperIsInitialized(self: QOpenGLFunctions_1_5) bool {
        return qtc.QOpenGLFunctions_1_5_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_5`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: QOpenGLFunctions_1_5, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_5_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetOwningContext(self: QOpenGLFunctions_1_5, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_1_5_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SuperSetOwningContext(self: QOpenGLFunctions_1_5, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_1_5_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_5`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_1_5, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: QOpenGLFunctions_1_5, callback: *const fn (QOpenGLFunctions_1_5, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_1_5_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn OwningContext(self: QOpenGLFunctions_1_5) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_1_5_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn SuperOwningContext(self: QOpenGLFunctions_1_5) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_1_5_SuperOwningContext(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_5`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn OnOwningContext(self: QOpenGLFunctions_1_5, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_1_5_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#dtor.QOpenGLFunctions_1_5)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_5 `
    ///
    pub fn Delete(self: QOpenGLFunctions_1_5) void {
        qtc.QOpenGLFunctions_1_5_Delete(@ptrCast(self.ptr));
    }
};
