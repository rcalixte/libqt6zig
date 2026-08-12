const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html)
pub const QOpenGLFunctions_1_0 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_0,

    pub const _is_QOpenGLFunctions_1_0 = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFunctions_1_0 object in C++ memory
    ///
    pub fn new() QOpenGLFunctions_1_0 {
        return .{ .ptr = qtc.QOpenGLFunctions_1_0_new() };
    }

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn initializeOpenGLFunctions(self: QOpenGLFunctions_1_0) bool {
        return qtc.QOpenGLFunctions_1_0_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeOpenGLFunctions` instead
    ///
    pub const OnInitializeOpenGLFunctions = onInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onInitializeOpenGLFunctions(self: QOpenGLFunctions_1_0, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_0_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeOpenGLFunctions` instead
    ///
    pub const SuperInitializeOpenGLFunctions = superInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn superInitializeOpenGLFunctions(self: QOpenGLFunctions_1_0) bool {
        return qtc.QOpenGLFunctions_1_0_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glViewport` instead
    ///
    pub const GlViewport = glViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glViewport(self: QOpenGLFunctions_1_0, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_0_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glDepthRange` instead
    ///
    pub const GlDepthRange = glDepthRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn glDepthRange(self: QOpenGLFunctions_1_0, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_0_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### DEPRECATED: Use `glIsEnabled` instead
    ///
    pub const GlIsEnabled = glIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glIsEnabled(self: QOpenGLFunctions_1_0, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_0_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameteriv` instead
    ///
    pub const GlGetTexLevelParameteriv = glGetTexLevelParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexLevelParameteriv(self: QOpenGLFunctions_1_0, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameterfv` instead
    ///
    pub const GlGetTexLevelParameterfv = glGetTexLevelParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexLevelParameterfv(self: QOpenGLFunctions_1_0, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameteriv` instead
    ///
    pub const GlGetTexParameteriv = glGetTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameteriv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterfv` instead
    ///
    pub const GlGetTexParameterfv = glGetTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexParameterfv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexImage` instead
    ///
    pub const GlGetTexImage = glGetTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glGetTexImage(self: QOpenGLFunctions_1_0, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glGetString` instead
    ///
    pub const GlGetString = glGetString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn glGetString(self: QOpenGLFunctions_1_0, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_1_0_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glGetIntegerv` instead
    ///
    pub const GlGetIntegerv = glGetIntegerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetIntegerv(self: QOpenGLFunctions_1_0, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatv` instead
    ///
    pub const GlGetFloatv = glGetFloatv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetFloatv(self: QOpenGLFunctions_1_0, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetDoublev` instead
    ///
    pub const GlGetDoublev = glGetDoublev;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetDoublev(self: QOpenGLFunctions_1_0, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleanv` instead
    ///
    pub const GlGetBooleanv = glGetBooleanv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn glGetBooleanv(self: QOpenGLFunctions_1_0, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_1_0_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glReadPixels` instead
    ///
    pub const GlReadPixels = glReadPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glReadPixels(self: QOpenGLFunctions_1_0, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glReadBuffer` instead
    ///
    pub const GlReadBuffer = glReadBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glReadBuffer(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPixelStorei` instead
    ///
    pub const GlPixelStorei = glPixelStorei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelStorei(self: QOpenGLFunctions_1_0, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelStoref` instead
    ///
    pub const GlPixelStoref = glPixelStoref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelStoref(self: QOpenGLFunctions_1_0, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glDepthFunc` instead
    ///
    pub const GlDepthFunc = glDepthFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` func: u32 `
    ///
    pub fn glDepthFunc(self: QOpenGLFunctions_1_0, func: u32) void {
        qtc.QOpenGLFunctions_1_0_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### DEPRECATED: Use `glStencilOp` instead
    ///
    pub const GlStencilOp = glStencilOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn glStencilOp(self: QOpenGLFunctions_1_0, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_0_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glStencilFunc` instead
    ///
    pub const GlStencilFunc = glStencilFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFunc(self: QOpenGLFunctions_1_0, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glLogicOp` instead
    ///
    pub const GlLogicOp = glLogicOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn glLogicOp(self: QOpenGLFunctions_1_0, opcode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### DEPRECATED: Use `glBlendFunc` instead
    ///
    pub const GlBlendFunc = glBlendFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn glBlendFunc(self: QOpenGLFunctions_1_0, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_0_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### DEPRECATED: Use `glFlush` instead
    ///
    pub const GlFlush = glFlush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glFlush(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlFlush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFinish` instead
    ///
    pub const GlFinish = glFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glFinish(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEnable` instead
    ///
    pub const GlEnable = glEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glEnable(self: QOpenGLFunctions_1_0, cap: u32) void {
        qtc.QOpenGLFunctions_1_0_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDisable` instead
    ///
    pub const GlDisable = glDisable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glDisable(self: QOpenGLFunctions_1_0, cap: u32) void {
        qtc.QOpenGLFunctions_1_0_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDepthMask` instead
    ///
    pub const GlDepthMask = glDepthMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` flag: u8 `
    ///
    pub fn glDepthMask(self: QOpenGLFunctions_1_0, flag: u8) void {
        qtc.QOpenGLFunctions_1_0_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColorMask` instead
    ///
    pub const GlColorMask = glColorMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColorMask(self: QOpenGLFunctions_1_0, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_0_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glStencilMask` instead
    ///
    pub const GlStencilMask = glStencilMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMask(self: QOpenGLFunctions_1_0, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearDepth` instead
    ///
    pub const GlClearDepth = glClearDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` depth: f64 `
    ///
    pub fn glClearDepth(self: QOpenGLFunctions_1_0, depth: f64) void {
        qtc.QOpenGLFunctions_1_0_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glClearStencil` instead
    ///
    pub const GlClearStencil = glClearStencil;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    pub fn glClearStencil(self: QOpenGLFunctions_1_0, s: i32) void {
        qtc.QOpenGLFunctions_1_0_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glClearColor` instead
    ///
    pub const GlClearColor = glClearColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearColor(self: QOpenGLFunctions_1_0, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_0_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glClear` instead
    ///
    pub const GlClear = glClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glClear(self: QOpenGLFunctions_1_0, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glDrawBuffer` instead
    ///
    pub const GlDrawBuffer = glDrawBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glDrawBuffer(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glTexImage2D` instead
    ///
    pub const GlTexImage2D = glTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glTexImage2D(self: QOpenGLFunctions_1_0, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage1D` instead
    ///
    pub const GlTexImage1D = glTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glTexImage1D(self: QOpenGLFunctions_1_0, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexParameteriv` instead
    ///
    pub const GlTexParameteriv = glTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameteriv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameteri` instead
    ///
    pub const GlTexParameteri = glTexParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexParameteri(self: QOpenGLFunctions_1_0, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameterfv` instead
    ///
    pub const GlTexParameterfv = glTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexParameterfv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterf` instead
    ///
    pub const GlTexParameterf = glTexParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexParameterf(self: QOpenGLFunctions_1_0, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glScissor` instead
    ///
    pub const GlScissor = glScissor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glScissor(self: QOpenGLFunctions_1_0, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_0_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glPolygonMode` instead
    ///
    pub const GlPolygonMode = glPolygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glPolygonMode(self: QOpenGLFunctions_1_0, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPointSize` instead
    ///
    pub const GlPointSize = glPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` size: f32 `
    ///
    pub fn glPointSize(self: QOpenGLFunctions_1_0, size: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glLineWidth` instead
    ///
    pub const GlLineWidth = glLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` width: f32 `
    ///
    pub fn glLineWidth(self: QOpenGLFunctions_1_0, width: f32) void {
        qtc.QOpenGLFunctions_1_0_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glHint` instead
    ///
    pub const GlHint = glHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glHint(self: QOpenGLFunctions_1_0, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glFrontFace` instead
    ///
    pub const GlFrontFace = glFrontFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glFrontFace(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glCullFace` instead
    ///
    pub const GlCullFace = glCullFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glCullFace(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glTranslatef` instead
    ///
    pub const GlTranslatef = glTranslatef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glTranslatef(self: QOpenGLFunctions_1_0, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTranslatef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glTranslated` instead
    ///
    pub const GlTranslated = glTranslated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glTranslated(self: QOpenGLFunctions_1_0, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTranslated(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glScalef` instead
    ///
    pub const GlScalef = glScalef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glScalef(self: QOpenGLFunctions_1_0, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlScalef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glScaled` instead
    ///
    pub const GlScaled = glScaled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glScaled(self: QOpenGLFunctions_1_0, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlScaled(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRotatef` instead
    ///
    pub const GlRotatef = glRotatef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glRotatef(self: QOpenGLFunctions_1_0, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRotatef(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRotated` instead
    ///
    pub const GlRotated = glRotated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` angle: f64 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glRotated(self: QOpenGLFunctions_1_0, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRotated(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glPushMatrix` instead
    ///
    pub const GlPushMatrix = glPushMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glPushMatrix(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlPushMatrix(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPopMatrix` instead
    ///
    pub const GlPopMatrix = glPopMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glPopMatrix(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlPopMatrix(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glOrtho` instead
    ///
    pub const GlOrtho = glOrtho;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glOrtho(self: QOpenGLFunctions_1_0, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_0_GlOrtho(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### DEPRECATED: Use `glMultMatrixd` instead
    ///
    pub const GlMultMatrixd = glMultMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glMultMatrixd(self: QOpenGLFunctions_1_0, m: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlMultMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMultMatrixf` instead
    ///
    pub const GlMultMatrixf = glMultMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glMultMatrixf(self: QOpenGLFunctions_1_0, m: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlMultMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMatrixMode` instead
    ///
    pub const GlMatrixMode = glMatrixMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glMatrixMode(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlMatrixMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glLoadMatrixd` instead
    ///
    pub const GlLoadMatrixd = glLoadMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glLoadMatrixd(self: QOpenGLFunctions_1_0, m: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlLoadMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadMatrixf` instead
    ///
    pub const GlLoadMatrixf = glLoadMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glLoadMatrixf(self: QOpenGLFunctions_1_0, m: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlLoadMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadIdentity` instead
    ///
    pub const GlLoadIdentity = glLoadIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glLoadIdentity(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlLoadIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFrustum` instead
    ///
    pub const GlFrustum = glFrustum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glFrustum(self: QOpenGLFunctions_1_0, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_0_GlFrustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### DEPRECATED: Use `glIsList` instead
    ///
    pub const GlIsList = glIsList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    pub fn glIsList(self: QOpenGLFunctions_1_0, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_0_GlIsList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### DEPRECATED: Use `glGetTexGeniv` instead
    ///
    pub const GlGetTexGeniv = glGetTexGeniv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexGeniv(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexGenfv` instead
    ///
    pub const GlGetTexGenfv = glGetTexGenfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexGenfv(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexGendv` instead
    ///
    pub const GlGetTexGendv = glGetTexGendv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetTexGendv(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexEnviv` instead
    ///
    pub const GlGetTexEnviv = glGetTexEnviv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexEnviv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexEnvfv` instead
    ///
    pub const GlGetTexEnvfv = glGetTexEnvfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexEnvfv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetPolygonStipple` instead
    ///
    pub const GlGetPolygonStipple = glGetPolygonStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mask: []u8 `
    ///
    pub fn glGetPolygonStipple(self: QOpenGLFunctions_1_0, mask: []u8) void {
        qtc.QOpenGLFunctions_1_0_GlGetPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapusv` instead
    ///
    pub const GlGetPixelMapusv = glGetPixelMapusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn glGetPixelMapusv(self: QOpenGLFunctions_1_0, map: u32, values: []u16) void {
        qtc.QOpenGLFunctions_1_0_GlGetPixelMapusv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapuiv` instead
    ///
    pub const GlGetPixelMapuiv = glGetPixelMapuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn glGetPixelMapuiv(self: QOpenGLFunctions_1_0, map: u32, values: []u32) void {
        qtc.QOpenGLFunctions_1_0_GlGetPixelMapuiv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapfv` instead
    ///
    pub const GlGetPixelMapfv = glGetPixelMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn glGetPixelMapfv(self: QOpenGLFunctions_1_0, map: u32, values: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetPixelMapfv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetMaterialiv` instead
    ///
    pub const GlGetMaterialiv = glGetMaterialiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetMaterialiv(self: QOpenGLFunctions_1_0, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMaterialfv` instead
    ///
    pub const GlGetMaterialfv = glGetMaterialfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetMaterialfv(self: QOpenGLFunctions_1_0, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapiv` instead
    ///
    pub const GlGetMapiv = glGetMapiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn glGetMapiv(self: QOpenGLFunctions_1_0, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMapiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapfv` instead
    ///
    pub const GlGetMapfv = glGetMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn glGetMapfv(self: QOpenGLFunctions_1_0, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetMapfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapdv` instead
    ///
    pub const GlGetMapdv = glGetMapdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn glGetMapdv(self: QOpenGLFunctions_1_0, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetMapdv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetLightiv` instead
    ///
    pub const GlGetLightiv = glGetLightiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetLightiv(self: QOpenGLFunctions_1_0, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_0_GlGetLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetLightfv` instead
    ///
    pub const GlGetLightfv = glGetLightfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetLightfv(self: QOpenGLFunctions_1_0, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlGetLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetClipPlane` instead
    ///
    pub const GlGetClipPlane = glGetClipPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn glGetClipPlane(self: QOpenGLFunctions_1_0, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_1_0_GlGetClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### DEPRECATED: Use `glDrawPixels` instead
    ///
    pub const GlDrawPixels = glDrawPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glDrawPixels(self: QOpenGLFunctions_1_0, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlDrawPixels(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyPixels` instead
    ///
    pub const GlCopyPixels = glCopyPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glCopyPixels(self: QOpenGLFunctions_1_0, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_1_0_GlCopyPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glPixelMapusv` instead
    ///
    pub const GlPixelMapusv = glPixelMapusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn glPixelMapusv(self: QOpenGLFunctions_1_0, map: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_1_0_GlPixelMapusv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelMapuiv` instead
    ///
    pub const GlPixelMapuiv = glPixelMapuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn glPixelMapuiv(self: QOpenGLFunctions_1_0, map: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelMapuiv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelMapfv` instead
    ///
    pub const GlPixelMapfv = glPixelMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn glPixelMapfv(self: QOpenGLFunctions_1_0, map: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelMapfv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelTransferi` instead
    ///
    pub const GlPixelTransferi = glPixelTransferi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelTransferi(self: QOpenGLFunctions_1_0, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelTransferi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelTransferf` instead
    ///
    pub const GlPixelTransferf = glPixelTransferf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelTransferf(self: QOpenGLFunctions_1_0, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelTransferf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelZoom` instead
    ///
    pub const GlPixelZoom = glPixelZoom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn glPixelZoom(self: QOpenGLFunctions_1_0, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPixelZoom(@ptrCast(self.ptr), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### DEPRECATED: Use `glAlphaFunc` instead
    ///
    pub const GlAlphaFunc = glAlphaFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn glAlphaFunc(self: QOpenGLFunctions_1_0, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_0_GlAlphaFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref));
    }

    /// ### DEPRECATED: Use `glEvalPoint2` instead
    ///
    pub const GlEvalPoint2 = glEvalPoint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn glEvalPoint2(self: QOpenGLFunctions_1_0, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalPoint2(@ptrCast(self.ptr), @bitCast(i), @bitCast(j));
    }

    /// ### DEPRECATED: Use `glEvalMesh2` instead
    ///
    pub const GlEvalMesh2 = glEvalMesh2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glEvalMesh2(self: QOpenGLFunctions_1_0, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalMesh2(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### DEPRECATED: Use `glEvalPoint1` instead
    ///
    pub const GlEvalPoint1 = glEvalPoint1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` i: i32 `
    ///
    pub fn glEvalPoint1(self: QOpenGLFunctions_1_0, i: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalPoint1(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `glEvalMesh1` instead
    ///
    pub const GlEvalMesh1 = glEvalMesh1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn glEvalMesh1(self: QOpenGLFunctions_1_0, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalMesh1(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### DEPRECATED: Use `glEvalCoord2fv` instead
    ///
    pub const GlEvalCoord2fv = glEvalCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn glEvalCoord2fv(self: QOpenGLFunctions_1_0, u: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord2f` instead
    ///
    pub const GlEvalCoord2f = glEvalCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn glEvalCoord2f(self: QOpenGLFunctions_1_0, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2f(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### DEPRECATED: Use `glEvalCoord2dv` instead
    ///
    pub const GlEvalCoord2dv = glEvalCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn glEvalCoord2dv(self: QOpenGLFunctions_1_0, u: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord2d` instead
    ///
    pub const GlEvalCoord2d = glEvalCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn glEvalCoord2d(self: QOpenGLFunctions_1_0, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord2d(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### DEPRECATED: Use `glEvalCoord1fv` instead
    ///
    pub const GlEvalCoord1fv = glEvalCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn glEvalCoord1fv(self: QOpenGLFunctions_1_0, u: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord1f` instead
    ///
    pub const GlEvalCoord1f = glEvalCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: f32 `
    ///
    pub fn glEvalCoord1f(self: QOpenGLFunctions_1_0, u: f32) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1f(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `glEvalCoord1dv` instead
    ///
    pub const GlEvalCoord1dv = glEvalCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn glEvalCoord1dv(self: QOpenGLFunctions_1_0, u: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord1d` instead
    ///
    pub const GlEvalCoord1d = glEvalCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` u: f64 `
    ///
    pub fn glEvalCoord1d(self: QOpenGLFunctions_1_0, u: f64) void {
        qtc.QOpenGLFunctions_1_0_GlEvalCoord1d(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `glMapGrid2f` instead
    ///
    pub const GlMapGrid2f = glMapGrid2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glMapGrid2f(self: QOpenGLFunctions_1_0, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_1_0_GlMapGrid2f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glMapGrid2d` instead
    ///
    pub const GlMapGrid2d = glMapGrid2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glMapGrid2d(self: QOpenGLFunctions_1_0, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_1_0_GlMapGrid2d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glMapGrid1f` instead
    ///
    pub const GlMapGrid1f = glMapGrid1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn glMapGrid1f(self: QOpenGLFunctions_1_0, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_0_GlMapGrid1f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### DEPRECATED: Use `glMapGrid1d` instead
    ///
    pub const GlMapGrid1d = glMapGrid1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn glMapGrid1d(self: QOpenGLFunctions_1_0, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_0_GlMapGrid1d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### DEPRECATED: Use `glMap2f` instead
    ///
    pub const GlMap2f = glMap2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glMap2f(self: QOpenGLFunctions_1_0, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlMap2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap2d` instead
    ///
    pub const GlMap2d = glMap2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glMap2d(self: QOpenGLFunctions_1_0, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlMap2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap1f` instead
    ///
    pub const GlMap1f = glMap1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glMap1f(self: QOpenGLFunctions_1_0, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlMap1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap1d` instead
    ///
    pub const GlMap1d = glMap1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glMap1d(self: QOpenGLFunctions_1_0, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlMap1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### DEPRECATED: Use `glPushAttrib` instead
    ///
    pub const GlPushAttrib = glPushAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glPushAttrib(self: QOpenGLFunctions_1_0, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlPushAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glPopAttrib` instead
    ///
    pub const GlPopAttrib = glPopAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glPopAttrib(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlPopAttrib(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glAccum` instead
    ///
    pub const GlAccum = glAccum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn glAccum(self: QOpenGLFunctions_1_0, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_0_GlAccum(@ptrCast(self.ptr), @bitCast(op), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glIndexMask` instead
    ///
    pub const GlIndexMask = glIndexMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glIndexMask(self: QOpenGLFunctions_1_0, mask: u32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearIndex` instead
    ///
    pub const GlClearIndex = glClearIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: f32 `
    ///
    pub fn glClearIndex(self: QOpenGLFunctions_1_0, c: f32) void {
        qtc.QOpenGLFunctions_1_0_GlClearIndex(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glClearAccum` instead
    ///
    pub const GlClearAccum = glClearAccum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearAccum(self: QOpenGLFunctions_1_0, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_0_GlClearAccum(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glPushName` instead
    ///
    pub const GlPushName = glPushName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn glPushName(self: QOpenGLFunctions_1_0, name: u32) void {
        qtc.QOpenGLFunctions_1_0_GlPushName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `glPopName` instead
    ///
    pub const GlPopName = glPopName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glPopName(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlPopName(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPassThrough` instead
    ///
    pub const GlPassThrough = glPassThrough;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` token: f32 `
    ///
    pub fn glPassThrough(self: QOpenGLFunctions_1_0, token: f32) void {
        qtc.QOpenGLFunctions_1_0_GlPassThrough(@ptrCast(self.ptr), @bitCast(token));
    }

    /// ### DEPRECATED: Use `glLoadName` instead
    ///
    pub const GlLoadName = glLoadName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` name: u32 `
    ///
    pub fn glLoadName(self: QOpenGLFunctions_1_0, name: u32) void {
        qtc.QOpenGLFunctions_1_0_GlLoadName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `glInitNames` instead
    ///
    pub const GlInitNames = glInitNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glInitNames(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlInitNames(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glRenderMode` instead
    ///
    pub const GlRenderMode = glRenderMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glRenderMode(self: QOpenGLFunctions_1_0, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_0_GlRenderMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glSelectBuffer` instead
    ///
    pub const GlSelectBuffer = glSelectBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn glSelectBuffer(self: QOpenGLFunctions_1_0, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_1_0_GlSelectBuffer(@ptrCast(self.ptr), @bitCast(size), buffer.ptr);
    }

    /// ### DEPRECATED: Use `glFeedbackBuffer` instead
    ///
    pub const GlFeedbackBuffer = glFeedbackBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn glFeedbackBuffer(self: QOpenGLFunctions_1_0, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_1_0_GlFeedbackBuffer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### DEPRECATED: Use `glTexGeniv` instead
    ///
    pub const GlTexGeniv = glTexGeniv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexGeniv(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGeni` instead
    ///
    pub const GlTexGeni = glTexGeni;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexGeni(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGeni(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexGenfv` instead
    ///
    pub const GlTexGenfv = glTexGenfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexGenfv(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGenf` instead
    ///
    pub const GlTexGenf = glTexGenf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexGenf(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexGenf(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexGendv` instead
    ///
    pub const GlTexGendv = glTexGendv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn glTexGendv(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGend` instead
    ///
    pub const GlTexGend = glTexGend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn glTexGend(self: QOpenGLFunctions_1_0, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexGend(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexEnviv` instead
    ///
    pub const GlTexEnviv = glTexEnviv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexEnviv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexEnvi` instead
    ///
    pub const GlTexEnvi = glTexEnvi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexEnvi(self: QOpenGLFunctions_1_0, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnvi(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexEnvfv` instead
    ///
    pub const GlTexEnvfv = glTexEnvfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexEnvfv(self: QOpenGLFunctions_1_0, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexEnvf` instead
    ///
    pub const GlTexEnvf = glTexEnvf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexEnvf(self: QOpenGLFunctions_1_0, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexEnvf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glShadeModel` instead
    ///
    pub const GlShadeModel = glShadeModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glShadeModel(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlShadeModel(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPolygonStipple` instead
    ///
    pub const GlPolygonStipple = glPolygonStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn glPolygonStipple(self: QOpenGLFunctions_1_0, mask: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### DEPRECATED: Use `glMaterialiv` instead
    ///
    pub const GlMaterialiv = glMaterialiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glMaterialiv(self: QOpenGLFunctions_1_0, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMateriali` instead
    ///
    pub const GlMateriali = glMateriali;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glMateriali(self: QOpenGLFunctions_1_0, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlMateriali(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glMaterialfv` instead
    ///
    pub const GlMaterialfv = glMaterialfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glMaterialfv(self: QOpenGLFunctions_1_0, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMaterialf` instead
    ///
    pub const GlMaterialf = glMaterialf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glMaterialf(self: QOpenGLFunctions_1_0, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlMaterialf(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLineStipple` instead
    ///
    pub const GlLineStipple = glLineStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn glLineStipple(self: QOpenGLFunctions_1_0, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_0_GlLineStipple(@ptrCast(self.ptr), @bitCast(factor), @bitCast(pattern));
    }

    /// ### DEPRECATED: Use `glLightModeliv` instead
    ///
    pub const GlLightModeliv = glLightModeliv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glLightModeliv(self: QOpenGLFunctions_1_0, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModeliv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightModeli` instead
    ///
    pub const GlLightModeli = glLightModeli;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glLightModeli(self: QOpenGLFunctions_1_0, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModeli(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightModelfv` instead
    ///
    pub const GlLightModelfv = glLightModelfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glLightModelfv(self: QOpenGLFunctions_1_0, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModelfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightModelf` instead
    ///
    pub const GlLightModelf = glLightModelf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glLightModelf(self: QOpenGLFunctions_1_0, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightModelf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightiv` instead
    ///
    pub const GlLightiv = glLightiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glLightiv(self: QOpenGLFunctions_1_0, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLighti` instead
    ///
    pub const GlLighti = glLighti;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glLighti(self: QOpenGLFunctions_1_0, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlLighti(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightfv` instead
    ///
    pub const GlLightfv = glLightfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glLightfv(self: QOpenGLFunctions_1_0, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightf` instead
    ///
    pub const GlLightf = glLightf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glLightf(self: QOpenGLFunctions_1_0, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlLightf(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glFogiv` instead
    ///
    pub const GlFogiv = glFogiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glFogiv(self: QOpenGLFunctions_1_0, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlFogiv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFogi` instead
    ///
    pub const GlFogi = glFogi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glFogi(self: QOpenGLFunctions_1_0, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_0_GlFogi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glFogfv` instead
    ///
    pub const GlFogfv = glFogfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glFogfv(self: QOpenGLFunctions_1_0, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlFogfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFogf` instead
    ///
    pub const GlFogf = glFogf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glFogf(self: QOpenGLFunctions_1_0, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_0_GlFogf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glColorMaterial` instead
    ///
    pub const GlColorMaterial = glColorMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glColorMaterial(self: QOpenGLFunctions_1_0, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlColorMaterial(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glClipPlane` instead
    ///
    pub const GlClipPlane = glClipPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn glClipPlane(self: QOpenGLFunctions_1_0, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4sv` instead
    ///
    pub const GlVertex4sv = glVertex4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex4sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4s` instead
    ///
    pub const GlVertex4s = glVertex4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn glVertex4s(self: QOpenGLFunctions_1_0, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4iv` instead
    ///
    pub const GlVertex4iv = glVertex4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex4iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4i` instead
    ///
    pub const GlVertex4i = glVertex4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn glVertex4i(self: QOpenGLFunctions_1_0, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4fv` instead
    ///
    pub const GlVertex4fv = glVertex4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex4fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4f` instead
    ///
    pub const GlVertex4f = glVertex4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn glVertex4f(self: QOpenGLFunctions_1_0, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4dv` instead
    ///
    pub const GlVertex4dv = glVertex4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex4dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4d` instead
    ///
    pub const GlVertex4d = glVertex4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn glVertex4d(self: QOpenGLFunctions_1_0, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex3sv` instead
    ///
    pub const GlVertex3sv = glVertex3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex3sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3s` instead
    ///
    pub const GlVertex3s = glVertex3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glVertex3s(self: QOpenGLFunctions_1_0, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3iv` instead
    ///
    pub const GlVertex3iv = glVertex3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex3iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3i` instead
    ///
    pub const GlVertex3i = glVertex3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glVertex3i(self: QOpenGLFunctions_1_0, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3fv` instead
    ///
    pub const GlVertex3fv = glVertex3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex3fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3f` instead
    ///
    pub const GlVertex3f = glVertex3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glVertex3f(self: QOpenGLFunctions_1_0, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3dv` instead
    ///
    pub const GlVertex3dv = glVertex3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex3dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3d` instead
    ///
    pub const GlVertex3d = glVertex3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glVertex3d(self: QOpenGLFunctions_1_0, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex2sv` instead
    ///
    pub const GlVertex2sv = glVertex2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex2sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2s` instead
    ///
    pub const GlVertex2s = glVertex2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glVertex2s(self: QOpenGLFunctions_1_0, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2iv` instead
    ///
    pub const GlVertex2iv = glVertex2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex2iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2i` instead
    ///
    pub const GlVertex2i = glVertex2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glVertex2i(self: QOpenGLFunctions_1_0, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2fv` instead
    ///
    pub const GlVertex2fv = glVertex2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex2fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2f` instead
    ///
    pub const GlVertex2f = glVertex2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glVertex2f(self: QOpenGLFunctions_1_0, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2dv` instead
    ///
    pub const GlVertex2dv = glVertex2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex2dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2d` instead
    ///
    pub const GlVertex2d = glVertex2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glVertex2d(self: QOpenGLFunctions_1_0, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_0_GlVertex2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glTexCoord4sv` instead
    ///
    pub const GlTexCoord4sv = glTexCoord4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord4sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4s` instead
    ///
    pub const GlTexCoord4s = glTexCoord4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn glTexCoord4s(self: QOpenGLFunctions_1_0, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4iv` instead
    ///
    pub const GlTexCoord4iv = glTexCoord4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord4iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4i` instead
    ///
    pub const GlTexCoord4i = glTexCoord4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn glTexCoord4i(self: QOpenGLFunctions_1_0, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4fv` instead
    ///
    pub const GlTexCoord4fv = glTexCoord4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord4fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4f` instead
    ///
    pub const GlTexCoord4f = glTexCoord4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn glTexCoord4f(self: QOpenGLFunctions_1_0, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4dv` instead
    ///
    pub const GlTexCoord4dv = glTexCoord4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord4dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4d` instead
    ///
    pub const GlTexCoord4d = glTexCoord4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn glTexCoord4d(self: QOpenGLFunctions_1_0, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord4d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord3sv` instead
    ///
    pub const GlTexCoord3sv = glTexCoord3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord3sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3s` instead
    ///
    pub const GlTexCoord3s = glTexCoord3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn glTexCoord3s(self: QOpenGLFunctions_1_0, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3iv` instead
    ///
    pub const GlTexCoord3iv = glTexCoord3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord3iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3i` instead
    ///
    pub const GlTexCoord3i = glTexCoord3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn glTexCoord3i(self: QOpenGLFunctions_1_0, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3fv` instead
    ///
    pub const GlTexCoord3fv = glTexCoord3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord3fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3f` instead
    ///
    pub const GlTexCoord3f = glTexCoord3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn glTexCoord3f(self: QOpenGLFunctions_1_0, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3dv` instead
    ///
    pub const GlTexCoord3dv = glTexCoord3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord3dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3d` instead
    ///
    pub const GlTexCoord3d = glTexCoord3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn glTexCoord3d(self: QOpenGLFunctions_1_0, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord3d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord2sv` instead
    ///
    pub const GlTexCoord2sv = glTexCoord2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord2sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2s` instead
    ///
    pub const GlTexCoord2s = glTexCoord2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn glTexCoord2s(self: QOpenGLFunctions_1_0, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2iv` instead
    ///
    pub const GlTexCoord2iv = glTexCoord2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord2iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2i` instead
    ///
    pub const GlTexCoord2i = glTexCoord2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn glTexCoord2i(self: QOpenGLFunctions_1_0, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2fv` instead
    ///
    pub const GlTexCoord2fv = glTexCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord2fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2f` instead
    ///
    pub const GlTexCoord2f = glTexCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn glTexCoord2f(self: QOpenGLFunctions_1_0, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2dv` instead
    ///
    pub const GlTexCoord2dv = glTexCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord2dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2d` instead
    ///
    pub const GlTexCoord2d = glTexCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn glTexCoord2d(self: QOpenGLFunctions_1_0, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord2d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord1sv` instead
    ///
    pub const GlTexCoord1sv = glTexCoord1sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord1sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1s` instead
    ///
    pub const GlTexCoord1s = glTexCoord1s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i16 `
    ///
    pub fn glTexCoord1s(self: QOpenGLFunctions_1_0, s: i16) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1s(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1iv` instead
    ///
    pub const GlTexCoord1iv = glTexCoord1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord1iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1i` instead
    ///
    pub const GlTexCoord1i = glTexCoord1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: i32 `
    ///
    pub fn glTexCoord1i(self: QOpenGLFunctions_1_0, s: i32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1i(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1fv` instead
    ///
    pub const GlTexCoord1fv = glTexCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord1fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1f` instead
    ///
    pub const GlTexCoord1f = glTexCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f32 `
    ///
    pub fn glTexCoord1f(self: QOpenGLFunctions_1_0, s: f32) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1f(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1dv` instead
    ///
    pub const GlTexCoord1dv = glTexCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord1dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1d` instead
    ///
    pub const GlTexCoord1d = glTexCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` s: f64 `
    ///
    pub fn glTexCoord1d(self: QOpenGLFunctions_1_0, s: f64) void {
        qtc.QOpenGLFunctions_1_0_GlTexCoord1d(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glRectsv` instead
    ///
    pub const GlRectsv = glRectsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn glRectsv(self: QOpenGLFunctions_1_0, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRectsv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRects` instead
    ///
    pub const GlRects = glRects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x1: i16 `
    ///
    /// ` y1: i16 `
    ///
    /// ` x2: i16 `
    ///
    /// ` y2: i16 `
    ///
    pub fn glRects(self: QOpenGLFunctions_1_0, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_1_0_GlRects(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectiv` instead
    ///
    pub const GlRectiv = glRectiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn glRectiv(self: QOpenGLFunctions_1_0, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRectiv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRecti` instead
    ///
    pub const GlRecti = glRecti;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn glRecti(self: QOpenGLFunctions_1_0, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_1_0_GlRecti(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectfv` instead
    ///
    pub const GlRectfv = glRectfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn glRectfv(self: QOpenGLFunctions_1_0, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRectfv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRectf` instead
    ///
    pub const GlRectf = glRectf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x1: f32 `
    ///
    /// ` y1: f32 `
    ///
    /// ` x2: f32 `
    ///
    /// ` y2: f32 `
    ///
    pub fn glRectf(self: QOpenGLFunctions_1_0, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRectf(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectdv` instead
    ///
    pub const GlRectdv = glRectdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn glRectdv(self: QOpenGLFunctions_1_0, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRectdv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRectd` instead
    ///
    pub const GlRectd = glRectd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn glRectd(self: QOpenGLFunctions_1_0, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRectd(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRasterPos4sv` instead
    ///
    pub const GlRasterPos4sv = glRasterPos4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos4sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4s` instead
    ///
    pub const GlRasterPos4s = glRasterPos4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn glRasterPos4s(self: QOpenGLFunctions_1_0, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4iv` instead
    ///
    pub const GlRasterPos4iv = glRasterPos4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos4iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4i` instead
    ///
    pub const GlRasterPos4i = glRasterPos4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn glRasterPos4i(self: QOpenGLFunctions_1_0, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4fv` instead
    ///
    pub const GlRasterPos4fv = glRasterPos4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos4fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4f` instead
    ///
    pub const GlRasterPos4f = glRasterPos4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn glRasterPos4f(self: QOpenGLFunctions_1_0, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4dv` instead
    ///
    pub const GlRasterPos4dv = glRasterPos4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos4dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4d` instead
    ///
    pub const GlRasterPos4d = glRasterPos4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn glRasterPos4d(self: QOpenGLFunctions_1_0, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos3sv` instead
    ///
    pub const GlRasterPos3sv = glRasterPos3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos3sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3s` instead
    ///
    pub const GlRasterPos3s = glRasterPos3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glRasterPos3s(self: QOpenGLFunctions_1_0, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3iv` instead
    ///
    pub const GlRasterPos3iv = glRasterPos3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos3iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3i` instead
    ///
    pub const GlRasterPos3i = glRasterPos3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glRasterPos3i(self: QOpenGLFunctions_1_0, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3fv` instead
    ///
    pub const GlRasterPos3fv = glRasterPos3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos3fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3f` instead
    ///
    pub const GlRasterPos3f = glRasterPos3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glRasterPos3f(self: QOpenGLFunctions_1_0, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3dv` instead
    ///
    pub const GlRasterPos3dv = glRasterPos3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos3dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3d` instead
    ///
    pub const GlRasterPos3d = glRasterPos3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glRasterPos3d(self: QOpenGLFunctions_1_0, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos2sv` instead
    ///
    pub const GlRasterPos2sv = glRasterPos2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos2sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2s` instead
    ///
    pub const GlRasterPos2s = glRasterPos2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glRasterPos2s(self: QOpenGLFunctions_1_0, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2iv` instead
    ///
    pub const GlRasterPos2iv = glRasterPos2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos2iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2i` instead
    ///
    pub const GlRasterPos2i = glRasterPos2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glRasterPos2i(self: QOpenGLFunctions_1_0, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2fv` instead
    ///
    pub const GlRasterPos2fv = glRasterPos2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos2fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2f` instead
    ///
    pub const GlRasterPos2f = glRasterPos2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glRasterPos2f(self: QOpenGLFunctions_1_0, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2dv` instead
    ///
    pub const GlRasterPos2dv = glRasterPos2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos2dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2d` instead
    ///
    pub const GlRasterPos2d = glRasterPos2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glRasterPos2d(self: QOpenGLFunctions_1_0, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_0_GlRasterPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glNormal3sv` instead
    ///
    pub const GlNormal3sv = glNormal3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glNormal3sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3s` instead
    ///
    pub const GlNormal3s = glNormal3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn glNormal3s(self: QOpenGLFunctions_1_0, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3s(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3iv` instead
    ///
    pub const GlNormal3iv = glNormal3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glNormal3iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3i` instead
    ///
    pub const GlNormal3i = glNormal3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn glNormal3i(self: QOpenGLFunctions_1_0, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3i(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3fv` instead
    ///
    pub const GlNormal3fv = glNormal3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glNormal3fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3f` instead
    ///
    pub const GlNormal3f = glNormal3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn glNormal3f(self: QOpenGLFunctions_1_0, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3f(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3dv` instead
    ///
    pub const GlNormal3dv = glNormal3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glNormal3dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3d` instead
    ///
    pub const GlNormal3d = glNormal3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn glNormal3d(self: QOpenGLFunctions_1_0, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3d(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3bv` instead
    ///
    pub const GlNormal3bv = glNormal3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glNormal3bv(self: QOpenGLFunctions_1_0, v: []const i8) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3b` instead
    ///
    pub const GlNormal3b = glNormal3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn glNormal3b(self: QOpenGLFunctions_1_0, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_0_GlNormal3b(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glIndexsv` instead
    ///
    pub const GlIndexsv = glIndexsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const i16 `
    ///
    pub fn glIndexsv(self: QOpenGLFunctions_1_0, c: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlIndexsv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexs` instead
    ///
    pub const GlIndexs = glIndexs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: i16 `
    ///
    pub fn glIndexs(self: QOpenGLFunctions_1_0, c: i16) void {
        qtc.QOpenGLFunctions_1_0_GlIndexs(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexiv` instead
    ///
    pub const GlIndexiv = glIndexiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const i32 `
    ///
    pub fn glIndexiv(self: QOpenGLFunctions_1_0, c: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexiv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexi` instead
    ///
    pub const GlIndexi = glIndexi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: i32 `
    ///
    pub fn glIndexi(self: QOpenGLFunctions_1_0, c: i32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexi(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexfv` instead
    ///
    pub const GlIndexfv = glIndexfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const f32 `
    ///
    pub fn glIndexfv(self: QOpenGLFunctions_1_0, c: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexfv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexf` instead
    ///
    pub const GlIndexf = glIndexf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: f32 `
    ///
    pub fn glIndexf(self: QOpenGLFunctions_1_0, c: f32) void {
        qtc.QOpenGLFunctions_1_0_GlIndexf(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexdv` instead
    ///
    pub const GlIndexdv = glIndexdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: []const f64 `
    ///
    pub fn glIndexdv(self: QOpenGLFunctions_1_0, c: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlIndexdv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexd` instead
    ///
    pub const GlIndexd = glIndexd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` c: f64 `
    ///
    pub fn glIndexd(self: QOpenGLFunctions_1_0, c: f64) void {
        qtc.QOpenGLFunctions_1_0_GlIndexd(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glEnd` instead
    ///
    pub const GlEnd = glEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glEnd(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEdgeFlagv` instead
    ///
    pub const GlEdgeFlagv = glEdgeFlagv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn glEdgeFlagv(self: QOpenGLFunctions_1_0, flag: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlEdgeFlagv(@ptrCast(self.ptr), flag.ptr);
    }

    /// ### DEPRECATED: Use `glEdgeFlag` instead
    ///
    pub const GlEdgeFlag = glEdgeFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` flag: u8 `
    ///
    pub fn glEdgeFlag(self: QOpenGLFunctions_1_0, flag: u8) void {
        qtc.QOpenGLFunctions_1_0_GlEdgeFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColor4usv` instead
    ///
    pub const GlColor4usv = glColor4usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glColor4usv(self: QOpenGLFunctions_1_0, v: []const u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor4usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4us` instead
    ///
    pub const GlColor4us = glColor4us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn glColor4us(self: QOpenGLFunctions_1_0, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor4us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4uiv` instead
    ///
    pub const GlColor4uiv = glColor4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glColor4uiv(self: QOpenGLFunctions_1_0, v: []const u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4ui` instead
    ///
    pub const GlColor4ui = glColor4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    /// ` alpha: u32 `
    ///
    pub fn glColor4ui(self: QOpenGLFunctions_1_0, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4ubv` instead
    ///
    pub const GlColor4ubv = glColor4ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glColor4ubv(self: QOpenGLFunctions_1_0, v: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor4ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4ub` instead
    ///
    pub const GlColor4ub = glColor4ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColor4ub(self: QOpenGLFunctions_1_0, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor4ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4sv` instead
    ///
    pub const GlColor4sv = glColor4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glColor4sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4s` instead
    ///
    pub const GlColor4s = glColor4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    /// ` alpha: i16 `
    ///
    pub fn glColor4s(self: QOpenGLFunctions_1_0, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor4s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4iv` instead
    ///
    pub const GlColor4iv = glColor4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glColor4iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4i` instead
    ///
    pub const GlColor4i = glColor4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    /// ` alpha: i32 `
    ///
    pub fn glColor4i(self: QOpenGLFunctions_1_0, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4fv` instead
    ///
    pub const GlColor4fv = glColor4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glColor4fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4f` instead
    ///
    pub const GlColor4f = glColor4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glColor4f(self: QOpenGLFunctions_1_0, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor4f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4dv` instead
    ///
    pub const GlColor4dv = glColor4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glColor4dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4d` instead
    ///
    pub const GlColor4d = glColor4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn glColor4d(self: QOpenGLFunctions_1_0, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor4d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4bv` instead
    ///
    pub const GlColor4bv = glColor4bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glColor4bv(self: QOpenGLFunctions_1_0, v: []const i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor4bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4b` instead
    ///
    pub const GlColor4b = glColor4b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    /// ` alpha: i8 `
    ///
    pub fn glColor4b(self: QOpenGLFunctions_1_0, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor4b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor3usv` instead
    ///
    pub const GlColor3usv = glColor3usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glColor3usv(self: QOpenGLFunctions_1_0, v: []const u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3us` instead
    ///
    pub const GlColor3us = glColor3us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn glColor3us(self: QOpenGLFunctions_1_0, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3uiv` instead
    ///
    pub const GlColor3uiv = glColor3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glColor3uiv(self: QOpenGLFunctions_1_0, v: []const u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3ui` instead
    ///
    pub const GlColor3ui = glColor3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn glColor3ui(self: QOpenGLFunctions_1_0, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3ubv` instead
    ///
    pub const GlColor3ubv = glColor3ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glColor3ubv(self: QOpenGLFunctions_1_0, v: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3ub` instead
    ///
    pub const GlColor3ub = glColor3ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn glColor3ub(self: QOpenGLFunctions_1_0, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3sv` instead
    ///
    pub const GlColor3sv = glColor3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glColor3sv(self: QOpenGLFunctions_1_0, v: []const i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3s` instead
    ///
    pub const GlColor3s = glColor3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn glColor3s(self: QOpenGLFunctions_1_0, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_0_GlColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3iv` instead
    ///
    pub const GlColor3iv = glColor3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glColor3iv(self: QOpenGLFunctions_1_0, v: []const i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3i` instead
    ///
    pub const GlColor3i = glColor3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn glColor3i(self: QOpenGLFunctions_1_0, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3fv` instead
    ///
    pub const GlColor3fv = glColor3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glColor3fv(self: QOpenGLFunctions_1_0, v: []const f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3f` instead
    ///
    pub const GlColor3f = glColor3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn glColor3f(self: QOpenGLFunctions_1_0, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_0_GlColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3dv` instead
    ///
    pub const GlColor3dv = glColor3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glColor3dv(self: QOpenGLFunctions_1_0, v: []const f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3d` instead
    ///
    pub const GlColor3d = glColor3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn glColor3d(self: QOpenGLFunctions_1_0, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_0_GlColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3bv` instead
    ///
    pub const GlColor3bv = glColor3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glColor3bv(self: QOpenGLFunctions_1_0, v: []const i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3b` instead
    ///
    pub const GlColor3b = glColor3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn glColor3b(self: QOpenGLFunctions_1_0, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_0_GlColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glBitmap` instead
    ///
    pub const GlBitmap = glBitmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
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
    pub fn glBitmap(self: QOpenGLFunctions_1_0, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: []const u8) void {
        qtc.QOpenGLFunctions_1_0_GlBitmap(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### DEPRECATED: Use `glBegin` instead
    ///
    pub const GlBegin = glBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBegin(self: QOpenGLFunctions_1_0, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlBegin(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glListBase` instead
    ///
    pub const GlListBase = glListBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` base: u32 `
    ///
    pub fn glListBase(self: QOpenGLFunctions_1_0, base: u32) void {
        qtc.QOpenGLFunctions_1_0_GlListBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### DEPRECATED: Use `glGenLists` instead
    ///
    pub const GlGenLists = glGenLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` range: i32 `
    ///
    pub fn glGenLists(self: QOpenGLFunctions_1_0, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_0_GlGenLists(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `glDeleteLists` instead
    ///
    pub const GlDeleteLists = glDeleteLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn glDeleteLists(self: QOpenGLFunctions_1_0, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_0_GlDeleteLists(@ptrCast(self.ptr), @bitCast(list), @bitCast(range));
    }

    /// ### DEPRECATED: Use `glCallLists` instead
    ///
    pub const GlCallLists = glCallLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn glCallLists(self: QOpenGLFunctions_1_0, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_0_GlCallLists(@ptrCast(self.ptr), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### DEPRECATED: Use `glCallList` instead
    ///
    pub const GlCallList = glCallList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    pub fn glCallList(self: QOpenGLFunctions_1_0, list: u32) void {
        qtc.QOpenGLFunctions_1_0_GlCallList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### DEPRECATED: Use `glEndList` instead
    ///
    pub const GlEndList = glEndList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn glEndList(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_GlEndList(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glNewList` instead
    ///
    pub const GlNewList = glNewList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glNewList(self: QOpenGLFunctions_1_0, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_0_GlNewList(@ptrCast(self.ptr), @bitCast(list), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `isInitialized` instead
    ///
    pub const IsInitialized = isInitialized;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn isInitialized(self: QOpenGLFunctions_1_0) bool {
        return qtc.QOpenGLFunctions_1_0_IsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsInitialized` instead
    ///
    pub const SuperIsInitialized = superIsInitialized;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn superIsInitialized(self: QOpenGLFunctions_1_0) bool {
        return qtc.QOpenGLFunctions_1_0_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsInitialized` instead
    ///
    pub const OnIsInitialized = onIsInitialized;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_0`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: QOpenGLFunctions_1_0, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_0_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOwningContext` instead
    ///
    pub const SetOwningContext = setOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn setOwningContext(self: QOpenGLFunctions_1_0, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_1_0_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `superSetOwningContext` instead
    ///
    pub const SuperSetOwningContext = superSetOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn superSetOwningContext(self: QOpenGLFunctions_1_0, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_1_0_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `onSetOwningContext` instead
    ///
    pub const OnSetOwningContext = onSetOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_0`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_1_0, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn onSetOwningContext(self: QOpenGLFunctions_1_0, callback: *const fn (QOpenGLFunctions_1_0, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_1_0_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `owningContext` instead
    ///
    pub const OwningContext = owningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn owningContext(self: QOpenGLFunctions_1_0) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_1_0_OwningContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superOwningContext` instead
    ///
    pub const SuperOwningContext = superOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn superOwningContext(self: QOpenGLFunctions_1_0) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_1_0_SuperOwningContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onOwningContext` instead
    ///
    pub const OnOwningContext = onOwningContext;

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_0`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn onOwningContext(self: QOpenGLFunctions_1_0, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_1_0_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0.html#dtor.QOpenGLFunctions_1_0)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_0 `
    ///
    pub fn delete(self: QOpenGLFunctions_1_0) void {
        qtc.QOpenGLFunctions_1_0_Delete(@ptrCast(self.ptr));
    }
};
