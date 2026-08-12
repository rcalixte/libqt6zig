const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html)
pub const QOpenGLFunctions_1_2 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_1_2,

    pub const _is_QOpenGLFunctions_1_2 = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFunctions_1_2 object in C++ memory
    ///
    pub fn new() QOpenGLFunctions_1_2 {
        return .{ .ptr = qtc.QOpenGLFunctions_1_2_new() };
    }

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn initializeOpenGLFunctions(self: QOpenGLFunctions_1_2) bool {
        return qtc.QOpenGLFunctions_1_2_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeOpenGLFunctions` instead
    ///
    pub const OnInitializeOpenGLFunctions = onInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onInitializeOpenGLFunctions(self: QOpenGLFunctions_1_2, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_2_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeOpenGLFunctions` instead
    ///
    pub const SuperInitializeOpenGLFunctions = superInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn superInitializeOpenGLFunctions(self: QOpenGLFunctions_1_2) bool {
        return qtc.QOpenGLFunctions_1_2_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glViewport` instead
    ///
    pub const GlViewport = glViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glViewport(self: QOpenGLFunctions_1_2, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_2_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glDepthRange` instead
    ///
    pub const GlDepthRange = glDepthRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn glDepthRange(self: QOpenGLFunctions_1_2, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_2_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### DEPRECATED: Use `glIsEnabled` instead
    ///
    pub const GlIsEnabled = glIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glIsEnabled(self: QOpenGLFunctions_1_2, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_2_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameteriv` instead
    ///
    pub const GlGetTexLevelParameteriv = glGetTexLevelParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexLevelParameteriv(self: QOpenGLFunctions_1_2, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameterfv` instead
    ///
    pub const GlGetTexLevelParameterfv = glGetTexLevelParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexLevelParameterfv(self: QOpenGLFunctions_1_2, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameteriv` instead
    ///
    pub const GlGetTexParameteriv = glGetTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterfv` instead
    ///
    pub const GlGetTexParameterfv = glGetTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexImage` instead
    ///
    pub const GlGetTexImage = glGetTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glGetTexImage(self: QOpenGLFunctions_1_2, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glGetString` instead
    ///
    pub const GlGetString = glGetString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` name: u32 `
    ///
    pub fn glGetString(self: QOpenGLFunctions_1_2, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_1_2_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glGetIntegerv` instead
    ///
    pub const GlGetIntegerv = glGetIntegerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetIntegerv(self: QOpenGLFunctions_1_2, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatv` instead
    ///
    pub const GlGetFloatv = glGetFloatv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetFloatv(self: QOpenGLFunctions_1_2, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetDoublev` instead
    ///
    pub const GlGetDoublev = glGetDoublev;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetDoublev(self: QOpenGLFunctions_1_2, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleanv` instead
    ///
    pub const GlGetBooleanv = glGetBooleanv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn glGetBooleanv(self: QOpenGLFunctions_1_2, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_1_2_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glReadPixels` instead
    ///
    pub const GlReadPixels = glReadPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glReadPixels(self: QOpenGLFunctions_1_2, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glReadBuffer` instead
    ///
    pub const GlReadBuffer = glReadBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glReadBuffer(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPixelStorei` instead
    ///
    pub const GlPixelStorei = glPixelStorei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelStorei(self: QOpenGLFunctions_1_2, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelStoref` instead
    ///
    pub const GlPixelStoref = glPixelStoref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelStoref(self: QOpenGLFunctions_1_2, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glDepthFunc` instead
    ///
    pub const GlDepthFunc = glDepthFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` func: u32 `
    ///
    pub fn glDepthFunc(self: QOpenGLFunctions_1_2, func: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### DEPRECATED: Use `glStencilOp` instead
    ///
    pub const GlStencilOp = glStencilOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn glStencilOp(self: QOpenGLFunctions_1_2, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_2_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glStencilFunc` instead
    ///
    pub const GlStencilFunc = glStencilFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFunc(self: QOpenGLFunctions_1_2, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glLogicOp` instead
    ///
    pub const GlLogicOp = glLogicOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn glLogicOp(self: QOpenGLFunctions_1_2, opcode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### DEPRECATED: Use `glBlendFunc` instead
    ///
    pub const GlBlendFunc = glBlendFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn glBlendFunc(self: QOpenGLFunctions_1_2, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### DEPRECATED: Use `glFlush` instead
    ///
    pub const GlFlush = glFlush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glFlush(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlFlush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFinish` instead
    ///
    pub const GlFinish = glFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glFinish(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEnable` instead
    ///
    pub const GlEnable = glEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glEnable(self: QOpenGLFunctions_1_2, cap: u32) void {
        qtc.QOpenGLFunctions_1_2_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDisable` instead
    ///
    pub const GlDisable = glDisable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glDisable(self: QOpenGLFunctions_1_2, cap: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDepthMask` instead
    ///
    pub const GlDepthMask = glDepthMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` flag: u8 `
    ///
    pub fn glDepthMask(self: QOpenGLFunctions_1_2, flag: u8) void {
        qtc.QOpenGLFunctions_1_2_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColorMask` instead
    ///
    pub const GlColorMask = glColorMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColorMask(self: QOpenGLFunctions_1_2, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_2_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glStencilMask` instead
    ///
    pub const GlStencilMask = glStencilMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMask(self: QOpenGLFunctions_1_2, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearDepth` instead
    ///
    pub const GlClearDepth = glClearDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` depth: f64 `
    ///
    pub fn glClearDepth(self: QOpenGLFunctions_1_2, depth: f64) void {
        qtc.QOpenGLFunctions_1_2_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glClearStencil` instead
    ///
    pub const GlClearStencil = glClearStencil;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    pub fn glClearStencil(self: QOpenGLFunctions_1_2, s: i32) void {
        qtc.QOpenGLFunctions_1_2_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glClearColor` instead
    ///
    pub const GlClearColor = glClearColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearColor(self: QOpenGLFunctions_1_2, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_2_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glClear` instead
    ///
    pub const GlClear = glClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glClear(self: QOpenGLFunctions_1_2, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glDrawBuffer` instead
    ///
    pub const GlDrawBuffer = glDrawBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glDrawBuffer(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glTexImage2D` instead
    ///
    pub const GlTexImage2D = glTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glTexImage2D(self: QOpenGLFunctions_1_2, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage1D` instead
    ///
    pub const GlTexImage1D = glTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glTexImage1D(self: QOpenGLFunctions_1_2, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexParameteriv` instead
    ///
    pub const GlTexParameteriv = glTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameteri` instead
    ///
    pub const GlTexParameteri = glTexParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexParameteri(self: QOpenGLFunctions_1_2, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameterfv` instead
    ///
    pub const GlTexParameterfv = glTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterf` instead
    ///
    pub const GlTexParameterf = glTexParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexParameterf(self: QOpenGLFunctions_1_2, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glScissor` instead
    ///
    pub const GlScissor = glScissor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glScissor(self: QOpenGLFunctions_1_2, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_2_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glPolygonMode` instead
    ///
    pub const GlPolygonMode = glPolygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glPolygonMode(self: QOpenGLFunctions_1_2, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPointSize` instead
    ///
    pub const GlPointSize = glPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` size: f32 `
    ///
    pub fn glPointSize(self: QOpenGLFunctions_1_2, size: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glLineWidth` instead
    ///
    pub const GlLineWidth = glLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` width: f32 `
    ///
    pub fn glLineWidth(self: QOpenGLFunctions_1_2, width: f32) void {
        qtc.QOpenGLFunctions_1_2_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glHint` instead
    ///
    pub const GlHint = glHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glHint(self: QOpenGLFunctions_1_2, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glFrontFace` instead
    ///
    pub const GlFrontFace = glFrontFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glFrontFace(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glCullFace` instead
    ///
    pub const GlCullFace = glCullFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glCullFace(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glIndexubv` instead
    ///
    pub const GlIndexubv = glIndexubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const u8 `
    ///
    pub fn glIndexubv(self: QOpenGLFunctions_1_2, c: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlIndexubv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexub` instead
    ///
    pub const GlIndexub = glIndexub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: u8 `
    ///
    pub fn glIndexub(self: QOpenGLFunctions_1_2, c: u8) void {
        qtc.QOpenGLFunctions_1_2_GlIndexub(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIsTexture` instead
    ///
    pub const GlIsTexture = glIsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glIsTexture(self: QOpenGLFunctions_1_2, texture: u32) u8 {
        return qtc.QOpenGLFunctions_1_2_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glGenTextures` instead
    ///
    pub const GlGenTextures = glGenTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn glGenTextures(self: QOpenGLFunctions_1_2, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_1_2_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteTextures` instead
    ///
    pub const GlDeleteTextures = glDeleteTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn glDeleteTextures(self: QOpenGLFunctions_1_2, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glBindTexture` instead
    ///
    pub const GlBindTexture = glBindTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glBindTexture(self: QOpenGLFunctions_1_2, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glTexSubImage2D` instead
    ///
    pub const GlTexSubImage2D = glTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glTexSubImage2D(self: QOpenGLFunctions_1_2, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexSubImage1D` instead
    ///
    pub const GlTexSubImage1D = glTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glTexSubImage1D(self: QOpenGLFunctions_1_2, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage2D` instead
    ///
    pub const GlCopyTexSubImage2D = glCopyTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyTexSubImage2D(self: QOpenGLFunctions_1_2, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage1D` instead
    ///
    pub const GlCopyTexSubImage1D = glCopyTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyTexSubImage1D(self: QOpenGLFunctions_1_2, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glCopyTexImage2D` instead
    ///
    pub const GlCopyTexImage2D = glCopyTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyTexImage2D(self: QOpenGLFunctions_1_2, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glCopyTexImage1D` instead
    ///
    pub const GlCopyTexImage1D = glCopyTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyTexImage1D(self: QOpenGLFunctions_1_2, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glPolygonOffset` instead
    ///
    pub const GlPolygonOffset = glPolygonOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn glPolygonOffset(self: QOpenGLFunctions_1_2, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### DEPRECATED: Use `glGetPointerv` instead
    ///
    pub const GlGetPointerv = glGetPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn glGetPointerv(self: QOpenGLFunctions_1_2, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetPointerv(@ptrCast(self.ptr), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glDrawElements` instead
    ///
    pub const GlDrawElements = glDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn glDrawElements(self: QOpenGLFunctions_1_2, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glDrawArrays` instead
    ///
    pub const GlDrawArrays = glDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn glDrawArrays(self: QOpenGLFunctions_1_2, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_1_2_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage3D` instead
    ///
    pub const GlCopyTexSubImage3D = glCopyTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyTexSubImage3D(self: QOpenGLFunctions_1_2, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexSubImage3D` instead
    ///
    pub const GlTexSubImage3D = glTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glTexSubImage3D(self: QOpenGLFunctions_1_2, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage3D` instead
    ///
    pub const GlTexImage3D = glTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glTexImage3D(self: QOpenGLFunctions_1_2, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glDrawRangeElements` instead
    ///
    pub const GlDrawRangeElements = glDrawRangeElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glDrawRangeElements(self: QOpenGLFunctions_1_2, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glBlendEquation` instead
    ///
    pub const GlBlendEquation = glBlendEquation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBlendEquation(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glBlendColor` instead
    ///
    pub const GlBlendColor = glBlendColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glBlendColor(self: QOpenGLFunctions_1_2, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_2_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glTranslatef` instead
    ///
    pub const GlTranslatef = glTranslatef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glTranslatef(self: QOpenGLFunctions_1_2, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTranslatef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glTranslated` instead
    ///
    pub const GlTranslated = glTranslated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glTranslated(self: QOpenGLFunctions_1_2, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTranslated(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glScalef` instead
    ///
    pub const GlScalef = glScalef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glScalef(self: QOpenGLFunctions_1_2, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlScalef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glScaled` instead
    ///
    pub const GlScaled = glScaled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glScaled(self: QOpenGLFunctions_1_2, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlScaled(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRotatef` instead
    ///
    pub const GlRotatef = glRotatef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glRotatef(self: QOpenGLFunctions_1_2, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRotatef(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRotated` instead
    ///
    pub const GlRotated = glRotated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` angle: f64 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glRotated(self: QOpenGLFunctions_1_2, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRotated(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glPushMatrix` instead
    ///
    pub const GlPushMatrix = glPushMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glPushMatrix(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlPushMatrix(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPopMatrix` instead
    ///
    pub const GlPopMatrix = glPopMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glPopMatrix(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlPopMatrix(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glOrtho` instead
    ///
    pub const GlOrtho = glOrtho;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glOrtho(self: QOpenGLFunctions_1_2, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_2_GlOrtho(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### DEPRECATED: Use `glMultMatrixd` instead
    ///
    pub const GlMultMatrixd = glMultMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glMultMatrixd(self: QOpenGLFunctions_1_2, m: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlMultMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMultMatrixf` instead
    ///
    pub const GlMultMatrixf = glMultMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glMultMatrixf(self: QOpenGLFunctions_1_2, m: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlMultMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMatrixMode` instead
    ///
    pub const GlMatrixMode = glMatrixMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glMatrixMode(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlMatrixMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glLoadMatrixd` instead
    ///
    pub const GlLoadMatrixd = glLoadMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glLoadMatrixd(self: QOpenGLFunctions_1_2, m: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlLoadMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadMatrixf` instead
    ///
    pub const GlLoadMatrixf = glLoadMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glLoadMatrixf(self: QOpenGLFunctions_1_2, m: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlLoadMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadIdentity` instead
    ///
    pub const GlLoadIdentity = glLoadIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glLoadIdentity(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlLoadIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFrustum` instead
    ///
    pub const GlFrustum = glFrustum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glFrustum(self: QOpenGLFunctions_1_2, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_2_GlFrustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### DEPRECATED: Use `glIsList` instead
    ///
    pub const GlIsList = glIsList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    pub fn glIsList(self: QOpenGLFunctions_1_2, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_2_GlIsList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### DEPRECATED: Use `glGetTexGeniv` instead
    ///
    pub const GlGetTexGeniv = glGetTexGeniv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexGeniv(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexGenfv` instead
    ///
    pub const GlGetTexGenfv = glGetTexGenfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexGenfv(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexGendv` instead
    ///
    pub const GlGetTexGendv = glGetTexGendv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetTexGendv(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexEnviv` instead
    ///
    pub const GlGetTexEnviv = glGetTexEnviv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexEnviv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexEnvfv` instead
    ///
    pub const GlGetTexEnvfv = glGetTexEnvfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexEnvfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetPolygonStipple` instead
    ///
    pub const GlGetPolygonStipple = glGetPolygonStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: []u8 `
    ///
    pub fn glGetPolygonStipple(self: QOpenGLFunctions_1_2, mask: []u8) void {
        qtc.QOpenGLFunctions_1_2_GlGetPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapusv` instead
    ///
    pub const GlGetPixelMapusv = glGetPixelMapusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn glGetPixelMapusv(self: QOpenGLFunctions_1_2, map: u32, values: []u16) void {
        qtc.QOpenGLFunctions_1_2_GlGetPixelMapusv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapuiv` instead
    ///
    pub const GlGetPixelMapuiv = glGetPixelMapuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn glGetPixelMapuiv(self: QOpenGLFunctions_1_2, map: u32, values: []u32) void {
        qtc.QOpenGLFunctions_1_2_GlGetPixelMapuiv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapfv` instead
    ///
    pub const GlGetPixelMapfv = glGetPixelMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn glGetPixelMapfv(self: QOpenGLFunctions_1_2, map: u32, values: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetPixelMapfv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetMaterialiv` instead
    ///
    pub const GlGetMaterialiv = glGetMaterialiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetMaterialiv(self: QOpenGLFunctions_1_2, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMaterialfv` instead
    ///
    pub const GlGetMaterialfv = glGetMaterialfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetMaterialfv(self: QOpenGLFunctions_1_2, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapiv` instead
    ///
    pub const GlGetMapiv = glGetMapiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn glGetMapiv(self: QOpenGLFunctions_1_2, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMapiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapfv` instead
    ///
    pub const GlGetMapfv = glGetMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn glGetMapfv(self: QOpenGLFunctions_1_2, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMapfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapdv` instead
    ///
    pub const GlGetMapdv = glGetMapdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn glGetMapdv(self: QOpenGLFunctions_1_2, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetMapdv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetLightiv` instead
    ///
    pub const GlGetLightiv = glGetLightiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetLightiv(self: QOpenGLFunctions_1_2, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetLightfv` instead
    ///
    pub const GlGetLightfv = glGetLightfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetLightfv(self: QOpenGLFunctions_1_2, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetClipPlane` instead
    ///
    pub const GlGetClipPlane = glGetClipPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn glGetClipPlane(self: QOpenGLFunctions_1_2, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_1_2_GlGetClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### DEPRECATED: Use `glDrawPixels` instead
    ///
    pub const GlDrawPixels = glDrawPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glDrawPixels(self: QOpenGLFunctions_1_2, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlDrawPixels(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyPixels` instead
    ///
    pub const GlCopyPixels = glCopyPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyPixels(self: QOpenGLFunctions_1_2, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glPixelMapusv` instead
    ///
    pub const GlPixelMapusv = glPixelMapusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn glPixelMapusv(self: QOpenGLFunctions_1_2, map: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_1_2_GlPixelMapusv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelMapuiv` instead
    ///
    pub const GlPixelMapuiv = glPixelMapuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn glPixelMapuiv(self: QOpenGLFunctions_1_2, map: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelMapuiv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelMapfv` instead
    ///
    pub const GlPixelMapfv = glPixelMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn glPixelMapfv(self: QOpenGLFunctions_1_2, map: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelMapfv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelTransferi` instead
    ///
    pub const GlPixelTransferi = glPixelTransferi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelTransferi(self: QOpenGLFunctions_1_2, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelTransferi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelTransferf` instead
    ///
    pub const GlPixelTransferf = glPixelTransferf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelTransferf(self: QOpenGLFunctions_1_2, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelTransferf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelZoom` instead
    ///
    pub const GlPixelZoom = glPixelZoom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn glPixelZoom(self: QOpenGLFunctions_1_2, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPixelZoom(@ptrCast(self.ptr), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### DEPRECATED: Use `glAlphaFunc` instead
    ///
    pub const GlAlphaFunc = glAlphaFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn glAlphaFunc(self: QOpenGLFunctions_1_2, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_2_GlAlphaFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref));
    }

    /// ### DEPRECATED: Use `glEvalPoint2` instead
    ///
    pub const GlEvalPoint2 = glEvalPoint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn glEvalPoint2(self: QOpenGLFunctions_1_2, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalPoint2(@ptrCast(self.ptr), @bitCast(i), @bitCast(j));
    }

    /// ### DEPRECATED: Use `glEvalMesh2` instead
    ///
    pub const GlEvalMesh2 = glEvalMesh2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glEvalMesh2(self: QOpenGLFunctions_1_2, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalMesh2(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### DEPRECATED: Use `glEvalPoint1` instead
    ///
    pub const GlEvalPoint1 = glEvalPoint1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` i: i32 `
    ///
    pub fn glEvalPoint1(self: QOpenGLFunctions_1_2, i: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalPoint1(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `glEvalMesh1` instead
    ///
    pub const GlEvalMesh1 = glEvalMesh1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn glEvalMesh1(self: QOpenGLFunctions_1_2, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalMesh1(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### DEPRECATED: Use `glEvalCoord2fv` instead
    ///
    pub const GlEvalCoord2fv = glEvalCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn glEvalCoord2fv(self: QOpenGLFunctions_1_2, u: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord2f` instead
    ///
    pub const GlEvalCoord2f = glEvalCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn glEvalCoord2f(self: QOpenGLFunctions_1_2, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2f(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### DEPRECATED: Use `glEvalCoord2dv` instead
    ///
    pub const GlEvalCoord2dv = glEvalCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn glEvalCoord2dv(self: QOpenGLFunctions_1_2, u: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord2d` instead
    ///
    pub const GlEvalCoord2d = glEvalCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn glEvalCoord2d(self: QOpenGLFunctions_1_2, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord2d(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### DEPRECATED: Use `glEvalCoord1fv` instead
    ///
    pub const GlEvalCoord1fv = glEvalCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f32 `
    ///
    pub fn glEvalCoord1fv(self: QOpenGLFunctions_1_2, u: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord1f` instead
    ///
    pub const GlEvalCoord1f = glEvalCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: f32 `
    ///
    pub fn glEvalCoord1f(self: QOpenGLFunctions_1_2, u: f32) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1f(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `glEvalCoord1dv` instead
    ///
    pub const GlEvalCoord1dv = glEvalCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: []const f64 `
    ///
    pub fn glEvalCoord1dv(self: QOpenGLFunctions_1_2, u: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord1d` instead
    ///
    pub const GlEvalCoord1d = glEvalCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` u: f64 `
    ///
    pub fn glEvalCoord1d(self: QOpenGLFunctions_1_2, u: f64) void {
        qtc.QOpenGLFunctions_1_2_GlEvalCoord1d(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `glMapGrid2f` instead
    ///
    pub const GlMapGrid2f = glMapGrid2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glMapGrid2f(self: QOpenGLFunctions_1_2, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_1_2_GlMapGrid2f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glMapGrid2d` instead
    ///
    pub const GlMapGrid2d = glMapGrid2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glMapGrid2d(self: QOpenGLFunctions_1_2, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_1_2_GlMapGrid2d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glMapGrid1f` instead
    ///
    pub const GlMapGrid1f = glMapGrid1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn glMapGrid1f(self: QOpenGLFunctions_1_2, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_2_GlMapGrid1f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### DEPRECATED: Use `glMapGrid1d` instead
    ///
    pub const GlMapGrid1d = glMapGrid1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn glMapGrid1d(self: QOpenGLFunctions_1_2, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_2_GlMapGrid1d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### DEPRECATED: Use `glMap2f` instead
    ///
    pub const GlMap2f = glMap2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glMap2f(self: QOpenGLFunctions_1_2, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlMap2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap2d` instead
    ///
    pub const GlMap2d = glMap2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glMap2d(self: QOpenGLFunctions_1_2, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlMap2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap1f` instead
    ///
    pub const GlMap1f = glMap1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glMap1f(self: QOpenGLFunctions_1_2, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlMap1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap1d` instead
    ///
    pub const GlMap1d = glMap1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glMap1d(self: QOpenGLFunctions_1_2, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlMap1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### DEPRECATED: Use `glPushAttrib` instead
    ///
    pub const GlPushAttrib = glPushAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glPushAttrib(self: QOpenGLFunctions_1_2, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPushAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glPopAttrib` instead
    ///
    pub const GlPopAttrib = glPopAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glPopAttrib(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlPopAttrib(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glAccum` instead
    ///
    pub const GlAccum = glAccum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn glAccum(self: QOpenGLFunctions_1_2, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_2_GlAccum(@ptrCast(self.ptr), @bitCast(op), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glIndexMask` instead
    ///
    pub const GlIndexMask = glIndexMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glIndexMask(self: QOpenGLFunctions_1_2, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearIndex` instead
    ///
    pub const GlClearIndex = glClearIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: f32 `
    ///
    pub fn glClearIndex(self: QOpenGLFunctions_1_2, c: f32) void {
        qtc.QOpenGLFunctions_1_2_GlClearIndex(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glClearAccum` instead
    ///
    pub const GlClearAccum = glClearAccum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearAccum(self: QOpenGLFunctions_1_2, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_2_GlClearAccum(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glPushName` instead
    ///
    pub const GlPushName = glPushName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` name: u32 `
    ///
    pub fn glPushName(self: QOpenGLFunctions_1_2, name: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPushName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `glPopName` instead
    ///
    pub const GlPopName = glPopName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glPopName(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlPopName(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPassThrough` instead
    ///
    pub const GlPassThrough = glPassThrough;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` token: f32 `
    ///
    pub fn glPassThrough(self: QOpenGLFunctions_1_2, token: f32) void {
        qtc.QOpenGLFunctions_1_2_GlPassThrough(@ptrCast(self.ptr), @bitCast(token));
    }

    /// ### DEPRECATED: Use `glLoadName` instead
    ///
    pub const GlLoadName = glLoadName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` name: u32 `
    ///
    pub fn glLoadName(self: QOpenGLFunctions_1_2, name: u32) void {
        qtc.QOpenGLFunctions_1_2_GlLoadName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `glInitNames` instead
    ///
    pub const GlInitNames = glInitNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glInitNames(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlInitNames(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glRenderMode` instead
    ///
    pub const GlRenderMode = glRenderMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glRenderMode(self: QOpenGLFunctions_1_2, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_2_GlRenderMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glSelectBuffer` instead
    ///
    pub const GlSelectBuffer = glSelectBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn glSelectBuffer(self: QOpenGLFunctions_1_2, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_1_2_GlSelectBuffer(@ptrCast(self.ptr), @bitCast(size), buffer.ptr);
    }

    /// ### DEPRECATED: Use `glFeedbackBuffer` instead
    ///
    pub const GlFeedbackBuffer = glFeedbackBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn glFeedbackBuffer(self: QOpenGLFunctions_1_2, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlFeedbackBuffer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### DEPRECATED: Use `glTexGeniv` instead
    ///
    pub const GlTexGeniv = glTexGeniv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexGeniv(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGeni` instead
    ///
    pub const GlTexGeni = glTexGeni;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexGeni(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGeni(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexGenfv` instead
    ///
    pub const GlTexGenfv = glTexGenfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexGenfv(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGenf` instead
    ///
    pub const GlTexGenf = glTexGenf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexGenf(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexGenf(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexGendv` instead
    ///
    pub const GlTexGendv = glTexGendv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn glTexGendv(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGend` instead
    ///
    pub const GlTexGend = glTexGend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn glTexGend(self: QOpenGLFunctions_1_2, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexGend(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexEnviv` instead
    ///
    pub const GlTexEnviv = glTexEnviv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexEnviv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexEnvi` instead
    ///
    pub const GlTexEnvi = glTexEnvi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexEnvi(self: QOpenGLFunctions_1_2, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnvi(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexEnvfv` instead
    ///
    pub const GlTexEnvfv = glTexEnvfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexEnvfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexEnvf` instead
    ///
    pub const GlTexEnvf = glTexEnvf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexEnvf(self: QOpenGLFunctions_1_2, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexEnvf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glShadeModel` instead
    ///
    pub const GlShadeModel = glShadeModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glShadeModel(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlShadeModel(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPolygonStipple` instead
    ///
    pub const GlPolygonStipple = glPolygonStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn glPolygonStipple(self: QOpenGLFunctions_1_2, mask: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### DEPRECATED: Use `glMaterialiv` instead
    ///
    pub const GlMaterialiv = glMaterialiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glMaterialiv(self: QOpenGLFunctions_1_2, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMateriali` instead
    ///
    pub const GlMateriali = glMateriali;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glMateriali(self: QOpenGLFunctions_1_2, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlMateriali(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glMaterialfv` instead
    ///
    pub const GlMaterialfv = glMaterialfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glMaterialfv(self: QOpenGLFunctions_1_2, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMaterialf` instead
    ///
    pub const GlMaterialf = glMaterialf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glMaterialf(self: QOpenGLFunctions_1_2, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlMaterialf(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLineStipple` instead
    ///
    pub const GlLineStipple = glLineStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn glLineStipple(self: QOpenGLFunctions_1_2, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_2_GlLineStipple(@ptrCast(self.ptr), @bitCast(factor), @bitCast(pattern));
    }

    /// ### DEPRECATED: Use `glLightModeliv` instead
    ///
    pub const GlLightModeliv = glLightModeliv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glLightModeliv(self: QOpenGLFunctions_1_2, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModeliv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightModeli` instead
    ///
    pub const GlLightModeli = glLightModeli;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glLightModeli(self: QOpenGLFunctions_1_2, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModeli(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightModelfv` instead
    ///
    pub const GlLightModelfv = glLightModelfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glLightModelfv(self: QOpenGLFunctions_1_2, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModelfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightModelf` instead
    ///
    pub const GlLightModelf = glLightModelf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glLightModelf(self: QOpenGLFunctions_1_2, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightModelf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightiv` instead
    ///
    pub const GlLightiv = glLightiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glLightiv(self: QOpenGLFunctions_1_2, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLighti` instead
    ///
    pub const GlLighti = glLighti;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glLighti(self: QOpenGLFunctions_1_2, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlLighti(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightfv` instead
    ///
    pub const GlLightfv = glLightfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glLightfv(self: QOpenGLFunctions_1_2, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightf` instead
    ///
    pub const GlLightf = glLightf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glLightf(self: QOpenGLFunctions_1_2, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlLightf(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glFogiv` instead
    ///
    pub const GlFogiv = glFogiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glFogiv(self: QOpenGLFunctions_1_2, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlFogiv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFogi` instead
    ///
    pub const GlFogi = glFogi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glFogi(self: QOpenGLFunctions_1_2, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_2_GlFogi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glFogfv` instead
    ///
    pub const GlFogfv = glFogfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glFogfv(self: QOpenGLFunctions_1_2, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlFogfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFogf` instead
    ///
    pub const GlFogf = glFogf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glFogf(self: QOpenGLFunctions_1_2, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_2_GlFogf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glColorMaterial` instead
    ///
    pub const GlColorMaterial = glColorMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glColorMaterial(self: QOpenGLFunctions_1_2, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlColorMaterial(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glClipPlane` instead
    ///
    pub const GlClipPlane = glClipPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn glClipPlane(self: QOpenGLFunctions_1_2, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4sv` instead
    ///
    pub const GlVertex4sv = glVertex4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex4sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4s` instead
    ///
    pub const GlVertex4s = glVertex4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn glVertex4s(self: QOpenGLFunctions_1_2, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4iv` instead
    ///
    pub const GlVertex4iv = glVertex4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex4iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4i` instead
    ///
    pub const GlVertex4i = glVertex4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn glVertex4i(self: QOpenGLFunctions_1_2, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4fv` instead
    ///
    pub const GlVertex4fv = glVertex4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex4fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4f` instead
    ///
    pub const GlVertex4f = glVertex4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn glVertex4f(self: QOpenGLFunctions_1_2, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4dv` instead
    ///
    pub const GlVertex4dv = glVertex4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex4dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4d` instead
    ///
    pub const GlVertex4d = glVertex4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn glVertex4d(self: QOpenGLFunctions_1_2, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex3sv` instead
    ///
    pub const GlVertex3sv = glVertex3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex3sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3s` instead
    ///
    pub const GlVertex3s = glVertex3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glVertex3s(self: QOpenGLFunctions_1_2, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3iv` instead
    ///
    pub const GlVertex3iv = glVertex3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex3iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3i` instead
    ///
    pub const GlVertex3i = glVertex3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glVertex3i(self: QOpenGLFunctions_1_2, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3fv` instead
    ///
    pub const GlVertex3fv = glVertex3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex3fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3f` instead
    ///
    pub const GlVertex3f = glVertex3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glVertex3f(self: QOpenGLFunctions_1_2, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3dv` instead
    ///
    pub const GlVertex3dv = glVertex3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex3dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3d` instead
    ///
    pub const GlVertex3d = glVertex3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glVertex3d(self: QOpenGLFunctions_1_2, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex2sv` instead
    ///
    pub const GlVertex2sv = glVertex2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex2sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2s` instead
    ///
    pub const GlVertex2s = glVertex2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glVertex2s(self: QOpenGLFunctions_1_2, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2iv` instead
    ///
    pub const GlVertex2iv = glVertex2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex2iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2i` instead
    ///
    pub const GlVertex2i = glVertex2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glVertex2i(self: QOpenGLFunctions_1_2, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2fv` instead
    ///
    pub const GlVertex2fv = glVertex2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex2fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2f` instead
    ///
    pub const GlVertex2f = glVertex2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glVertex2f(self: QOpenGLFunctions_1_2, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2dv` instead
    ///
    pub const GlVertex2dv = glVertex2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex2dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2d` instead
    ///
    pub const GlVertex2d = glVertex2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glVertex2d(self: QOpenGLFunctions_1_2, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_2_GlVertex2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glTexCoord4sv` instead
    ///
    pub const GlTexCoord4sv = glTexCoord4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord4sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4s` instead
    ///
    pub const GlTexCoord4s = glTexCoord4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn glTexCoord4s(self: QOpenGLFunctions_1_2, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4iv` instead
    ///
    pub const GlTexCoord4iv = glTexCoord4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord4iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4i` instead
    ///
    pub const GlTexCoord4i = glTexCoord4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn glTexCoord4i(self: QOpenGLFunctions_1_2, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4fv` instead
    ///
    pub const GlTexCoord4fv = glTexCoord4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord4fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4f` instead
    ///
    pub const GlTexCoord4f = glTexCoord4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn glTexCoord4f(self: QOpenGLFunctions_1_2, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4dv` instead
    ///
    pub const GlTexCoord4dv = glTexCoord4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord4dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4d` instead
    ///
    pub const GlTexCoord4d = glTexCoord4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn glTexCoord4d(self: QOpenGLFunctions_1_2, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord4d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord3sv` instead
    ///
    pub const GlTexCoord3sv = glTexCoord3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord3sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3s` instead
    ///
    pub const GlTexCoord3s = glTexCoord3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn glTexCoord3s(self: QOpenGLFunctions_1_2, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3iv` instead
    ///
    pub const GlTexCoord3iv = glTexCoord3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord3iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3i` instead
    ///
    pub const GlTexCoord3i = glTexCoord3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn glTexCoord3i(self: QOpenGLFunctions_1_2, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3fv` instead
    ///
    pub const GlTexCoord3fv = glTexCoord3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord3fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3f` instead
    ///
    pub const GlTexCoord3f = glTexCoord3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn glTexCoord3f(self: QOpenGLFunctions_1_2, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3dv` instead
    ///
    pub const GlTexCoord3dv = glTexCoord3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord3dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3d` instead
    ///
    pub const GlTexCoord3d = glTexCoord3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn glTexCoord3d(self: QOpenGLFunctions_1_2, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord3d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord2sv` instead
    ///
    pub const GlTexCoord2sv = glTexCoord2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord2sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2s` instead
    ///
    pub const GlTexCoord2s = glTexCoord2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn glTexCoord2s(self: QOpenGLFunctions_1_2, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2iv` instead
    ///
    pub const GlTexCoord2iv = glTexCoord2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord2iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2i` instead
    ///
    pub const GlTexCoord2i = glTexCoord2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn glTexCoord2i(self: QOpenGLFunctions_1_2, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2fv` instead
    ///
    pub const GlTexCoord2fv = glTexCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord2fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2f` instead
    ///
    pub const GlTexCoord2f = glTexCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn glTexCoord2f(self: QOpenGLFunctions_1_2, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2dv` instead
    ///
    pub const GlTexCoord2dv = glTexCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord2dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2d` instead
    ///
    pub const GlTexCoord2d = glTexCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn glTexCoord2d(self: QOpenGLFunctions_1_2, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord2d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord1sv` instead
    ///
    pub const GlTexCoord1sv = glTexCoord1sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord1sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1s` instead
    ///
    pub const GlTexCoord1s = glTexCoord1s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i16 `
    ///
    pub fn glTexCoord1s(self: QOpenGLFunctions_1_2, s: i16) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1s(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1iv` instead
    ///
    pub const GlTexCoord1iv = glTexCoord1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord1iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1i` instead
    ///
    pub const GlTexCoord1i = glTexCoord1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: i32 `
    ///
    pub fn glTexCoord1i(self: QOpenGLFunctions_1_2, s: i32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1i(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1fv` instead
    ///
    pub const GlTexCoord1fv = glTexCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord1fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1f` instead
    ///
    pub const GlTexCoord1f = glTexCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f32 `
    ///
    pub fn glTexCoord1f(self: QOpenGLFunctions_1_2, s: f32) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1f(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1dv` instead
    ///
    pub const GlTexCoord1dv = glTexCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord1dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1d` instead
    ///
    pub const GlTexCoord1d = glTexCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` s: f64 `
    ///
    pub fn glTexCoord1d(self: QOpenGLFunctions_1_2, s: f64) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoord1d(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glRectsv` instead
    ///
    pub const GlRectsv = glRectsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn glRectsv(self: QOpenGLFunctions_1_2, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRectsv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRects` instead
    ///
    pub const GlRects = glRects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x1: i16 `
    ///
    /// ` y1: i16 `
    ///
    /// ` x2: i16 `
    ///
    /// ` y2: i16 `
    ///
    pub fn glRects(self: QOpenGLFunctions_1_2, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_1_2_GlRects(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectiv` instead
    ///
    pub const GlRectiv = glRectiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn glRectiv(self: QOpenGLFunctions_1_2, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRectiv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRecti` instead
    ///
    pub const GlRecti = glRecti;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn glRecti(self: QOpenGLFunctions_1_2, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_1_2_GlRecti(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectfv` instead
    ///
    pub const GlRectfv = glRectfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn glRectfv(self: QOpenGLFunctions_1_2, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRectfv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRectf` instead
    ///
    pub const GlRectf = glRectf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x1: f32 `
    ///
    /// ` y1: f32 `
    ///
    /// ` x2: f32 `
    ///
    /// ` y2: f32 `
    ///
    pub fn glRectf(self: QOpenGLFunctions_1_2, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRectf(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectdv` instead
    ///
    pub const GlRectdv = glRectdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn glRectdv(self: QOpenGLFunctions_1_2, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRectdv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRectd` instead
    ///
    pub const GlRectd = glRectd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn glRectd(self: QOpenGLFunctions_1_2, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRectd(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRasterPos4sv` instead
    ///
    pub const GlRasterPos4sv = glRasterPos4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos4sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4s` instead
    ///
    pub const GlRasterPos4s = glRasterPos4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn glRasterPos4s(self: QOpenGLFunctions_1_2, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4iv` instead
    ///
    pub const GlRasterPos4iv = glRasterPos4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos4iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4i` instead
    ///
    pub const GlRasterPos4i = glRasterPos4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn glRasterPos4i(self: QOpenGLFunctions_1_2, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4fv` instead
    ///
    pub const GlRasterPos4fv = glRasterPos4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos4fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4f` instead
    ///
    pub const GlRasterPos4f = glRasterPos4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn glRasterPos4f(self: QOpenGLFunctions_1_2, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4dv` instead
    ///
    pub const GlRasterPos4dv = glRasterPos4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos4dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4d` instead
    ///
    pub const GlRasterPos4d = glRasterPos4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn glRasterPos4d(self: QOpenGLFunctions_1_2, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos3sv` instead
    ///
    pub const GlRasterPos3sv = glRasterPos3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos3sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3s` instead
    ///
    pub const GlRasterPos3s = glRasterPos3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glRasterPos3s(self: QOpenGLFunctions_1_2, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3iv` instead
    ///
    pub const GlRasterPos3iv = glRasterPos3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos3iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3i` instead
    ///
    pub const GlRasterPos3i = glRasterPos3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glRasterPos3i(self: QOpenGLFunctions_1_2, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3fv` instead
    ///
    pub const GlRasterPos3fv = glRasterPos3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos3fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3f` instead
    ///
    pub const GlRasterPos3f = glRasterPos3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glRasterPos3f(self: QOpenGLFunctions_1_2, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3dv` instead
    ///
    pub const GlRasterPos3dv = glRasterPos3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos3dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3d` instead
    ///
    pub const GlRasterPos3d = glRasterPos3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glRasterPos3d(self: QOpenGLFunctions_1_2, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos2sv` instead
    ///
    pub const GlRasterPos2sv = glRasterPos2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos2sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2s` instead
    ///
    pub const GlRasterPos2s = glRasterPos2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glRasterPos2s(self: QOpenGLFunctions_1_2, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2iv` instead
    ///
    pub const GlRasterPos2iv = glRasterPos2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos2iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2i` instead
    ///
    pub const GlRasterPos2i = glRasterPos2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glRasterPos2i(self: QOpenGLFunctions_1_2, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2fv` instead
    ///
    pub const GlRasterPos2fv = glRasterPos2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos2fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2f` instead
    ///
    pub const GlRasterPos2f = glRasterPos2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glRasterPos2f(self: QOpenGLFunctions_1_2, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2dv` instead
    ///
    pub const GlRasterPos2dv = glRasterPos2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos2dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2d` instead
    ///
    pub const GlRasterPos2d = glRasterPos2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glRasterPos2d(self: QOpenGLFunctions_1_2, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_2_GlRasterPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glNormal3sv` instead
    ///
    pub const GlNormal3sv = glNormal3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glNormal3sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3s` instead
    ///
    pub const GlNormal3s = glNormal3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn glNormal3s(self: QOpenGLFunctions_1_2, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3s(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3iv` instead
    ///
    pub const GlNormal3iv = glNormal3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glNormal3iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3i` instead
    ///
    pub const GlNormal3i = glNormal3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn glNormal3i(self: QOpenGLFunctions_1_2, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3i(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3fv` instead
    ///
    pub const GlNormal3fv = glNormal3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glNormal3fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3f` instead
    ///
    pub const GlNormal3f = glNormal3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn glNormal3f(self: QOpenGLFunctions_1_2, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3f(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3dv` instead
    ///
    pub const GlNormal3dv = glNormal3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glNormal3dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3d` instead
    ///
    pub const GlNormal3d = glNormal3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn glNormal3d(self: QOpenGLFunctions_1_2, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3d(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3bv` instead
    ///
    pub const GlNormal3bv = glNormal3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glNormal3bv(self: QOpenGLFunctions_1_2, v: []const i8) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3b` instead
    ///
    pub const GlNormal3b = glNormal3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn glNormal3b(self: QOpenGLFunctions_1_2, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_2_GlNormal3b(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glIndexsv` instead
    ///
    pub const GlIndexsv = glIndexsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const i16 `
    ///
    pub fn glIndexsv(self: QOpenGLFunctions_1_2, c: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlIndexsv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexs` instead
    ///
    pub const GlIndexs = glIndexs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: i16 `
    ///
    pub fn glIndexs(self: QOpenGLFunctions_1_2, c: i16) void {
        qtc.QOpenGLFunctions_1_2_GlIndexs(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexiv` instead
    ///
    pub const GlIndexiv = glIndexiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const i32 `
    ///
    pub fn glIndexiv(self: QOpenGLFunctions_1_2, c: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexiv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexi` instead
    ///
    pub const GlIndexi = glIndexi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: i32 `
    ///
    pub fn glIndexi(self: QOpenGLFunctions_1_2, c: i32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexi(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexfv` instead
    ///
    pub const GlIndexfv = glIndexfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const f32 `
    ///
    pub fn glIndexfv(self: QOpenGLFunctions_1_2, c: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexfv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexf` instead
    ///
    pub const GlIndexf = glIndexf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: f32 `
    ///
    pub fn glIndexf(self: QOpenGLFunctions_1_2, c: f32) void {
        qtc.QOpenGLFunctions_1_2_GlIndexf(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexdv` instead
    ///
    pub const GlIndexdv = glIndexdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: []const f64 `
    ///
    pub fn glIndexdv(self: QOpenGLFunctions_1_2, c: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlIndexdv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexd` instead
    ///
    pub const GlIndexd = glIndexd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` c: f64 `
    ///
    pub fn glIndexd(self: QOpenGLFunctions_1_2, c: f64) void {
        qtc.QOpenGLFunctions_1_2_GlIndexd(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glEnd` instead
    ///
    pub const GlEnd = glEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glEnd(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEdgeFlagv` instead
    ///
    pub const GlEdgeFlagv = glEdgeFlagv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn glEdgeFlagv(self: QOpenGLFunctions_1_2, flag: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlEdgeFlagv(@ptrCast(self.ptr), flag.ptr);
    }

    /// ### DEPRECATED: Use `glEdgeFlag` instead
    ///
    pub const GlEdgeFlag = glEdgeFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` flag: u8 `
    ///
    pub fn glEdgeFlag(self: QOpenGLFunctions_1_2, flag: u8) void {
        qtc.QOpenGLFunctions_1_2_GlEdgeFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColor4usv` instead
    ///
    pub const GlColor4usv = glColor4usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glColor4usv(self: QOpenGLFunctions_1_2, v: []const u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor4usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4us` instead
    ///
    pub const GlColor4us = glColor4us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn glColor4us(self: QOpenGLFunctions_1_2, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor4us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4uiv` instead
    ///
    pub const GlColor4uiv = glColor4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glColor4uiv(self: QOpenGLFunctions_1_2, v: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4ui` instead
    ///
    pub const GlColor4ui = glColor4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    /// ` alpha: u32 `
    ///
    pub fn glColor4ui(self: QOpenGLFunctions_1_2, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4ubv` instead
    ///
    pub const GlColor4ubv = glColor4ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glColor4ubv(self: QOpenGLFunctions_1_2, v: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor4ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4ub` instead
    ///
    pub const GlColor4ub = glColor4ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColor4ub(self: QOpenGLFunctions_1_2, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor4ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4sv` instead
    ///
    pub const GlColor4sv = glColor4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glColor4sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4s` instead
    ///
    pub const GlColor4s = glColor4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    /// ` alpha: i16 `
    ///
    pub fn glColor4s(self: QOpenGLFunctions_1_2, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor4s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4iv` instead
    ///
    pub const GlColor4iv = glColor4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glColor4iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4i` instead
    ///
    pub const GlColor4i = glColor4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    /// ` alpha: i32 `
    ///
    pub fn glColor4i(self: QOpenGLFunctions_1_2, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4fv` instead
    ///
    pub const GlColor4fv = glColor4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glColor4fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4f` instead
    ///
    pub const GlColor4f = glColor4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glColor4f(self: QOpenGLFunctions_1_2, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor4f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4dv` instead
    ///
    pub const GlColor4dv = glColor4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glColor4dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4d` instead
    ///
    pub const GlColor4d = glColor4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn glColor4d(self: QOpenGLFunctions_1_2, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor4d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4bv` instead
    ///
    pub const GlColor4bv = glColor4bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glColor4bv(self: QOpenGLFunctions_1_2, v: []const i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor4bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4b` instead
    ///
    pub const GlColor4b = glColor4b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    /// ` alpha: i8 `
    ///
    pub fn glColor4b(self: QOpenGLFunctions_1_2, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor4b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor3usv` instead
    ///
    pub const GlColor3usv = glColor3usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glColor3usv(self: QOpenGLFunctions_1_2, v: []const u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3us` instead
    ///
    pub const GlColor3us = glColor3us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn glColor3us(self: QOpenGLFunctions_1_2, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3uiv` instead
    ///
    pub const GlColor3uiv = glColor3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glColor3uiv(self: QOpenGLFunctions_1_2, v: []const u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3ui` instead
    ///
    pub const GlColor3ui = glColor3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn glColor3ui(self: QOpenGLFunctions_1_2, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3ubv` instead
    ///
    pub const GlColor3ubv = glColor3ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glColor3ubv(self: QOpenGLFunctions_1_2, v: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3ub` instead
    ///
    pub const GlColor3ub = glColor3ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn glColor3ub(self: QOpenGLFunctions_1_2, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3sv` instead
    ///
    pub const GlColor3sv = glColor3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glColor3sv(self: QOpenGLFunctions_1_2, v: []const i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3s` instead
    ///
    pub const GlColor3s = glColor3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn glColor3s(self: QOpenGLFunctions_1_2, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_2_GlColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3iv` instead
    ///
    pub const GlColor3iv = glColor3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glColor3iv(self: QOpenGLFunctions_1_2, v: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3i` instead
    ///
    pub const GlColor3i = glColor3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn glColor3i(self: QOpenGLFunctions_1_2, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3fv` instead
    ///
    pub const GlColor3fv = glColor3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glColor3fv(self: QOpenGLFunctions_1_2, v: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3f` instead
    ///
    pub const GlColor3f = glColor3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn glColor3f(self: QOpenGLFunctions_1_2, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_2_GlColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3dv` instead
    ///
    pub const GlColor3dv = glColor3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glColor3dv(self: QOpenGLFunctions_1_2, v: []const f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3d` instead
    ///
    pub const GlColor3d = glColor3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn glColor3d(self: QOpenGLFunctions_1_2, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_2_GlColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3bv` instead
    ///
    pub const GlColor3bv = glColor3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glColor3bv(self: QOpenGLFunctions_1_2, v: []const i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3b` instead
    ///
    pub const GlColor3b = glColor3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn glColor3b(self: QOpenGLFunctions_1_2, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_2_GlColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glBitmap` instead
    ///
    pub const GlBitmap = glBitmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glBitmap(self: QOpenGLFunctions_1_2, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: []const u8) void {
        qtc.QOpenGLFunctions_1_2_GlBitmap(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### DEPRECATED: Use `glBegin` instead
    ///
    pub const GlBegin = glBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBegin(self: QOpenGLFunctions_1_2, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlBegin(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glListBase` instead
    ///
    pub const GlListBase = glListBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` base: u32 `
    ///
    pub fn glListBase(self: QOpenGLFunctions_1_2, base: u32) void {
        qtc.QOpenGLFunctions_1_2_GlListBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### DEPRECATED: Use `glGenLists` instead
    ///
    pub const GlGenLists = glGenLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` range: i32 `
    ///
    pub fn glGenLists(self: QOpenGLFunctions_1_2, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_2_GlGenLists(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `glDeleteLists` instead
    ///
    pub const GlDeleteLists = glDeleteLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn glDeleteLists(self: QOpenGLFunctions_1_2, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_2_GlDeleteLists(@ptrCast(self.ptr), @bitCast(list), @bitCast(range));
    }

    /// ### DEPRECATED: Use `glCallLists` instead
    ///
    pub const GlCallLists = glCallLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn glCallLists(self: QOpenGLFunctions_1_2, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlCallLists(@ptrCast(self.ptr), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### DEPRECATED: Use `glCallList` instead
    ///
    pub const GlCallList = glCallList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    pub fn glCallList(self: QOpenGLFunctions_1_2, list: u32) void {
        qtc.QOpenGLFunctions_1_2_GlCallList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### DEPRECATED: Use `glEndList` instead
    ///
    pub const GlEndList = glEndList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glEndList(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlEndList(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glNewList` instead
    ///
    pub const GlNewList = glNewList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glNewList(self: QOpenGLFunctions_1_2, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_2_GlNewList(@ptrCast(self.ptr), @bitCast(list), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPushClientAttrib` instead
    ///
    pub const GlPushClientAttrib = glPushClientAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPushClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glPushClientAttrib(self: QOpenGLFunctions_1_2, mask: u32) void {
        qtc.QOpenGLFunctions_1_2_GlPushClientAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glPopClientAttrib` instead
    ///
    pub const GlPopClientAttrib = glPopClientAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPopClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn glPopClientAttrib(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_GlPopClientAttrib(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPrioritizeTextures` instead
    ///
    pub const GlPrioritizeTextures = glPrioritizeTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glPrioritizeTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` priorities: []const f32 `
    ///
    pub fn glPrioritizeTextures(self: QOpenGLFunctions_1_2, n: i32, textures: []const u32, priorities: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlPrioritizeTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr, priorities.ptr);
    }

    /// ### DEPRECATED: Use `glAreTexturesResident` instead
    ///
    pub const GlAreTexturesResident = glAreTexturesResident;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glAreTexturesResident)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` residences: []u8 `
    ///
    pub fn glAreTexturesResident(self: QOpenGLFunctions_1_2, n: i32, textures: []const u32, residences: []u8) u8 {
        return qtc.QOpenGLFunctions_1_2_GlAreTexturesResident(@ptrCast(self.ptr), @bitCast(n), textures.ptr, residences.ptr);
    }

    /// ### DEPRECATED: Use `glVertexPointer` instead
    ///
    pub const GlVertexPointer = glVertexPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glVertexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glVertexPointer(self: QOpenGLFunctions_1_2, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlVertexPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glTexCoordPointer` instead
    ///
    pub const GlTexCoordPointer = glTexCoordPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glTexCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glTexCoordPointer(self: QOpenGLFunctions_1_2, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlTexCoordPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glNormalPointer` instead
    ///
    pub const GlNormalPointer = glNormalPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glNormalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glNormalPointer(self: QOpenGLFunctions_1_2, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlNormalPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glInterleavedArrays` instead
    ///
    pub const GlInterleavedArrays = glInterleavedArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glInterleavedArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` format: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glInterleavedArrays(self: QOpenGLFunctions_1_2, format: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlInterleavedArrays(@ptrCast(self.ptr), @bitCast(format), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glIndexPointer` instead
    ///
    pub const GlIndexPointer = glIndexPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glIndexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glIndexPointer(self: QOpenGLFunctions_1_2, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlIndexPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glEnableClientState` instead
    ///
    pub const GlEnableClientState = glEnableClientState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEnableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` array: u32 `
    ///
    pub fn glEnableClientState(self: QOpenGLFunctions_1_2, array: u32) void {
        qtc.QOpenGLFunctions_1_2_GlEnableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glEdgeFlagPointer` instead
    ///
    pub const GlEdgeFlagPointer = glEdgeFlagPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glEdgeFlagPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glEdgeFlagPointer(self: QOpenGLFunctions_1_2, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlEdgeFlagPointer(@ptrCast(self.ptr), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glDisableClientState` instead
    ///
    pub const GlDisableClientState = glDisableClientState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glDisableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` array: u32 `
    ///
    pub fn glDisableClientState(self: QOpenGLFunctions_1_2, array: u32) void {
        qtc.QOpenGLFunctions_1_2_GlDisableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glColorPointer` instead
    ///
    pub const GlColorPointer = glColorPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glColorPointer(self: QOpenGLFunctions_1_2, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glArrayElement` instead
    ///
    pub const GlArrayElement = glArrayElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glArrayElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` i: i32 `
    ///
    pub fn glArrayElement(self: QOpenGLFunctions_1_2, i: i32) void {
        qtc.QOpenGLFunctions_1_2_GlArrayElement(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `glResetMinmax` instead
    ///
    pub const GlResetMinmax = glResetMinmax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glResetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    pub fn glResetMinmax(self: QOpenGLFunctions_1_2, target: u32) void {
        qtc.QOpenGLFunctions_1_2_GlResetMinmax(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glResetHistogram` instead
    ///
    pub const GlResetHistogram = glResetHistogram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glResetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    pub fn glResetHistogram(self: QOpenGLFunctions_1_2, target: u32) void {
        qtc.QOpenGLFunctions_1_2_GlResetHistogram(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glMinmax` instead
    ///
    pub const GlMinmax = glMinmax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn glMinmax(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_2_GlMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### DEPRECATED: Use `glHistogram` instead
    ///
    pub const GlHistogram = glHistogram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn glHistogram(self: QOpenGLFunctions_1_2, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_2_GlHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(width), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### DEPRECATED: Use `glGetMinmaxParameteriv` instead
    ///
    pub const GlGetMinmaxParameteriv = glGetMinmaxParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMinmaxParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetMinmaxParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMinmaxParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMinmaxParameterfv` instead
    ///
    pub const GlGetMinmaxParameterfv = glGetMinmaxParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMinmaxParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetMinmaxParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetMinmaxParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMinmax` instead
    ///
    pub const GlGetMinmax = glGetMinmax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glGetMinmax(self: QOpenGLFunctions_1_2, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### DEPRECATED: Use `glGetHistogramParameteriv` instead
    ///
    pub const GlGetHistogramParameteriv = glGetHistogramParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetHistogramParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetHistogramParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetHistogramParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetHistogramParameterfv` instead
    ///
    pub const GlGetHistogramParameterfv = glGetHistogramParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetHistogramParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetHistogramParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetHistogramParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetHistogram` instead
    ///
    pub const GlGetHistogram = glGetHistogram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glGetHistogram(self: QOpenGLFunctions_1_2, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### DEPRECATED: Use `glSeparableFilter2D` instead
    ///
    pub const GlSeparableFilter2D = glSeparableFilter2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glSeparableFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glSeparableFilter2D(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*const anyopaque, column: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlSeparableFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `glGetSeparableFilter` instead
    ///
    pub const GlGetSeparableFilter = glGetSeparableFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetSeparableFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glGetSeparableFilter(self: QOpenGLFunctions_1_2, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetSeparableFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    /// ### DEPRECATED: Use `glGetConvolutionParameteriv` instead
    ///
    pub const GlGetConvolutionParameteriv = glGetConvolutionParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetConvolutionParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetConvolutionParameterfv` instead
    ///
    pub const GlGetConvolutionParameterfv = glGetConvolutionParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetConvolutionParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetConvolutionFilter` instead
    ///
    pub const GlGetConvolutionFilter = glGetConvolutionFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetConvolutionFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*anyopaque `
    ///
    pub fn glGetConvolutionFilter(self: QOpenGLFunctions_1_2, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetConvolutionFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### DEPRECATED: Use `glCopyConvolutionFilter2D` instead
    ///
    pub const GlCopyConvolutionFilter2D = glCopyConvolutionFilter2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyConvolutionFilter2D(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCopyConvolutionFilter1D` instead
    ///
    pub const GlCopyConvolutionFilter1D = glCopyConvolutionFilter1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyConvolutionFilter1D(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glConvolutionParameteriv` instead
    ///
    pub const GlConvolutionParameteriv = glConvolutionParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glConvolutionParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glConvolutionParameteri` instead
    ///
    pub const GlConvolutionParameteri = glConvolutionParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: i32 `
    ///
    pub fn glConvolutionParameteri(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### DEPRECATED: Use `glConvolutionParameterfv` instead
    ///
    pub const GlConvolutionParameterfv = glConvolutionParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glConvolutionParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glConvolutionParameterf` instead
    ///
    pub const GlConvolutionParameterf = glConvolutionParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: f32 `
    ///
    pub fn glConvolutionParameterf(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### DEPRECATED: Use `glConvolutionFilter2D` instead
    ///
    pub const GlConvolutionFilter2D = glConvolutionFilter2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glConvolutionFilter2D(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### DEPRECATED: Use `glConvolutionFilter1D` instead
    ///
    pub const GlConvolutionFilter1D = glConvolutionFilter1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glConvolutionFilter1D(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### DEPRECATED: Use `glCopyColorSubTable` instead
    ///
    pub const GlCopyColorSubTable = glCopyColorSubTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyColorSubTable(self: QOpenGLFunctions_1_2, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glColorSubTable` instead
    ///
    pub const GlColorSubTable = glColorSubTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glColorSubTable(self: QOpenGLFunctions_1_2, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(count), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glGetColorTableParameteriv` instead
    ///
    pub const GlGetColorTableParameteriv = glGetColorTableParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetColorTableParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_1_2_GlGetColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetColorTableParameterfv` instead
    ///
    pub const GlGetColorTableParameterfv = glGetColorTableParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetColorTableParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_1_2_GlGetColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetColorTable` instead
    ///
    pub const GlGetColorTable = glGetColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glGetColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` table: ?*anyopaque `
    ///
    pub fn glGetColorTable(self: QOpenGLFunctions_1_2, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlGetColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### DEPRECATED: Use `glCopyColorTable` instead
    ///
    pub const GlCopyColorTable = glCopyColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glCopyColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glCopyColorTable(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_2_GlCopyColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glColorTableParameteriv` instead
    ///
    pub const GlColorTableParameteriv = glColorTableParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glColorTableParameteriv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_1_2_GlColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glColorTableParameterfv` instead
    ///
    pub const GlColorTableParameterfv = glColorTableParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glColorTableParameterfv(self: QOpenGLFunctions_1_2, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_1_2_GlColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glColorTable` instead
    ///
    pub const GlColorTable = glColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#glColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_1_2 `
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
    pub fn glColorTable(self: QOpenGLFunctions_1_2, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_1_2_GlColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
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
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn isInitialized(self: QOpenGLFunctions_1_2) bool {
        return qtc.QOpenGLFunctions_1_2_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn superIsInitialized(self: QOpenGLFunctions_1_2) bool {
        return qtc.QOpenGLFunctions_1_2_SuperIsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_1_2`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: QOpenGLFunctions_1_2, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_2_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn setOwningContext(self: QOpenGLFunctions_1_2, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_1_2_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn superSetOwningContext(self: QOpenGLFunctions_1_2, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_1_2_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_1_2`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_1_2, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn onSetOwningContext(self: QOpenGLFunctions_1_2, callback: *const fn (QOpenGLFunctions_1_2, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_1_2_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn owningContext(self: QOpenGLFunctions_1_2) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_1_2_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn superOwningContext(self: QOpenGLFunctions_1_2) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_1_2_SuperOwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_1_2`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn onOwningContext(self: QOpenGLFunctions_1_2, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_1_2_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2.html#dtor.QOpenGLFunctions_1_2)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_1_2 `
    ///
    pub fn delete(self: QOpenGLFunctions_1_2) void {
        qtc.QOpenGLFunctions_1_2_Delete(@ptrCast(self.ptr));
    }
};
