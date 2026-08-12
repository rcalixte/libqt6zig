const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html)
pub const QOpenGLFunctions_3_1 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_1,

    pub const _is_QOpenGLFunctions_3_1 = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFunctions_3_1 object in C++ memory
    ///
    pub fn new() QOpenGLFunctions_3_1 {
        return .{ .ptr = qtc.QOpenGLFunctions_3_1_new() };
    }

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn initializeOpenGLFunctions(self: QOpenGLFunctions_3_1) bool {
        return qtc.QOpenGLFunctions_3_1_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeOpenGLFunctions` instead
    ///
    pub const OnInitializeOpenGLFunctions = onInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onInitializeOpenGLFunctions(self: QOpenGLFunctions_3_1, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_1_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeOpenGLFunctions` instead
    ///
    pub const SuperInitializeOpenGLFunctions = superInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn superInitializeOpenGLFunctions(self: QOpenGLFunctions_3_1) bool {
        return qtc.QOpenGLFunctions_3_1_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glViewport` instead
    ///
    pub const GlViewport = glViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glViewport(self: QOpenGLFunctions_3_1, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glDepthRange` instead
    ///
    pub const GlDepthRange = glDepthRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn glDepthRange(self: QOpenGLFunctions_3_1, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_3_1_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### DEPRECATED: Use `glIsEnabled` instead
    ///
    pub const GlIsEnabled = glIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glIsEnabled(self: QOpenGLFunctions_3_1, cap: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameteriv` instead
    ///
    pub const GlGetTexLevelParameteriv = glGetTexLevelParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexLevelParameteriv(self: QOpenGLFunctions_3_1, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameterfv` instead
    ///
    pub const GlGetTexLevelParameterfv = glGetTexLevelParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexLevelParameterfv(self: QOpenGLFunctions_3_1, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameteriv` instead
    ///
    pub const GlGetTexParameteriv = glGetTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameteriv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterfv` instead
    ///
    pub const GlGetTexParameterfv = glGetTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexParameterfv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexImage` instead
    ///
    pub const GlGetTexImage = glGetTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glGetTexImage(self: QOpenGLFunctions_3_1, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glGetString` instead
    ///
    pub const GlGetString = glGetString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` name: u32 `
    ///
    pub fn glGetString(self: QOpenGLFunctions_3_1, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_3_1_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glGetIntegerv` instead
    ///
    pub const GlGetIntegerv = glGetIntegerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetIntegerv(self: QOpenGLFunctions_3_1, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatv` instead
    ///
    pub const GlGetFloatv = glGetFloatv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetFloatv(self: QOpenGLFunctions_3_1, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetDoublev` instead
    ///
    pub const GlGetDoublev = glGetDoublev;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetDoublev(self: QOpenGLFunctions_3_1, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_1_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleanv` instead
    ///
    pub const GlGetBooleanv = glGetBooleanv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn glGetBooleanv(self: QOpenGLFunctions_3_1, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_3_1_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glReadPixels` instead
    ///
    pub const GlReadPixels = glReadPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glReadPixels(self: QOpenGLFunctions_3_1, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glReadBuffer` instead
    ///
    pub const GlReadBuffer = glReadBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glReadBuffer(self: QOpenGLFunctions_3_1, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPixelStorei` instead
    ///
    pub const GlPixelStorei = glPixelStorei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelStorei(self: QOpenGLFunctions_3_1, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_1_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelStoref` instead
    ///
    pub const GlPixelStoref = glPixelStoref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelStoref(self: QOpenGLFunctions_3_1, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glDepthFunc` instead
    ///
    pub const GlDepthFunc = glDepthFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` func: u32 `
    ///
    pub fn glDepthFunc(self: QOpenGLFunctions_3_1, func: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### DEPRECATED: Use `glStencilOp` instead
    ///
    pub const GlStencilOp = glStencilOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn glStencilOp(self: QOpenGLFunctions_3_1, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glStencilFunc` instead
    ///
    pub const GlStencilFunc = glStencilFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFunc(self: QOpenGLFunctions_3_1, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glLogicOp` instead
    ///
    pub const GlLogicOp = glLogicOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` opcode: u32 `
    ///
    pub fn glLogicOp(self: QOpenGLFunctions_3_1, opcode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### DEPRECATED: Use `glBlendFunc` instead
    ///
    pub const GlBlendFunc = glBlendFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn glBlendFunc(self: QOpenGLFunctions_3_1, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### DEPRECATED: Use `glFlush` instead
    ///
    pub const GlFlush = glFlush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn glFlush(self: QOpenGLFunctions_3_1) void {
        qtc.QOpenGLFunctions_3_1_GlFlush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFinish` instead
    ///
    pub const GlFinish = glFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn glFinish(self: QOpenGLFunctions_3_1) void {
        qtc.QOpenGLFunctions_3_1_GlFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEnable` instead
    ///
    pub const GlEnable = glEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glEnable(self: QOpenGLFunctions_3_1, cap: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDisable` instead
    ///
    pub const GlDisable = glDisable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` cap: u32 `
    ///
    pub fn glDisable(self: QOpenGLFunctions_3_1, cap: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDepthMask` instead
    ///
    pub const GlDepthMask = glDepthMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` flag: u8 `
    ///
    pub fn glDepthMask(self: QOpenGLFunctions_3_1, flag: u8) void {
        qtc.QOpenGLFunctions_3_1_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColorMask` instead
    ///
    pub const GlColorMask = glColorMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColorMask(self: QOpenGLFunctions_3_1, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_3_1_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glStencilMask` instead
    ///
    pub const GlStencilMask = glStencilMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMask(self: QOpenGLFunctions_3_1, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearDepth` instead
    ///
    pub const GlClearDepth = glClearDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` depth: f64 `
    ///
    pub fn glClearDepth(self: QOpenGLFunctions_3_1, depth: f64) void {
        qtc.QOpenGLFunctions_3_1_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glClearStencil` instead
    ///
    pub const GlClearStencil = glClearStencil;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` s: i32 `
    ///
    pub fn glClearStencil(self: QOpenGLFunctions_3_1, s: i32) void {
        qtc.QOpenGLFunctions_3_1_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glClearColor` instead
    ///
    pub const GlClearColor = glClearColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearColor(self: QOpenGLFunctions_3_1, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_1_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glClear` instead
    ///
    pub const GlClear = glClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glClear(self: QOpenGLFunctions_3_1, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glDrawBuffer` instead
    ///
    pub const GlDrawBuffer = glDrawBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glDrawBuffer(self: QOpenGLFunctions_3_1, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glTexImage2D` instead
    ///
    pub const GlTexImage2D = glTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTexImage2D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage1D` instead
    ///
    pub const GlTexImage1D = glTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTexImage1D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexParameteriv` instead
    ///
    pub const GlTexParameteriv = glTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameteriv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameteri` instead
    ///
    pub const GlTexParameteri = glTexParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexParameteri(self: QOpenGLFunctions_3_1, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameterfv` instead
    ///
    pub const GlTexParameterfv = glTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexParameterfv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterf` instead
    ///
    pub const GlTexParameterf = glTexParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexParameterf(self: QOpenGLFunctions_3_1, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glScissor` instead
    ///
    pub const GlScissor = glScissor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glScissor(self: QOpenGLFunctions_3_1, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glPolygonMode` instead
    ///
    pub const GlPolygonMode = glPolygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glPolygonMode(self: QOpenGLFunctions_3_1, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPointSize` instead
    ///
    pub const GlPointSize = glPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` size: f32 `
    ///
    pub fn glPointSize(self: QOpenGLFunctions_3_1, size: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glLineWidth` instead
    ///
    pub const GlLineWidth = glLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` width: f32 `
    ///
    pub fn glLineWidth(self: QOpenGLFunctions_3_1, width: f32) void {
        qtc.QOpenGLFunctions_3_1_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glHint` instead
    ///
    pub const GlHint = glHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glHint(self: QOpenGLFunctions_3_1, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glFrontFace` instead
    ///
    pub const GlFrontFace = glFrontFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glFrontFace(self: QOpenGLFunctions_3_1, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glCullFace` instead
    ///
    pub const GlCullFace = glCullFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glCullFace(self: QOpenGLFunctions_3_1, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glIsTexture` instead
    ///
    pub const GlIsTexture = glIsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glIsTexture(self: QOpenGLFunctions_3_1, texture: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glGenTextures` instead
    ///
    pub const GlGenTextures = glGenTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn glGenTextures(self: QOpenGLFunctions_3_1, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteTextures` instead
    ///
    pub const GlDeleteTextures = glDeleteTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn glDeleteTextures(self: QOpenGLFunctions_3_1, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glBindTexture` instead
    ///
    pub const GlBindTexture = glBindTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glBindTexture(self: QOpenGLFunctions_3_1, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glTexSubImage2D` instead
    ///
    pub const GlTexSubImage2D = glTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTexSubImage2D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexSubImage1D` instead
    ///
    pub const GlTexSubImage1D = glTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTexSubImage1D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage2D` instead
    ///
    pub const GlCopyTexSubImage2D = glCopyTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCopyTexSubImage2D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage1D` instead
    ///
    pub const GlCopyTexSubImage1D = glCopyTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCopyTexSubImage1D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glCopyTexImage2D` instead
    ///
    pub const GlCopyTexImage2D = glCopyTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCopyTexImage2D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glCopyTexImage1D` instead
    ///
    pub const GlCopyTexImage1D = glCopyTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCopyTexImage1D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glPolygonOffset` instead
    ///
    pub const GlPolygonOffset = glPolygonOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn glPolygonOffset(self: QOpenGLFunctions_3_1, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### DEPRECATED: Use `glDrawElements` instead
    ///
    pub const GlDrawElements = glDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn glDrawElements(self: QOpenGLFunctions_3_1, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glDrawArrays` instead
    ///
    pub const GlDrawArrays = glDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn glDrawArrays(self: QOpenGLFunctions_3_1, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage3D` instead
    ///
    pub const GlCopyTexSubImage3D = glCopyTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCopyTexSubImage3D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexSubImage3D` instead
    ///
    pub const GlTexSubImage3D = glTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTexSubImage3D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage3D` instead
    ///
    pub const GlTexImage3D = glTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTexImage3D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glDrawRangeElements` instead
    ///
    pub const GlDrawRangeElements = glDrawRangeElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glDrawRangeElements(self: QOpenGLFunctions_3_1, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glBlendEquation` instead
    ///
    pub const GlBlendEquation = glBlendEquation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBlendEquation(self: QOpenGLFunctions_3_1, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glBlendColor` instead
    ///
    pub const GlBlendColor = glBlendColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glBlendColor(self: QOpenGLFunctions_3_1, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glGetCompressedTexImage` instead
    ///
    pub const GlGetCompressedTexImage = glGetCompressedTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn glGetCompressedTexImage(self: QOpenGLFunctions_3_1, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetCompressedTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage1D` instead
    ///
    pub const GlCompressedTexSubImage1D = glCompressedTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCompressedTexSubImage1D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage2D` instead
    ///
    pub const GlCompressedTexSubImage2D = glCompressedTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCompressedTexSubImage2D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage3D` instead
    ///
    pub const GlCompressedTexSubImage3D = glCompressedTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCompressedTexSubImage3D(self: QOpenGLFunctions_3_1, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage1D` instead
    ///
    pub const GlCompressedTexImage1D = glCompressedTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCompressedTexImage1D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage2D` instead
    ///
    pub const GlCompressedTexImage2D = glCompressedTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCompressedTexImage2D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage3D` instead
    ///
    pub const GlCompressedTexImage3D = glCompressedTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCompressedTexImage3D(self: QOpenGLFunctions_3_1, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glSampleCoverage` instead
    ///
    pub const GlSampleCoverage = glSampleCoverage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn glSampleCoverage(self: QOpenGLFunctions_3_1, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_3_1_GlSampleCoverage(@ptrCast(self.ptr), @bitCast(value), @bitCast(invert));
    }

    /// ### DEPRECATED: Use `glActiveTexture` instead
    ///
    pub const GlActiveTexture = glActiveTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glActiveTexture(self: QOpenGLFunctions_3_1, texture: u32) void {
        qtc.QOpenGLFunctions_3_1_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glPointParameteriv` instead
    ///
    pub const GlPointParameteriv = glPointParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glPointParameteriv(self: QOpenGLFunctions_3_1, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameteriv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glPointParameteri` instead
    ///
    pub const GlPointParameteri = glPointParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPointParameteri(self: QOpenGLFunctions_3_1, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPointParameterfv` instead
    ///
    pub const GlPointParameterfv = glPointParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glPointParameterfv(self: QOpenGLFunctions_3_1, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameterfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glPointParameterf` instead
    ///
    pub const GlPointParameterf = glPointParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPointParameterf(self: QOpenGLFunctions_3_1, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_1_GlPointParameterf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glMultiDrawElements` instead
    ///
    pub const GlMultiDrawElements = glMultiDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glMultiDrawElements(self: QOpenGLFunctions_3_1, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlMultiDrawElements(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### DEPRECATED: Use `glMultiDrawArrays` instead
    ///
    pub const GlMultiDrawArrays = glMultiDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn glMultiDrawArrays(self: QOpenGLFunctions_3_1, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlMultiDrawArrays(@ptrCast(self.ptr), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparate` instead
    ///
    pub const GlBlendFuncSeparate = glBlendFuncSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn glBlendFuncSeparate(self: QOpenGLFunctions_3_1, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### DEPRECATED: Use `glGetBufferPointerv` instead
    ///
    pub const GlGetBufferPointerv = glGetBufferPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn glGetBufferPointerv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glGetBufferParameteriv` instead
    ///
    pub const GlGetBufferParameteriv = glGetBufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetBufferParameteriv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUnmapBuffer` instead
    ///
    pub const GlUnmapBuffer = glUnmapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    pub fn glUnmapBuffer(self: QOpenGLFunctions_3_1, target: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glMapBuffer` instead
    ///
    pub const GlMapBuffer = glMapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn glMapBuffer(self: QOpenGLFunctions_3_1, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_1_GlMapBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glGetBufferSubData` instead
    ///
    pub const GlGetBufferSubData = glGetBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn glGetBufferSubData(self: QOpenGLFunctions_3_1, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferSubData` instead
    ///
    pub const GlBufferSubData = glBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn glBufferSubData(self: QOpenGLFunctions_3_1, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferData` instead
    ///
    pub const GlBufferData = glBufferData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn glBufferData(self: QOpenGLFunctions_3_1, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### DEPRECATED: Use `glIsBuffer` instead
    ///
    pub const GlIsBuffer = glIsBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glIsBuffer(self: QOpenGLFunctions_3_1, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glGenBuffers` instead
    ///
    pub const GlGenBuffers = glGenBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn glGenBuffers(self: QOpenGLFunctions_3_1, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteBuffers` instead
    ///
    pub const GlDeleteBuffers = glDeleteBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn glDeleteBuffers(self: QOpenGLFunctions_3_1, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindBuffer` instead
    ///
    pub const GlBindBuffer = glBindBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glBindBuffer(self: QOpenGLFunctions_3_1, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glGetQueryObjectuiv` instead
    ///
    pub const GlGetQueryObjectuiv = glGetQueryObjectuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetQueryObjectuiv(self: QOpenGLFunctions_3_1, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryObjectiv` instead
    ///
    pub const GlGetQueryObjectiv = glGetQueryObjectiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryObjectiv(self: QOpenGLFunctions_3_1, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetQueryObjectiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryiv` instead
    ///
    pub const GlGetQueryiv = glGetQueryiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryiv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glEndQuery` instead
    ///
    pub const GlEndQuery = glEndQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    pub fn glEndQuery(self: QOpenGLFunctions_3_1, target: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glBeginQuery` instead
    ///
    pub const GlBeginQuery = glBeginQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBeginQuery(self: QOpenGLFunctions_3_1, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glIsQuery` instead
    ///
    pub const GlIsQuery = glIsQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsQuery(self: QOpenGLFunctions_3_1, id: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glDeleteQueries` instead
    ///
    pub const GlDeleteQueries = glDeleteQueries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn glDeleteQueries(self: QOpenGLFunctions_3_1, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glGenQueries` instead
    ///
    pub const GlGenQueries = glGenQueries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn glGenQueries(self: QOpenGLFunctions_3_1, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribPointer` instead
    ///
    pub const GlVertexAttribPointer = glVertexAttribPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glVertexAttribPointer(self: QOpenGLFunctions_3_1, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glValidateProgram` instead
    ///
    pub const GlValidateProgram = glValidateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    pub fn glValidateProgram(self: QOpenGLFunctions_3_1, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glUniformMatrix4fv` instead
    ///
    pub const GlUniformMatrix4fv = glUniformMatrix4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3fv` instead
    ///
    pub const GlUniformMatrix3fv = glUniformMatrix3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2fv` instead
    ///
    pub const GlUniformMatrix2fv = glUniformMatrix2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4iv` instead
    ///
    pub const GlUniform4iv = glUniform4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform4iv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3iv` instead
    ///
    pub const GlUniform3iv = glUniform3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform3iv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2iv` instead
    ///
    pub const GlUniform2iv = glUniform2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform2iv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1iv` instead
    ///
    pub const GlUniform1iv = glUniform1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform1iv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4fv` instead
    ///
    pub const GlUniform4fv = glUniform4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform4fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3fv` instead
    ///
    pub const GlUniform3fv = glUniform3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform3fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2fv` instead
    ///
    pub const GlUniform2fv = glUniform2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform2fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1fv` instead
    ///
    pub const GlUniform1fv = glUniform1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform1fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4i` instead
    ///
    pub const GlUniform4i = glUniform4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glUniform4i(self: QOpenGLFunctions_3_1, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3i` instead
    ///
    pub const GlUniform3i = glUniform3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn glUniform3i(self: QOpenGLFunctions_3_1, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2i` instead
    ///
    pub const GlUniform2i = glUniform2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn glUniform2i(self: QOpenGLFunctions_3_1, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1i` instead
    ///
    pub const GlUniform1i = glUniform1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn glUniform1i(self: QOpenGLFunctions_3_1, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUniform4f` instead
    ///
    pub const GlUniform4f = glUniform4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glUniform4f(self: QOpenGLFunctions_3_1, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3f` instead
    ///
    pub const GlUniform3f = glUniform3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn glUniform3f(self: QOpenGLFunctions_3_1, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2f` instead
    ///
    pub const GlUniform2f = glUniform2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn glUniform2f(self: QOpenGLFunctions_3_1, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1f` instead
    ///
    pub const GlUniform1f = glUniform1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn glUniform1f(self: QOpenGLFunctions_3_1, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUseProgram` instead
    ///
    pub const GlUseProgram = glUseProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    pub fn glUseProgram(self: QOpenGLFunctions_3_1, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glShaderSource` instead
    ///
    pub const GlShaderSource = glShaderSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` shader: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` string: []const [:0]const u8 `
    ///
    /// ` length: []const i32 `
    ///
    pub fn glShaderSource(self: QOpenGLFunctions_3_1, allocator: std.mem.Allocator, shader: u32, count: i32, string: []const [:0]const u8, length: []const i32) void {
        const string_chararr = allocator.alloc([*:0]const u8, string.len) catch @panic("QOpenGLFunctions_3_1.glShaderSource: Memory allocation failed");
        defer allocator.free(string_chararr);
        for (string, 0..string.len) |str, i|
            string_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_3_1_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), @ptrCast(string_chararr), length.ptr);
    }

    /// ### DEPRECATED: Use `glLinkProgram` instead
    ///
    pub const GlLinkProgram = glLinkProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    pub fn glLinkProgram(self: QOpenGLFunctions_3_1, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glIsShader` instead
    ///
    pub const GlIsShader = glIsShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glIsShader(self: QOpenGLFunctions_3_1, shader: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glIsProgram` instead
    ///
    pub const GlIsProgram = glIsProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    pub fn glIsProgram(self: QOpenGLFunctions_3_1, program: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribPointerv` instead
    ///
    pub const GlGetVertexAttribPointerv = glGetVertexAttribPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn glGetVertexAttribPointerv(self: QOpenGLFunctions_3_1, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribiv` instead
    ///
    pub const GlGetVertexAttribiv = glGetVertexAttribiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetVertexAttribiv(self: QOpenGLFunctions_3_1, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribfv` instead
    ///
    pub const GlGetVertexAttribfv = glGetVertexAttribfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetVertexAttribfv(self: QOpenGLFunctions_3_1, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribdv` instead
    ///
    pub const GlGetVertexAttribdv = glGetVertexAttribdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetVertexAttribdv(self: QOpenGLFunctions_3_1, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformiv` instead
    ///
    pub const GlGetUniformiv = glGetUniformiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetUniformiv(self: QOpenGLFunctions_3_1, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformfv` instead
    ///
    pub const GlGetUniformfv = glGetUniformfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetUniformfv(self: QOpenGLFunctions_3_1, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformLocation` instead
    ///
    pub const GlGetUniformLocation = glGetUniformLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetUniformLocation(self: QOpenGLFunctions_3_1, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_1_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderSource` instead
    ///
    pub const GlGetShaderSource = glGetShaderSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn glGetShaderSource(self: QOpenGLFunctions_3_1, shader: u32, bufSize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_3_1_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderInfoLog` instead
    ///
    pub const GlGetShaderInfoLog = glGetShaderInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetShaderInfoLog(self: QOpenGLFunctions_3_1, shader: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_3_1_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderiv` instead
    ///
    pub const GlGetShaderiv = glGetShaderiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetShaderiv(self: QOpenGLFunctions_3_1, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramInfoLog` instead
    ///
    pub const GlGetProgramInfoLog = glGetProgramInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetProgramInfoLog(self: QOpenGLFunctions_3_1, program: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_3_1_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramiv` instead
    ///
    pub const GlGetProgramiv = glGetProgramiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetProgramiv(self: QOpenGLFunctions_3_1, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetAttribLocation` instead
    ///
    pub const GlGetAttribLocation = glGetAttribLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetAttribLocation(self: QOpenGLFunctions_3_1, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_1_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetAttachedShaders` instead
    ///
    pub const GlGetAttachedShaders = glGetAttachedShaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` maxCount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` obj: []u32 `
    ///
    pub fn glGetAttachedShaders(self: QOpenGLFunctions_3_1, program: u32, maxCount: i32, count: []i32, obj: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### DEPRECATED: Use `glEnableVertexAttribArray` instead
    ///
    pub const GlEnableVertexAttribArray = glEnableVertexAttribArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    pub fn glEnableVertexAttribArray(self: QOpenGLFunctions_3_1, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisableVertexAttribArray` instead
    ///
    pub const GlDisableVertexAttribArray = glDisableVertexAttribArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    pub fn glDisableVertexAttribArray(self: QOpenGLFunctions_3_1, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDetachShader` instead
    ///
    pub const GlDetachShader = glDetachShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glDetachShader(self: QOpenGLFunctions_3_1, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDeleteShader` instead
    ///
    pub const GlDeleteShader = glDeleteShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glDeleteShader(self: QOpenGLFunctions_3_1, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDeleteProgram` instead
    ///
    pub const GlDeleteProgram = glDeleteProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    pub fn glDeleteProgram(self: QOpenGLFunctions_3_1, program: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glCreateShader` instead
    ///
    pub const GlCreateShader = glCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn glCreateShader(self: QOpenGLFunctions_3_1, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_3_1_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glCreateProgram` instead
    ///
    pub const GlCreateProgram = glCreateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn glCreateProgram(self: QOpenGLFunctions_3_1) u32 {
        return qtc.QOpenGLFunctions_3_1_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glCompileShader` instead
    ///
    pub const GlCompileShader = glCompileShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glCompileShader(self: QOpenGLFunctions_3_1, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glBindAttribLocation` instead
    ///
    pub const GlBindAttribLocation = glBindAttribLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindAttribLocation(self: QOpenGLFunctions_3_1, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_3_1_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### DEPRECATED: Use `glAttachShader` instead
    ///
    pub const GlAttachShader = glAttachShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glAttachShader(self: QOpenGLFunctions_3_1, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_1_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glStencilMaskSeparate` instead
    ///
    pub const GlStencilMaskSeparate = glStencilMaskSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMaskSeparate(self: QOpenGLFunctions_3_1, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilFuncSeparate` instead
    ///
    pub const GlStencilFuncSeparate = glStencilFuncSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFuncSeparate(self: QOpenGLFunctions_3_1, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilOpSeparate` instead
    ///
    pub const GlStencilOpSeparate = glStencilOpSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` face: u32 `
    ///
    /// ` sfail: u32 `
    ///
    /// ` dpfail: u32 `
    ///
    /// ` dppass: u32 `
    ///
    pub fn glStencilOpSeparate(self: QOpenGLFunctions_3_1, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_3_1_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparate` instead
    ///
    pub const GlBlendEquationSeparate = glBlendEquationSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn glBlendEquationSeparate(self: QOpenGLFunctions_3_1, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x3fv` instead
    ///
    pub const GlUniformMatrix4x3fv = glUniformMatrix4x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4x3fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x4fv` instead
    ///
    pub const GlUniformMatrix3x4fv = glUniformMatrix3x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3x4fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x2fv` instead
    ///
    pub const GlUniformMatrix4x2fv = glUniformMatrix4x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4x2fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x4fv` instead
    ///
    pub const GlUniformMatrix2x4fv = glUniformMatrix2x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2x4fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x2fv` instead
    ///
    pub const GlUniformMatrix3x2fv = glUniformMatrix3x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3x2fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x3fv` instead
    ///
    pub const GlUniformMatrix2x3fv = glUniformMatrix2x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2x3fv(self: QOpenGLFunctions_3_1, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glIsVertexArray` instead
    ///
    pub const GlIsVertexArray = glIsVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` array: u32 `
    ///
    pub fn glIsVertexArray(self: QOpenGLFunctions_3_1, array: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glGenVertexArrays` instead
    ///
    pub const GlGenVertexArrays = glGenVertexArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn glGenVertexArrays(self: QOpenGLFunctions_3_1, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteVertexArrays` instead
    ///
    pub const GlDeleteVertexArrays = glDeleteVertexArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn glDeleteVertexArrays(self: QOpenGLFunctions_3_1, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glBindVertexArray` instead
    ///
    pub const GlBindVertexArray = glBindVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` array: u32 `
    ///
    pub fn glBindVertexArray(self: QOpenGLFunctions_3_1, array: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glFlushMappedBufferRange` instead
    ///
    pub const GlFlushMappedBufferRange = glFlushMappedBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn glFlushMappedBufferRange(self: QOpenGLFunctions_3_1, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_3_1_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glMapBufferRange` instead
    ///
    pub const GlMapBufferRange = glMapBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn glMapBufferRange(self: QOpenGLFunctions_3_1, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_1_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glFramebufferTextureLayer` instead
    ///
    pub const GlFramebufferTextureLayer = glFramebufferTextureLayer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glFramebufferTextureLayer(self: QOpenGLFunctions_3_1, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### DEPRECATED: Use `glRenderbufferStorageMultisample` instead
    ///
    pub const GlRenderbufferStorageMultisample = glRenderbufferStorageMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glRenderbufferStorageMultisample(self: QOpenGLFunctions_3_1, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glBlitFramebuffer` instead
    ///
    pub const GlBlitFramebuffer = glBlitFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glBlitFramebuffer(self: QOpenGLFunctions_3_1, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `glGenerateMipmap` instead
    ///
    pub const GlGenerateMipmap = glGenerateMipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    pub fn glGenerateMipmap(self: QOpenGLFunctions_3_1, target: u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetFramebufferAttachmentParameteriv` instead
    ///
    pub const GlGetFramebufferAttachmentParameteriv = glGetFramebufferAttachmentParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetFramebufferAttachmentParameteriv(self: QOpenGLFunctions_3_1, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFramebufferRenderbuffer` instead
    ///
    pub const GlFramebufferRenderbuffer = glFramebufferRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glFramebufferRenderbuffer(self: QOpenGLFunctions_3_1, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture3D` instead
    ///
    pub const GlFramebufferTexture3D = glFramebufferTexture3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glFramebufferTexture3D(self: QOpenGLFunctions_3_1, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTexture3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture2D` instead
    ///
    pub const GlFramebufferTexture2D = glFramebufferTexture2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glFramebufferTexture2D(self: QOpenGLFunctions_3_1, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture1D` instead
    ///
    pub const GlFramebufferTexture1D = glFramebufferTexture1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glFramebufferTexture1D(self: QOpenGLFunctions_3_1, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_1_GlFramebufferTexture1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glGenFramebuffers` instead
    ///
    pub const GlGenFramebuffers = glGenFramebuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn glGenFramebuffers(self: QOpenGLFunctions_3_1, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteFramebuffers` instead
    ///
    pub const GlDeleteFramebuffers = glDeleteFramebuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn glDeleteFramebuffers(self: QOpenGLFunctions_3_1, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindFramebuffer` instead
    ///
    pub const GlBindFramebuffer = glBindFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn glBindFramebuffer(self: QOpenGLFunctions_3_1, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glIsFramebuffer` instead
    ///
    pub const GlIsFramebuffer = glIsFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn glIsFramebuffer(self: QOpenGLFunctions_3_1, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glGetRenderbufferParameteriv` instead
    ///
    pub const GlGetRenderbufferParameteriv = glGetRenderbufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetRenderbufferParameteriv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glRenderbufferStorage` instead
    ///
    pub const GlRenderbufferStorage = glRenderbufferStorage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glRenderbufferStorage(self: QOpenGLFunctions_3_1, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_1_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glGenRenderbuffers` instead
    ///
    pub const GlGenRenderbuffers = glGenRenderbuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn glGenRenderbuffers(self: QOpenGLFunctions_3_1, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteRenderbuffers` instead
    ///
    pub const GlDeleteRenderbuffers = glDeleteRenderbuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn glDeleteRenderbuffers(self: QOpenGLFunctions_3_1, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindRenderbuffer` instead
    ///
    pub const GlBindRenderbuffer = glBindRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glBindRenderbuffer(self: QOpenGLFunctions_3_1, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glIsRenderbuffer` instead
    ///
    pub const GlIsRenderbuffer = glIsRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glIsRenderbuffer(self: QOpenGLFunctions_3_1, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glGetStringi` instead
    ///
    pub const GlGetStringi = glGetStringi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glGetStringi(self: QOpenGLFunctions_3_1, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_3_1_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glClearBufferfi` instead
    ///
    pub const GlClearBufferfi = glClearBufferfi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn glClearBufferfi(self: QOpenGLFunctions_3_1, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### DEPRECATED: Use `glClearBufferfv` instead
    ///
    pub const GlClearBufferfv = glClearBufferfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glClearBufferfv(self: QOpenGLFunctions_3_1, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferuiv` instead
    ///
    pub const GlClearBufferuiv = glClearBufferuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glClearBufferuiv(self: QOpenGLFunctions_3_1, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferiv` instead
    ///
    pub const GlClearBufferiv = glClearBufferiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glClearBufferiv(self: QOpenGLFunctions_3_1, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIuiv` instead
    ///
    pub const GlGetTexParameterIuiv = glGetTexParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetTexParameterIuiv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIiv` instead
    ///
    pub const GlGetTexParameterIiv = glGetTexParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameterIiv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIuiv` instead
    ///
    pub const GlTexParameterIuiv = glTexParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn glTexParameterIuiv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIiv` instead
    ///
    pub const GlTexParameterIiv = glTexParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameterIiv(self: QOpenGLFunctions_3_1, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_1_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4uiv` instead
    ///
    pub const GlUniform4uiv = glUniform4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform4uiv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3uiv` instead
    ///
    pub const GlUniform3uiv = glUniform3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform3uiv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2uiv` instead
    ///
    pub const GlUniform2uiv = glUniform2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform2uiv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1uiv` instead
    ///
    pub const GlUniform1uiv = glUniform1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform1uiv(self: QOpenGLFunctions_3_1, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4ui` instead
    ///
    pub const GlUniform4ui = glUniform4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glUniform4ui(self: QOpenGLFunctions_3_1, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3ui` instead
    ///
    pub const GlUniform3ui = glUniform3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn glUniform3ui(self: QOpenGLFunctions_3_1, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2ui` instead
    ///
    pub const GlUniform2ui = glUniform2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn glUniform2ui(self: QOpenGLFunctions_3_1, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1ui` instead
    ///
    pub const GlUniform1ui = glUniform1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn glUniform1ui(self: QOpenGLFunctions_3_1, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glGetFragDataLocation` instead
    ///
    pub const GlGetFragDataLocation = glGetFragDataLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetFragDataLocation(self: QOpenGLFunctions_3_1, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_1_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glBindFragDataLocation` instead
    ///
    pub const GlBindFragDataLocation = glBindFragDataLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindFragDataLocation(self: QOpenGLFunctions_3_1, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_3_1_GlBindFragDataLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetUniformuiv` instead
    ///
    pub const GlGetUniformuiv = glGetUniformuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetUniformuiv(self: QOpenGLFunctions_3_1, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIuiv` instead
    ///
    pub const GlGetVertexAttribIuiv = glGetVertexAttribIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetVertexAttribIuiv(self: QOpenGLFunctions_3_1, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIiv` instead
    ///
    pub const GlGetVertexAttribIiv = glGetVertexAttribIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetVertexAttribIiv(self: QOpenGLFunctions_3_1, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribIPointer` instead
    ///
    pub const GlVertexAttribIPointer = glVertexAttribIPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glVertexAttribIPointer(self: QOpenGLFunctions_3_1, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_1_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glEndConditionalRender` instead
    ///
    pub const GlEndConditionalRender = glEndConditionalRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn glEndConditionalRender(self: QOpenGLFunctions_3_1) void {
        qtc.QOpenGLFunctions_3_1_GlEndConditionalRender(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBeginConditionalRender` instead
    ///
    pub const GlBeginConditionalRender = glBeginConditionalRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBeginConditionalRender(self: QOpenGLFunctions_3_1, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBeginConditionalRender(@ptrCast(self.ptr), @bitCast(id), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glClampColor` instead
    ///
    pub const GlClampColor = glClampColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn glClampColor(self: QOpenGLFunctions_3_1, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_3_1_GlClampColor(@ptrCast(self.ptr), @bitCast(target), @bitCast(clamp));
    }

    /// ### DEPRECATED: Use `glTransformFeedbackVaryings` instead
    ///
    pub const GlTransformFeedbackVaryings = glTransformFeedbackVaryings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glTransformFeedbackVaryings(self: QOpenGLFunctions_3_1, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*:0]const u8, varyings.len) catch @panic("QOpenGLFunctions_3_1.glTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_3_1_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), @ptrCast(varyings_chararr), @bitCast(bufferMode));
    }

    /// ### DEPRECATED: Use `glBindBufferBase` instead
    ///
    pub const GlBindBufferBase = glBindBufferBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glBindBufferBase(self: QOpenGLFunctions_3_1, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glBindBufferRange` instead
    ///
    pub const GlBindBufferRange = glBindBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glBindBufferRange(self: QOpenGLFunctions_3_1, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_3_1_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glEndTransformFeedback` instead
    ///
    pub const GlEndTransformFeedback = glEndTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn glEndTransformFeedback(self: QOpenGLFunctions_3_1) void {
        qtc.QOpenGLFunctions_3_1_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBeginTransformFeedback` instead
    ///
    pub const GlBeginTransformFeedback = glBeginTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn glBeginTransformFeedback(self: QOpenGLFunctions_3_1, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_3_1_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### DEPRECATED: Use `glIsEnabledi` instead
    ///
    pub const GlIsEnabledi = glIsEnabledi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glIsEnabledi(self: QOpenGLFunctions_3_1, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_3_1_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisablei` instead
    ///
    pub const GlDisablei = glDisablei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glDisablei(self: QOpenGLFunctions_3_1, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glEnablei` instead
    ///
    pub const GlEnablei = glEnablei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glEnablei(self: QOpenGLFunctions_3_1, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glGetIntegeriV` instead
    ///
    pub const GlGetIntegeriV = glGetIntegeriV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn glGetIntegeriV(self: QOpenGLFunctions_3_1, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleaniV` instead
    ///
    pub const GlGetBooleaniV = glGetBooleaniV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn glGetBooleaniV(self: QOpenGLFunctions_3_1, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_3_1_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glColorMaski` instead
    ///
    pub const GlColorMaski = glColorMaski;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glColorMaski(self: QOpenGLFunctions_3_1, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_3_1_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `glCopyBufferSubData` instead
    ///
    pub const GlCopyBufferSubData = glCopyBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glCopyBufferSubData(self: QOpenGLFunctions_3_1, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLFunctions_3_1_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glUniformBlockBinding` instead
    ///
    pub const GlUniformBlockBinding = glUniformBlockBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn glUniformBlockBinding(self: QOpenGLFunctions_3_1, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_3_1_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockName` instead
    ///
    pub const GlGetActiveUniformBlockName = glGetActiveUniformBlockName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glGetActiveUniformBlockName(self: QOpenGLFunctions_3_1, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockiv` instead
    ///
    pub const GlGetActiveUniformBlockiv = glGetActiveUniformBlockiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetActiveUniformBlockiv(self: QOpenGLFunctions_3_1, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformBlockIndex` instead
    ///
    pub const GlGetUniformBlockIndex = glGetUniformBlockIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn glGetUniformBlockIndex(self: QOpenGLFunctions_3_1, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_3_1_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformName` instead
    ///
    pub const GlGetActiveUniformName = glGetActiveUniformName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glGetActiveUniformName(self: QOpenGLFunctions_3_1, program: u32, uniformIndex: u32, bufSize: i32, length: []i32, uniformName: [:0]u8) void {
        const uniformName_Cstring = uniformName.ptr;
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformIndex), @bitCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformsiv` instead
    ///
    pub const GlGetActiveUniformsiv = glGetActiveUniformsiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glGetActiveUniformsiv(self: QOpenGLFunctions_3_1, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_1_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformIndices` instead
    ///
    pub const GlGetUniformIndices = glGetUniformIndices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glGetUniformIndices(self: QOpenGLFunctions_3_1, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*:0]const u8, uniformNames.len) catch @panic("QOpenGLFunctions_3_1.glGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_3_1_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), @ptrCast(uniformNames_chararr), uniformIndices.ptr);
    }

    /// ### DEPRECATED: Use `glPrimitiveRestartIndex` instead
    ///
    pub const GlPrimitiveRestartIndex = glPrimitiveRestartIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` index: u32 `
    ///
    pub fn glPrimitiveRestartIndex(self: QOpenGLFunctions_3_1, index: u32) void {
        qtc.QOpenGLFunctions_3_1_GlPrimitiveRestartIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glTexBuffer` instead
    ///
    pub const GlTexBuffer = glTexBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glTexBuffer(self: QOpenGLFunctions_3_1, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_1_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstanced` instead
    ///
    pub const GlDrawElementsInstanced = glDrawElementsInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
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
    pub fn glDrawElementsInstanced(self: QOpenGLFunctions_3_1, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawArraysInstanced` instead
    ///
    pub const GlDrawArraysInstanced = glDrawArraysInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawArraysInstanced(self: QOpenGLFunctions_3_1, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_3_1_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
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
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn isInitialized(self: QOpenGLFunctions_3_1) bool {
        return qtc.QOpenGLFunctions_3_1_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn superIsInitialized(self: QOpenGLFunctions_3_1) bool {
        return qtc.QOpenGLFunctions_3_1_SuperIsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_3_1`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: QOpenGLFunctions_3_1, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_1_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn setOwningContext(self: QOpenGLFunctions_3_1, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_3_1_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn superSetOwningContext(self: QOpenGLFunctions_3_1, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_3_1_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_3_1`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_3_1, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn onSetOwningContext(self: QOpenGLFunctions_3_1, callback: *const fn (QOpenGLFunctions_3_1, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_3_1_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn owningContext(self: QOpenGLFunctions_3_1) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_3_1_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn superOwningContext(self: QOpenGLFunctions_3_1) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_3_1_SuperOwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_3_1`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn onOwningContext(self: QOpenGLFunctions_3_1, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_3_1_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#dtor.QOpenGLFunctions_3_1)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_3_1 `
    ///
    pub fn delete(self: QOpenGLFunctions_3_1) void {
        qtc.QOpenGLFunctions_3_1_Delete(@ptrCast(self.ptr));
    }
};
