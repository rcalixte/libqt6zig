const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html)
pub const QOpenGLFunctions_4_0_Core = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_0_Core,

    pub const _is_QOpenGLFunctions_4_0_Core = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// New constructs a new QOpenGLFunctions_4_0_Core object.
    ///
    pub fn New() QOpenGLFunctions_4_0_Core {
        return .{ .ptr = qtc.QOpenGLFunctions_4_0_Core_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn InitializeOpenGLFunctions(self: QOpenGLFunctions_4_0_Core) bool {
        return qtc.QOpenGLFunctions_4_0_Core_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: QOpenGLFunctions_4_0_Core, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_0_Core_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeOpenGLFunctions` instead
    ///
    pub const QBaseInitializeOpenGLFunctions = SuperInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn SuperInitializeOpenGLFunctions(self: QOpenGLFunctions_4_0_Core) bool {
        return qtc.QOpenGLFunctions_4_0_Core_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlViewport(self: QOpenGLFunctions_4_0_Core, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: QOpenGLFunctions_4_0_Core, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: QOpenGLFunctions_4_0_Core, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexLevelParameteriv(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexLevelParameterfv(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetTexImage(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: QOpenGLFunctions_4_0_Core, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_0_Core_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlReadPixels(self: QOpenGLFunctions_4_0_Core, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: QOpenGLFunctions_4_0_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: QOpenGLFunctions_4_0_Core, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: QOpenGLFunctions_4_0_Core, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: QOpenGLFunctions_4_0_Core, func: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: QOpenGLFunctions_4_0_Core, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: QOpenGLFunctions_4_0_Core, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: QOpenGLFunctions_4_0_Core, opcode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: QOpenGLFunctions_4_0_Core, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlFlush(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFlush(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlFinish(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFinish(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: QOpenGLFunctions_4_0_Core, cap: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: QOpenGLFunctions_4_0_Core, cap: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: QOpenGLFunctions_4_0_Core, flag: u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColorMask(self: QOpenGLFunctions_4_0_Core, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: QOpenGLFunctions_4_0_Core, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: QOpenGLFunctions_4_0_Core, depth: f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: QOpenGLFunctions_4_0_Core, s: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearColor(self: QOpenGLFunctions_4_0_Core, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: QOpenGLFunctions_4_0_Core, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: QOpenGLFunctions_4_0_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexImage2D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexImage1D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlScissor(self: QOpenGLFunctions_4_0_Core, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: QOpenGLFunctions_4_0_Core, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: QOpenGLFunctions_4_0_Core, size: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: QOpenGLFunctions_4_0_Core, width: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: QOpenGLFunctions_4_0_Core, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: QOpenGLFunctions_4_0_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: QOpenGLFunctions_4_0_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: QOpenGLFunctions_4_0_Core, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: QOpenGLFunctions_4_0_Core, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: QOpenGLFunctions_4_0_Core, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: QOpenGLFunctions_4_0_Core, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexSubImage2D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexSubImage1D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCopyTexSubImage2D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCopyTexSubImage1D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCopyTexImage2D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCopyTexImage1D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: QOpenGLFunctions_4_0_Core, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn GlDrawElements(self: QOpenGLFunctions_4_0_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: QOpenGLFunctions_4_0_Core, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCopyTexSubImage3D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexSubImage3D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexImage3D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlDrawRangeElements(self: QOpenGLFunctions_4_0_Core, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: QOpenGLFunctions_4_0_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlBlendColor(self: QOpenGLFunctions_4_0_Core, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn GlGetCompressedTexImage(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetCompressedTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCompressedTexSubImage1D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompressedTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCompressedTexSubImage2D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCompressedTexSubImage3D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCompressedTexImage1D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompressedTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCompressedTexImage2D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCompressedTexImage3D(self: QOpenGLFunctions_4_0_Core, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: QOpenGLFunctions_4_0_Core, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSampleCoverage(@ptrCast(self.ptr), @bitCast(value), @bitCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: QOpenGLFunctions_4_0_Core, texture: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlPointParameteriv(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPointParameteriv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPointParameteri(self: QOpenGLFunctions_4_0_Core, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPointParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlPointParameterfv(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPointParameterfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPointParameterf(self: QOpenGLFunctions_4_0_Core, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPointParameterf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlMultiDrawElements(self: QOpenGLFunctions_4_0_Core, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlMultiDrawElements(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn GlMultiDrawArrays(self: QOpenGLFunctions_4_0_Core, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlMultiDrawArrays(@ptrCast(self.ptr), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparate(self: QOpenGLFunctions_4_0_Core, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetBufferPointerv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: QOpenGLFunctions_4_0_Core, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBuffer(self: QOpenGLFunctions_4_0_Core, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_0_Core_GlMapBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn GlGetBufferSubData(self: QOpenGLFunctions_4_0_Core, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlBufferSubData(self: QOpenGLFunctions_4_0_Core, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn GlBufferData(self: QOpenGLFunctions_4_0_Core, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: QOpenGLFunctions_4_0_Core, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: QOpenGLFunctions_4_0_Core, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: QOpenGLFunctions_4_0_Core, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: QOpenGLFunctions_4_0_Core, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: QOpenGLFunctions_4_0_Core, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryObjectiv(self: QOpenGLFunctions_4_0_Core, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetQueryObjectiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: QOpenGLFunctions_4_0_Core, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: QOpenGLFunctions_4_0_Core, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: QOpenGLFunctions_4_0_Core, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: QOpenGLFunctions_4_0_Core, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: QOpenGLFunctions_4_0_Core, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlVertexAttribPointer(self: QOpenGLFunctions_4_0_Core, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: QOpenGLFunctions_4_0_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform4iv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform3iv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform2iv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform1iv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform4fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform3fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform2fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform1fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlUniform4i(self: QOpenGLFunctions_4_0_Core, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn GlUniform3i(self: QOpenGLFunctions_4_0_Core, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlUniform2i(self: QOpenGLFunctions_4_0_Core, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlUniform1i(self: QOpenGLFunctions_4_0_Core, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlUniform4f(self: QOpenGLFunctions_4_0_Core, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn GlUniform3f(self: QOpenGLFunctions_4_0_Core, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlUniform2f(self: QOpenGLFunctions_4_0_Core, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlUniform1f(self: QOpenGLFunctions_4_0_Core, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: QOpenGLFunctions_4_0_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlShaderSource(self: QOpenGLFunctions_4_0_Core, allocator: std.mem.Allocator, shader: u32, count: i32, stringVal: []const [:0]const u8, length: []const i32) void {
        const stringVal_chararr = allocator.alloc([*c]const u8, stringVal.len) catch @panic("qopenglfunctions_4_0_core.GlShaderSource: Memory allocation failed");
        defer allocator.free(stringVal_chararr);
        for (stringVal, 0..stringVal.len) |str, i|
            stringVal_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_0_Core_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), stringVal_chararr.ptr, length.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: QOpenGLFunctions_4_0_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: QOpenGLFunctions_4_0_Core, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: QOpenGLFunctions_4_0_Core, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn GlGetVertexAttribPointerv(self: QOpenGLFunctions_4_0_Core, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: QOpenGLFunctions_4_0_Core, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: QOpenGLFunctions_4_0_Core, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribdv(self: QOpenGLFunctions_4_0_Core, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetVertexAttribdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: QOpenGLFunctions_4_0_Core, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: QOpenGLFunctions_4_0_Core, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: QOpenGLFunctions_4_0_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn GlGetShaderSource(self: QOpenGLFunctions_4_0_Core, shader: u32, bufSize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetShaderInfoLog(self: QOpenGLFunctions_4_0_Core, shader: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: QOpenGLFunctions_4_0_Core, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetProgramInfoLog(self: QOpenGLFunctions_4_0_Core, program: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: QOpenGLFunctions_4_0_Core, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: QOpenGLFunctions_4_0_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` maxCount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` obj: []u32 `
    ///
    pub fn GlGetAttachedShaders(self: QOpenGLFunctions_4_0_Core, program: u32, maxCount: i32, count: []i32, obj: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: QOpenGLFunctions_4_0_Core, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: QOpenGLFunctions_4_0_Core, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: QOpenGLFunctions_4_0_Core, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: QOpenGLFunctions_4_0_Core, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: QOpenGLFunctions_4_0_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: QOpenGLFunctions_4_0_Core, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_0_Core_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlCreateProgram(self: QOpenGLFunctions_4_0_Core) u32 {
        return qtc.QOpenGLFunctions_4_0_Core_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: QOpenGLFunctions_4_0_Core, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: QOpenGLFunctions_4_0_Core, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: QOpenGLFunctions_4_0_Core, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: QOpenGLFunctions_4_0_Core, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFuncSeparate(self: QOpenGLFunctions_4_0_Core, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` sfail: u32 `
    ///
    /// ` dpfail: u32 `
    ///
    /// ` dppass: u32 `
    ///
    pub fn GlStencilOpSeparate(self: QOpenGLFunctions_4_0_Core, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: QOpenGLFunctions_4_0_Core, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x3fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x4fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x2fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x4fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x2fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x3fv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn GlIsVertexArray(self: QOpenGLFunctions_4_0_Core, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn GlGenVertexArrays(self: QOpenGLFunctions_4_0_Core, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn GlDeleteVertexArrays(self: QOpenGLFunctions_4_0_Core, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn GlBindVertexArray(self: QOpenGLFunctions_4_0_Core, array: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlFlushMappedBufferRange(self: QOpenGLFunctions_4_0_Core, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBufferRange(self: QOpenGLFunctions_4_0_Core, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_0_Core_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlFramebufferTextureLayer(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlRenderbufferStorageMultisample(self: QOpenGLFunctions_4_0_Core, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlBlitFramebuffer(self: QOpenGLFunctions_4_0_Core, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: QOpenGLFunctions_4_0_Core, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetFramebufferAttachmentParameteriv(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlFramebufferRenderbuffer(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlFramebufferTexture3D(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFramebufferTexture3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlFramebufferTexture2D(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlFramebufferTexture1D(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFramebufferTexture1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: QOpenGLFunctions_4_0_Core, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: QOpenGLFunctions_4_0_Core, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: QOpenGLFunctions_4_0_Core, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: QOpenGLFunctions_4_0_Core, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlRenderbufferStorage(self: QOpenGLFunctions_4_0_Core, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: QOpenGLFunctions_4_0_Core, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: QOpenGLFunctions_4_0_Core, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: QOpenGLFunctions_4_0_Core, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: QOpenGLFunctions_4_0_Core, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlGetStringi(self: QOpenGLFunctions_4_0_Core, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_0_Core_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn GlClearBufferfi(self: QOpenGLFunctions_4_0_Core, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlClearBufferfv(self: QOpenGLFunctions_4_0_Core, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlClearBufferuiv(self: QOpenGLFunctions_4_0_Core, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlClearBufferiv(self: QOpenGLFunctions_4_0_Core, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetTexParameterIuiv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameterIiv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn GlTexParameterIuiv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameterIiv(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform4uiv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform3uiv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform2uiv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform1uiv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlUniform4ui(self: QOpenGLFunctions_4_0_Core, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn GlUniform3ui(self: QOpenGLFunctions_4_0_Core, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlUniform2ui(self: QOpenGLFunctions_4_0_Core, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlUniform1ui(self: QOpenGLFunctions_4_0_Core, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataLocation(self: QOpenGLFunctions_4_0_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocation(self: QOpenGLFunctions_4_0_Core, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlBindFragDataLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformuiv(self: QOpenGLFunctions_4_0_Core, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetVertexAttribIuiv(self: QOpenGLFunctions_4_0_Core, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribIiv(self: QOpenGLFunctions_4_0_Core, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlVertexAttribIPointer(self: QOpenGLFunctions_4_0_Core, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlEndConditionalRender(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEndConditionalRender(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBeginConditionalRender(self: QOpenGLFunctions_4_0_Core, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBeginConditionalRender(@ptrCast(self.ptr), @bitCast(id), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn GlClampColor(self: QOpenGLFunctions_4_0_Core, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlClampColor(@ptrCast(self.ptr), @bitCast(target), @bitCast(clamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTransformFeedbackVaryings(self: QOpenGLFunctions_4_0_Core, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*c]const u8, varyings.len) catch @panic("qopenglfunctions_4_0_core.GlTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_0_Core_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), varyings_chararr.ptr, @bitCast(bufferMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBufferBase(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlBindBufferRange(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlEndTransformFeedback(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn GlBeginTransformFeedback(self: QOpenGLFunctions_4_0_Core, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlIsEnabledi(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisablei(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnablei(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn GlGetIntegeriV(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn GlGetBooleaniV(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlColorMaski(self: QOpenGLFunctions_4_0_Core, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlCopyBufferSubData(self: QOpenGLFunctions_4_0_Core, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_0_Core_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn GlUniformBlockBinding(self: QOpenGLFunctions_4_0_Core, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetActiveUniformBlockName(self: QOpenGLFunctions_4_0_Core, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetActiveUniformBlockiv(self: QOpenGLFunctions_4_0_Core, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn GlGetUniformBlockIndex(self: QOpenGLFunctions_4_0_Core, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetActiveUniformName(self: QOpenGLFunctions_4_0_Core, program: u32, uniformIndex: u32, bufSize: i32, length: []i32, uniformName: [:0]u8) void {
        const uniformName_Cstring = uniformName.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformIndex), @bitCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetActiveUniformsiv(self: QOpenGLFunctions_4_0_Core, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetUniformIndices(self: QOpenGLFunctions_4_0_Core, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*c]const u8, uniformNames.len) catch @panic("qopenglfunctions_4_0_core.GlGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_0_Core_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformNames_chararr.ptr, uniformIndices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn GlPrimitiveRestartIndex(self: QOpenGLFunctions_4_0_Core, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPrimitiveRestartIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlTexBuffer(self: QOpenGLFunctions_4_0_Core, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlDrawElementsInstanced(self: QOpenGLFunctions_4_0_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawArraysInstanced(self: QOpenGLFunctions_4_0_Core, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlSampleMaski(self: QOpenGLFunctions_4_0_Core, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSampleMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn GlGetMultisamplefv(self: QOpenGLFunctions_4_0_Core, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetMultisamplefv(@ptrCast(self.ptr), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexImage3DMultisample(self: QOpenGLFunctions_4_0_Core, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexImage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlTexImage2DMultisample(self: QOpenGLFunctions_4_0_Core, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_0_Core_GlTexImage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetInteger64v(self: QOpenGLFunctions_4_0_Core, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetInteger64v(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glProvokingVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlProvokingVertex(self: QOpenGLFunctions_4_0_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlProvokingVertex(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMultiDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlMultiDrawElementsBaseVertex(self: QOpenGLFunctions_4_0_Core, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32, basevertex: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlMultiDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount), basevertex.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlDrawElementsInstancedBaseVertex(self: QOpenGLFunctions_4_0_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawElementsInstancedBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlDrawRangeElementsBaseVertex(self: QOpenGLFunctions_4_0_Core, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawRangeElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlDrawElementsBaseVertex(self: QOpenGLFunctions_4_0_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn GlFramebufferTexture(self: QOpenGLFunctions_4_0_Core, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlFramebufferTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetBufferParameteri64v(self: QOpenGLFunctions_4_0_Core, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetBufferParameteri64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn GlGetInteger64iV(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetInteger64iV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP4uiv(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP4uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP4ui(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP3uiv(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP3uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP3ui(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP3ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP2uiv(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP2uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP2ui(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP2ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlVertexAttribP1uiv(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP1uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn GlVertexAttribP1ui(self: QOpenGLFunctions_4_0_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribP1ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjectui64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u64 `
    ///
    pub fn GlGetQueryObjectui64v(self: QOpenGLFunctions_4_0_Core, id: u32, pname: u32, params: []u64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetQueryObjectui64v(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjecti64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetQueryObjecti64v(self: QOpenGLFunctions_4_0_Core, id: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetQueryObjecti64v(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glQueryCounter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` target: u32 `
    ///
    pub fn GlQueryCounter(self: QOpenGLFunctions_4_0_Core, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlQueryCounter(@ptrCast(self.ptr), @bitCast(id), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetSamplerParameterIuiv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetSamplerParameterfv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameterIiv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameteriv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const u32 `
    ///
    pub fn GlSamplerParameterIuiv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameterIiv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const f32 `
    ///
    pub fn GlSamplerParameterfv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlSamplerParameterf(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSamplerParameterf(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameteriv(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlSamplerParameteri(self: QOpenGLFunctions_4_0_Core, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlSamplerParameteri(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` unit: u32 `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlBindSampler(self: QOpenGLFunctions_4_0_Core, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindSampler(@ptrCast(self.ptr), @bitCast(unit), @bitCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlIsSampler(self: QOpenGLFunctions_4_0_Core, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsSampler(@ptrCast(self.ptr), @bitCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn GlDeleteSamplers(self: QOpenGLFunctions_4_0_Core, count: i32, samplers: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []u32 `
    ///
    pub fn GlGenSamplers(self: QOpenGLFunctions_4_0_Core, count: i32, samplers: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFragDataIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataIndex(self: QOpenGLFunctions_4_0_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetFragDataIndex(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindFragDataLocationIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` colorNumber: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocationIndexed(self: QOpenGLFunctions_4_0_Core, program: u32, colorNumber: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlBindFragDataLocationIndexed(@ptrCast(self.ptr), @bitCast(program), @bitCast(colorNumber), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn GlVertexAttribDivisor(self: QOpenGLFunctions_4_0_Core, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlVertexAttribDivisor(@ptrCast(self.ptr), @bitCast(index), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryIndexediv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryIndexediv(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetQueryIndexediv(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEndQueryIndexed(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlEndQueryIndexed(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQueryIndexed(self: QOpenGLFunctions_4_0_Core, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBeginQueryIndexed(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawTransformFeedbackStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    pub fn GlDrawTransformFeedbackStream(self: QOpenGLFunctions_4_0_Core, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawTransformFeedbackStream(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(stream));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlDrawTransformFeedback(self: QOpenGLFunctions_4_0_Core, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawTransformFeedback(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlResumeTransformFeedback(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_GlResumeTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn GlPauseTransformFeedback(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPauseTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsTransformFeedback(self: QOpenGLFunctions_4_0_Core, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Core_GlIsTransformFeedback(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenTransformFeedbacks(self: QOpenGLFunctions_4_0_Core, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGenTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteTransformFeedbacks(self: QOpenGLFunctions_4_0_Core, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDeleteTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBindTransformFeedback(self: QOpenGLFunctions_4_0_Core, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBindTransformFeedback(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPatchParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPatchParameterfv(self: QOpenGLFunctions_4_0_Core, pname: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPatchParameterfv(@ptrCast(self.ptr), @bitCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPatchParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlPatchParameteri(self: QOpenGLFunctions_4_0_Core, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlPatchParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetProgramStageiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []i32 `
    ///
    pub fn GlGetProgramStageiv(self: QOpenGLFunctions_4_0_Core, program: u32, shadertype: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetProgramStageiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformSubroutineuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformSubroutineuiv(self: QOpenGLFunctions_4_0_Core, shadertype: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetUniformSubroutineuiv(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformSubroutinesuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` indices: []const u32 `
    ///
    pub fn GlUniformSubroutinesuiv(self: QOpenGLFunctions_4_0_Core, shadertype: u32, count: i32, indices: []const u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformSubroutinesuiv(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(count), indices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveSubroutineName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetActiveSubroutineName(self: QOpenGLFunctions_4_0_Core, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveSubroutineName(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveSubroutineUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetActiveSubroutineUniformName(self: QOpenGLFunctions_4_0_Core, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveSubroutineUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveSubroutineUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlGetActiveSubroutineUniformiv(self: QOpenGLFunctions_4_0_Core, program: u32, shadertype: u32, index: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetActiveSubroutineUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(pname), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSubroutineIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetSubroutineIndex(self: QOpenGLFunctions_4_0_Core, program: u32, shadertype: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetSubroutineIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSubroutineUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetSubroutineUniformLocation(self: QOpenGLFunctions_4_0_Core, program: u32, shadertype: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_0_Core_GlGetSubroutineUniformLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetUniformdv(self: QOpenGLFunctions_4_0_Core, program: u32, location: i32, params: []f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlGetUniformdv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix4x3dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix4x3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix4x2dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix4x2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix3x4dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix3x4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix3x2dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix3x2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix2x4dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix2x4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix2x3dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix2x3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix4dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix3dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniformMatrix2dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniformMatrix2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform4dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform3dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform2dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn GlUniform1dv(self: QOpenGLFunctions_4_0_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlUniform4d(self: QOpenGLFunctions_4_0_Core, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform4d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlUniform3d(self: QOpenGLFunctions_4_0_Core, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform3d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlUniform2d(self: QOpenGLFunctions_4_0_Core, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform2d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlUniform1d(self: QOpenGLFunctions_4_0_Core, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_0_Core_GlUniform1d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawElementsIndirect(self: QOpenGLFunctions_4_0_Core, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawElementsIndirect(@ptrCast(self.ptr), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawArraysIndirect(self: QOpenGLFunctions_4_0_Core, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Core_GlDrawArraysIndirect(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFuncSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
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
    pub fn GlBlendFuncSeparatei(self: QOpenGLFunctions_4_0_Core, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendFuncSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFunci)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` src: u32 `
    ///
    /// ` dst: u32 `
    ///
    pub fn GlBlendFunci(self: QOpenGLFunctions_4_0_Core, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendFunci(@ptrCast(self.ptr), @bitCast(buf), @bitCast(src), @bitCast(dst));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquationSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparatei(self: QOpenGLFunctions_4_0_Core, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendEquationSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquationi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquationi(self: QOpenGLFunctions_4_0_Core, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlBlendEquationi(@ptrCast(self.ptr), @bitCast(buf), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` value: f32 `
    ///
    pub fn GlMinSampleShading(self: QOpenGLFunctions_4_0_Core, value: f32) void {
        qtc.QOpenGLFunctions_4_0_Core_GlMinSampleShading(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn IsInitialized(self: QOpenGLFunctions_4_0_Core) bool {
        return qtc.QOpenGLFunctions_4_0_Core_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn SuperIsInitialized(self: QOpenGLFunctions_4_0_Core) bool {
        return qtc.QOpenGLFunctions_4_0_Core_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_4_0_Core`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: QOpenGLFunctions_4_0_Core, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_0_Core_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetOwningContext(self: QOpenGLFunctions_4_0_Core, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_4_0_Core_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SuperSetOwningContext(self: QOpenGLFunctions_4_0_Core, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_4_0_Core_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_4_0_Core`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_4_0_Core, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: QOpenGLFunctions_4_0_Core, callback: *const fn (QOpenGLFunctions_4_0_Core, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_0_Core_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn OwningContext(self: QOpenGLFunctions_4_0_Core) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_4_0_Core_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn SuperOwningContext(self: QOpenGLFunctions_4_0_Core) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_4_0_Core_SuperOwningContext(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_4_0_Core`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn OnOwningContext(self: QOpenGLFunctions_4_0_Core, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_0_Core_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#dtor.QOpenGLFunctions_4_0_Core)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_0_Core `
    ///
    pub fn Delete(self: QOpenGLFunctions_4_0_Core) void {
        qtc.QOpenGLFunctions_4_0_Core_Delete(@ptrCast(self.ptr));
    }
};
