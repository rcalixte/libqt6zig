const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html)
pub const QOpenGLFunctions_4_2_Core = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_2_Core,

    pub const _is_QOpenGLFunctions_4_2_Core = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFunctions_4_2_Core object in C++ memory
    ///
    pub fn new() QOpenGLFunctions_4_2_Core {
        return .{ .ptr = qtc.QOpenGLFunctions_4_2_Core_new() };
    }

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn initializeOpenGLFunctions(self: QOpenGLFunctions_4_2_Core) bool {
        return qtc.QOpenGLFunctions_4_2_Core_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeOpenGLFunctions` instead
    ///
    pub const OnInitializeOpenGLFunctions = onInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onInitializeOpenGLFunctions(self: QOpenGLFunctions_4_2_Core, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_2_Core_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeOpenGLFunctions` instead
    ///
    pub const SuperInitializeOpenGLFunctions = superInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn superInitializeOpenGLFunctions(self: QOpenGLFunctions_4_2_Core) bool {
        return qtc.QOpenGLFunctions_4_2_Core_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glViewport` instead
    ///
    pub const GlViewport = glViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glViewport(self: QOpenGLFunctions_4_2_Core, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glDepthRange` instead
    ///
    pub const GlDepthRange = glDepthRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn glDepthRange(self: QOpenGLFunctions_4_2_Core, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### DEPRECATED: Use `glIsEnabled` instead
    ///
    pub const GlIsEnabled = glIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn glIsEnabled(self: QOpenGLFunctions_4_2_Core, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameteriv` instead
    ///
    pub const GlGetTexLevelParameteriv = glGetTexLevelParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexLevelParameteriv(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameterfv` instead
    ///
    pub const GlGetTexLevelParameterfv = glGetTexLevelParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexLevelParameterfv(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameteriv` instead
    ///
    pub const GlGetTexParameteriv = glGetTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameteriv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterfv` instead
    ///
    pub const GlGetTexParameterfv = glGetTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexParameterfv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexImage` instead
    ///
    pub const GlGetTexImage = glGetTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetTexImage(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glGetString` instead
    ///
    pub const GlGetString = glGetString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` name: u32 `
    ///
    pub fn glGetString(self: QOpenGLFunctions_4_2_Core, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_2_Core_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glGetIntegerv` instead
    ///
    pub const GlGetIntegerv = glGetIntegerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetIntegerv(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatv` instead
    ///
    pub const GlGetFloatv = glGetFloatv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetFloatv(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetDoublev` instead
    ///
    pub const GlGetDoublev = glGetDoublev;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetDoublev(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleanv` instead
    ///
    pub const GlGetBooleanv = glGetBooleanv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn glGetBooleanv(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glReadPixels` instead
    ///
    pub const GlReadPixels = glReadPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glReadPixels(self: QOpenGLFunctions_4_2_Core, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glReadBuffer` instead
    ///
    pub const GlReadBuffer = glReadBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn glReadBuffer(self: QOpenGLFunctions_4_2_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPixelStorei` instead
    ///
    pub const GlPixelStorei = glPixelStorei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelStorei(self: QOpenGLFunctions_4_2_Core, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelStoref` instead
    ///
    pub const GlPixelStoref = glPixelStoref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelStoref(self: QOpenGLFunctions_4_2_Core, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glDepthFunc` instead
    ///
    pub const GlDepthFunc = glDepthFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` func: u32 `
    ///
    pub fn glDepthFunc(self: QOpenGLFunctions_4_2_Core, func: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### DEPRECATED: Use `glStencilOp` instead
    ///
    pub const GlStencilOp = glStencilOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn glStencilOp(self: QOpenGLFunctions_4_2_Core, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glStencilFunc` instead
    ///
    pub const GlStencilFunc = glStencilFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFunc(self: QOpenGLFunctions_4_2_Core, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glLogicOp` instead
    ///
    pub const GlLogicOp = glLogicOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` opcode: u32 `
    ///
    pub fn glLogicOp(self: QOpenGLFunctions_4_2_Core, opcode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### DEPRECATED: Use `glBlendFunc` instead
    ///
    pub const GlBlendFunc = glBlendFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn glBlendFunc(self: QOpenGLFunctions_4_2_Core, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### DEPRECATED: Use `glFlush` instead
    ///
    pub const GlFlush = glFlush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glFlush(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFlush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFinish` instead
    ///
    pub const GlFinish = glFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glFinish(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEnable` instead
    ///
    pub const GlEnable = glEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn glEnable(self: QOpenGLFunctions_4_2_Core, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDisable` instead
    ///
    pub const GlDisable = glDisable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` cap: u32 `
    ///
    pub fn glDisable(self: QOpenGLFunctions_4_2_Core, cap: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDepthMask` instead
    ///
    pub const GlDepthMask = glDepthMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` flag: u8 `
    ///
    pub fn glDepthMask(self: QOpenGLFunctions_4_2_Core, flag: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColorMask` instead
    ///
    pub const GlColorMask = glColorMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColorMask(self: QOpenGLFunctions_4_2_Core, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glStencilMask` instead
    ///
    pub const GlStencilMask = glStencilMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMask(self: QOpenGLFunctions_4_2_Core, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearDepth` instead
    ///
    pub const GlClearDepth = glClearDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` depth: f64 `
    ///
    pub fn glClearDepth(self: QOpenGLFunctions_4_2_Core, depth: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glClearStencil` instead
    ///
    pub const GlClearStencil = glClearStencil;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` s: i32 `
    ///
    pub fn glClearStencil(self: QOpenGLFunctions_4_2_Core, s: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glClearColor` instead
    ///
    pub const GlClearColor = glClearColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearColor(self: QOpenGLFunctions_4_2_Core, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glClear` instead
    ///
    pub const GlClear = glClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mask: u32 `
    ///
    pub fn glClear(self: QOpenGLFunctions_4_2_Core, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glDrawBuffer` instead
    ///
    pub const GlDrawBuffer = glDrawBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn glDrawBuffer(self: QOpenGLFunctions_4_2_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glTexImage2D` instead
    ///
    pub const GlTexImage2D = glTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexImage2D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage1D` instead
    ///
    pub const GlTexImage1D = glTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexImage1D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexParameteriv` instead
    ///
    pub const GlTexParameteriv = glTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameteriv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameteri` instead
    ///
    pub const GlTexParameteri = glTexParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexParameteri(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameterfv` instead
    ///
    pub const GlTexParameterfv = glTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexParameterfv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterf` instead
    ///
    pub const GlTexParameterf = glTexParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexParameterf(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glScissor` instead
    ///
    pub const GlScissor = glScissor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glScissor(self: QOpenGLFunctions_4_2_Core, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glPolygonMode` instead
    ///
    pub const GlPolygonMode = glPolygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glPolygonMode(self: QOpenGLFunctions_4_2_Core, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPointSize` instead
    ///
    pub const GlPointSize = glPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` size: f32 `
    ///
    pub fn glPointSize(self: QOpenGLFunctions_4_2_Core, size: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glLineWidth` instead
    ///
    pub const GlLineWidth = glLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` width: f32 `
    ///
    pub fn glLineWidth(self: QOpenGLFunctions_4_2_Core, width: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glHint` instead
    ///
    pub const GlHint = glHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glHint(self: QOpenGLFunctions_4_2_Core, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glFrontFace` instead
    ///
    pub const GlFrontFace = glFrontFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn glFrontFace(self: QOpenGLFunctions_4_2_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glCullFace` instead
    ///
    pub const GlCullFace = glCullFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn glCullFace(self: QOpenGLFunctions_4_2_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glIsTexture` instead
    ///
    pub const GlIsTexture = glIsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn glIsTexture(self: QOpenGLFunctions_4_2_Core, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glGenTextures` instead
    ///
    pub const GlGenTextures = glGenTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn glGenTextures(self: QOpenGLFunctions_4_2_Core, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteTextures` instead
    ///
    pub const GlDeleteTextures = glDeleteTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn glDeleteTextures(self: QOpenGLFunctions_4_2_Core, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glBindTexture` instead
    ///
    pub const GlBindTexture = glBindTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glBindTexture(self: QOpenGLFunctions_4_2_Core, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glTexSubImage2D` instead
    ///
    pub const GlTexSubImage2D = glTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexSubImage2D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexSubImage1D` instead
    ///
    pub const GlTexSubImage1D = glTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexSubImage1D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage2D` instead
    ///
    pub const GlCopyTexSubImage2D = glCopyTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCopyTexSubImage2D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage1D` instead
    ///
    pub const GlCopyTexSubImage1D = glCopyTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCopyTexSubImage1D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glCopyTexImage2D` instead
    ///
    pub const GlCopyTexImage2D = glCopyTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCopyTexImage2D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glCopyTexImage1D` instead
    ///
    pub const GlCopyTexImage1D = glCopyTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCopyTexImage1D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glPolygonOffset` instead
    ///
    pub const GlPolygonOffset = glPolygonOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn glPolygonOffset(self: QOpenGLFunctions_4_2_Core, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### DEPRECATED: Use `glDrawElements` instead
    ///
    pub const GlDrawElements = glDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn glDrawElements(self: QOpenGLFunctions_4_2_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glDrawArrays` instead
    ///
    pub const GlDrawArrays = glDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn glDrawArrays(self: QOpenGLFunctions_4_2_Core, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage3D` instead
    ///
    pub const GlCopyTexSubImage3D = glCopyTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCopyTexSubImage3D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexSubImage3D` instead
    ///
    pub const GlTexSubImage3D = glTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexSubImage3D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage3D` instead
    ///
    pub const GlTexImage3D = glTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexImage3D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glDrawRangeElements` instead
    ///
    pub const GlDrawRangeElements = glDrawRangeElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawRangeElements(self: QOpenGLFunctions_4_2_Core, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glBlendEquation` instead
    ///
    pub const GlBlendEquation = glBlendEquation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBlendEquation(self: QOpenGLFunctions_4_2_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glBlendColor` instead
    ///
    pub const GlBlendColor = glBlendColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glBlendColor(self: QOpenGLFunctions_4_2_Core, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glGetCompressedTexImage` instead
    ///
    pub const GlGetCompressedTexImage = glGetCompressedTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn glGetCompressedTexImage(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetCompressedTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage1D` instead
    ///
    pub const GlCompressedTexSubImage1D = glCompressedTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCompressedTexSubImage1D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage2D` instead
    ///
    pub const GlCompressedTexSubImage2D = glCompressedTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCompressedTexSubImage2D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage3D` instead
    ///
    pub const GlCompressedTexSubImage3D = glCompressedTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCompressedTexSubImage3D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage1D` instead
    ///
    pub const GlCompressedTexImage1D = glCompressedTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCompressedTexImage1D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage2D` instead
    ///
    pub const GlCompressedTexImage2D = glCompressedTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCompressedTexImage2D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage3D` instead
    ///
    pub const GlCompressedTexImage3D = glCompressedTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCompressedTexImage3D(self: QOpenGLFunctions_4_2_Core, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glSampleCoverage` instead
    ///
    pub const GlSampleCoverage = glSampleCoverage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn glSampleCoverage(self: QOpenGLFunctions_4_2_Core, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSampleCoverage(@ptrCast(self.ptr), @bitCast(value), @bitCast(invert));
    }

    /// ### DEPRECATED: Use `glActiveTexture` instead
    ///
    pub const GlActiveTexture = glActiveTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` texture: u32 `
    ///
    pub fn glActiveTexture(self: QOpenGLFunctions_4_2_Core, texture: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glPointParameteriv` instead
    ///
    pub const GlPointParameteriv = glPointParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glPointParameteriv(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameteriv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glPointParameteri` instead
    ///
    pub const GlPointParameteri = glPointParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPointParameteri(self: QOpenGLFunctions_4_2_Core, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPointParameterfv` instead
    ///
    pub const GlPointParameterfv = glPointParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glPointParameterfv(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameterfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glPointParameterf` instead
    ///
    pub const GlPointParameterf = glPointParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPointParameterf(self: QOpenGLFunctions_4_2_Core, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPointParameterf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glMultiDrawElements` instead
    ///
    pub const GlMultiDrawElements = glMultiDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glMultiDrawElements(self: QOpenGLFunctions_4_2_Core, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawElements(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### DEPRECATED: Use `glMultiDrawArrays` instead
    ///
    pub const GlMultiDrawArrays = glMultiDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn glMultiDrawArrays(self: QOpenGLFunctions_4_2_Core, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawArrays(@ptrCast(self.ptr), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparate` instead
    ///
    pub const GlBlendFuncSeparate = glBlendFuncSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn glBlendFuncSeparate(self: QOpenGLFunctions_4_2_Core, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### DEPRECATED: Use `glGetBufferPointerv` instead
    ///
    pub const GlGetBufferPointerv = glGetBufferPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn glGetBufferPointerv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glGetBufferParameteriv` instead
    ///
    pub const GlGetBufferParameteriv = glGetBufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetBufferParameteriv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUnmapBuffer` instead
    ///
    pub const GlUnmapBuffer = glUnmapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn glUnmapBuffer(self: QOpenGLFunctions_4_2_Core, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glMapBuffer` instead
    ///
    pub const GlMapBuffer = glMapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn glMapBuffer(self: QOpenGLFunctions_4_2_Core, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Core_GlMapBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glGetBufferSubData` instead
    ///
    pub const GlGetBufferSubData = glGetBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn glGetBufferSubData(self: QOpenGLFunctions_4_2_Core, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferSubData` instead
    ///
    pub const GlBufferSubData = glBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn glBufferSubData(self: QOpenGLFunctions_4_2_Core, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferData` instead
    ///
    pub const GlBufferData = glBufferData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn glBufferData(self: QOpenGLFunctions_4_2_Core, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### DEPRECATED: Use `glIsBuffer` instead
    ///
    pub const GlIsBuffer = glIsBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glIsBuffer(self: QOpenGLFunctions_4_2_Core, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glGenBuffers` instead
    ///
    pub const GlGenBuffers = glGenBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn glGenBuffers(self: QOpenGLFunctions_4_2_Core, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteBuffers` instead
    ///
    pub const GlDeleteBuffers = glDeleteBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn glDeleteBuffers(self: QOpenGLFunctions_4_2_Core, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindBuffer` instead
    ///
    pub const GlBindBuffer = glBindBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glBindBuffer(self: QOpenGLFunctions_4_2_Core, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glGetQueryObjectuiv` instead
    ///
    pub const GlGetQueryObjectuiv = glGetQueryObjectuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetQueryObjectuiv(self: QOpenGLFunctions_4_2_Core, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryObjectiv` instead
    ///
    pub const GlGetQueryObjectiv = glGetQueryObjectiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryObjectiv(self: QOpenGLFunctions_4_2_Core, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryiv` instead
    ///
    pub const GlGetQueryiv = glGetQueryiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryiv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glEndQuery` instead
    ///
    pub const GlEndQuery = glEndQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn glEndQuery(self: QOpenGLFunctions_4_2_Core, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glBeginQuery` instead
    ///
    pub const GlBeginQuery = glBeginQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBeginQuery(self: QOpenGLFunctions_4_2_Core, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glIsQuery` instead
    ///
    pub const GlIsQuery = glIsQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsQuery(self: QOpenGLFunctions_4_2_Core, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glDeleteQueries` instead
    ///
    pub const GlDeleteQueries = glDeleteQueries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn glDeleteQueries(self: QOpenGLFunctions_4_2_Core, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glGenQueries` instead
    ///
    pub const GlGenQueries = glGenQueries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn glGenQueries(self: QOpenGLFunctions_4_2_Core, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribPointer` instead
    ///
    pub const GlVertexAttribPointer = glVertexAttribPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glVertexAttribPointer(self: QOpenGLFunctions_4_2_Core, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glValidateProgram` instead
    ///
    pub const GlValidateProgram = glValidateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn glValidateProgram(self: QOpenGLFunctions_4_2_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glUniformMatrix4fv` instead
    ///
    pub const GlUniformMatrix4fv = glUniformMatrix4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3fv` instead
    ///
    pub const GlUniformMatrix3fv = glUniformMatrix3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2fv` instead
    ///
    pub const GlUniformMatrix2fv = glUniformMatrix2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4iv` instead
    ///
    pub const GlUniform4iv = glUniform4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform4iv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3iv` instead
    ///
    pub const GlUniform3iv = glUniform3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform3iv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2iv` instead
    ///
    pub const GlUniform2iv = glUniform2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform2iv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1iv` instead
    ///
    pub const GlUniform1iv = glUniform1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform1iv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4fv` instead
    ///
    pub const GlUniform4fv = glUniform4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform4fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3fv` instead
    ///
    pub const GlUniform3fv = glUniform3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform3fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2fv` instead
    ///
    pub const GlUniform2fv = glUniform2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform2fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1fv` instead
    ///
    pub const GlUniform1fv = glUniform1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform1fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4i` instead
    ///
    pub const GlUniform4i = glUniform4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glUniform4i(self: QOpenGLFunctions_4_2_Core, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3i` instead
    ///
    pub const GlUniform3i = glUniform3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn glUniform3i(self: QOpenGLFunctions_4_2_Core, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2i` instead
    ///
    pub const GlUniform2i = glUniform2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn glUniform2i(self: QOpenGLFunctions_4_2_Core, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1i` instead
    ///
    pub const GlUniform1i = glUniform1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn glUniform1i(self: QOpenGLFunctions_4_2_Core, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUniform4f` instead
    ///
    pub const GlUniform4f = glUniform4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glUniform4f(self: QOpenGLFunctions_4_2_Core, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3f` instead
    ///
    pub const GlUniform3f = glUniform3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn glUniform3f(self: QOpenGLFunctions_4_2_Core, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2f` instead
    ///
    pub const GlUniform2f = glUniform2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn glUniform2f(self: QOpenGLFunctions_4_2_Core, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1f` instead
    ///
    pub const GlUniform1f = glUniform1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn glUniform1f(self: QOpenGLFunctions_4_2_Core, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUseProgram` instead
    ///
    pub const GlUseProgram = glUseProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn glUseProgram(self: QOpenGLFunctions_4_2_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glShaderSource` instead
    ///
    pub const GlShaderSource = glShaderSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glShaderSource(self: QOpenGLFunctions_4_2_Core, allocator: std.mem.Allocator, shader: u32, count: i32, string: []const [:0]const u8, length: []const i32) void {
        const string_chararr = allocator.alloc([*:0]const u8, string.len) catch @panic("QOpenGLFunctions_4_2_Core.glShaderSource: Memory allocation failed");
        defer allocator.free(string_chararr);
        for (string, 0..string.len) |str, i|
            string_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_2_Core_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), @ptrCast(string_chararr), length.ptr);
    }

    /// ### DEPRECATED: Use `glLinkProgram` instead
    ///
    pub const GlLinkProgram = glLinkProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn glLinkProgram(self: QOpenGLFunctions_4_2_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glIsShader` instead
    ///
    pub const GlIsShader = glIsShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn glIsShader(self: QOpenGLFunctions_4_2_Core, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glIsProgram` instead
    ///
    pub const GlIsProgram = glIsProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn glIsProgram(self: QOpenGLFunctions_4_2_Core, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribPointerv` instead
    ///
    pub const GlGetVertexAttribPointerv = glGetVertexAttribPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn glGetVertexAttribPointerv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribiv` instead
    ///
    pub const GlGetVertexAttribiv = glGetVertexAttribiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetVertexAttribiv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribfv` instead
    ///
    pub const GlGetVertexAttribfv = glGetVertexAttribfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetVertexAttribfv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribdv` instead
    ///
    pub const GlGetVertexAttribdv = glGetVertexAttribdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetVertexAttribdv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformiv` instead
    ///
    pub const GlGetUniformiv = glGetUniformiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetUniformiv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformfv` instead
    ///
    pub const GlGetUniformfv = glGetUniformfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetUniformfv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformLocation` instead
    ///
    pub const GlGetUniformLocation = glGetUniformLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetUniformLocation(self: QOpenGLFunctions_4_2_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderSource` instead
    ///
    pub const GlGetShaderSource = glGetShaderSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn glGetShaderSource(self: QOpenGLFunctions_4_2_Core, shader: u32, bufSize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderInfoLog` instead
    ///
    pub const GlGetShaderInfoLog = glGetShaderInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetShaderInfoLog(self: QOpenGLFunctions_4_2_Core, shader: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderiv` instead
    ///
    pub const GlGetShaderiv = glGetShaderiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetShaderiv(self: QOpenGLFunctions_4_2_Core, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramInfoLog` instead
    ///
    pub const GlGetProgramInfoLog = glGetProgramInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetProgramInfoLog(self: QOpenGLFunctions_4_2_Core, program: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramiv` instead
    ///
    pub const GlGetProgramiv = glGetProgramiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetProgramiv(self: QOpenGLFunctions_4_2_Core, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetAttribLocation` instead
    ///
    pub const GlGetAttribLocation = glGetAttribLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetAttribLocation(self: QOpenGLFunctions_4_2_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetAttachedShaders` instead
    ///
    pub const GlGetAttachedShaders = glGetAttachedShaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` maxCount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` obj: []u32 `
    ///
    pub fn glGetAttachedShaders(self: QOpenGLFunctions_4_2_Core, program: u32, maxCount: i32, count: []i32, obj: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### DEPRECATED: Use `glEnableVertexAttribArray` instead
    ///
    pub const GlEnableVertexAttribArray = glEnableVertexAttribArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn glEnableVertexAttribArray(self: QOpenGLFunctions_4_2_Core, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisableVertexAttribArray` instead
    ///
    pub const GlDisableVertexAttribArray = glDisableVertexAttribArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn glDisableVertexAttribArray(self: QOpenGLFunctions_4_2_Core, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDetachShader` instead
    ///
    pub const GlDetachShader = glDetachShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glDetachShader(self: QOpenGLFunctions_4_2_Core, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDeleteShader` instead
    ///
    pub const GlDeleteShader = glDeleteShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn glDeleteShader(self: QOpenGLFunctions_4_2_Core, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDeleteProgram` instead
    ///
    pub const GlDeleteProgram = glDeleteProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    pub fn glDeleteProgram(self: QOpenGLFunctions_4_2_Core, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glCreateShader` instead
    ///
    pub const GlCreateShader = glCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn glCreateShader(self: QOpenGLFunctions_4_2_Core, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glCreateProgram` instead
    ///
    pub const GlCreateProgram = glCreateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glCreateProgram(self: QOpenGLFunctions_4_2_Core) u32 {
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glCompileShader` instead
    ///
    pub const GlCompileShader = glCompileShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shader: u32 `
    ///
    pub fn glCompileShader(self: QOpenGLFunctions_4_2_Core, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glBindAttribLocation` instead
    ///
    pub const GlBindAttribLocation = glBindAttribLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindAttribLocation(self: QOpenGLFunctions_4_2_Core, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### DEPRECATED: Use `glAttachShader` instead
    ///
    pub const GlAttachShader = glAttachShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glAttachShader(self: QOpenGLFunctions_4_2_Core, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glStencilMaskSeparate` instead
    ///
    pub const GlStencilMaskSeparate = glStencilMaskSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMaskSeparate(self: QOpenGLFunctions_4_2_Core, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilFuncSeparate` instead
    ///
    pub const GlStencilFuncSeparate = glStencilFuncSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFuncSeparate(self: QOpenGLFunctions_4_2_Core, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilOpSeparate` instead
    ///
    pub const GlStencilOpSeparate = glStencilOpSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` face: u32 `
    ///
    /// ` sfail: u32 `
    ///
    /// ` dpfail: u32 `
    ///
    /// ` dppass: u32 `
    ///
    pub fn glStencilOpSeparate(self: QOpenGLFunctions_4_2_Core, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparate` instead
    ///
    pub const GlBlendEquationSeparate = glBlendEquationSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn glBlendEquationSeparate(self: QOpenGLFunctions_4_2_Core, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x3fv` instead
    ///
    pub const GlUniformMatrix4x3fv = glUniformMatrix4x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4x3fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x4fv` instead
    ///
    pub const GlUniformMatrix3x4fv = glUniformMatrix3x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3x4fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x2fv` instead
    ///
    pub const GlUniformMatrix4x2fv = glUniformMatrix4x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4x2fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x4fv` instead
    ///
    pub const GlUniformMatrix2x4fv = glUniformMatrix2x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2x4fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x2fv` instead
    ///
    pub const GlUniformMatrix3x2fv = glUniformMatrix3x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3x2fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x3fv` instead
    ///
    pub const GlUniformMatrix2x3fv = glUniformMatrix2x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2x3fv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glIsVertexArray` instead
    ///
    pub const GlIsVertexArray = glIsVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn glIsVertexArray(self: QOpenGLFunctions_4_2_Core, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glGenVertexArrays` instead
    ///
    pub const GlGenVertexArrays = glGenVertexArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn glGenVertexArrays(self: QOpenGLFunctions_4_2_Core, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteVertexArrays` instead
    ///
    pub const GlDeleteVertexArrays = glDeleteVertexArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn glDeleteVertexArrays(self: QOpenGLFunctions_4_2_Core, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glBindVertexArray` instead
    ///
    pub const GlBindVertexArray = glBindVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` array: u32 `
    ///
    pub fn glBindVertexArray(self: QOpenGLFunctions_4_2_Core, array: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glFlushMappedBufferRange` instead
    ///
    pub const GlFlushMappedBufferRange = glFlushMappedBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn glFlushMappedBufferRange(self: QOpenGLFunctions_4_2_Core, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glMapBufferRange` instead
    ///
    pub const GlMapBufferRange = glMapBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn glMapBufferRange(self: QOpenGLFunctions_4_2_Core, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_2_Core_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glFramebufferTextureLayer` instead
    ///
    pub const GlFramebufferTextureLayer = glFramebufferTextureLayer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glFramebufferTextureLayer(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### DEPRECATED: Use `glRenderbufferStorageMultisample` instead
    ///
    pub const GlRenderbufferStorageMultisample = glRenderbufferStorageMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glRenderbufferStorageMultisample(self: QOpenGLFunctions_4_2_Core, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glBlitFramebuffer` instead
    ///
    pub const GlBlitFramebuffer = glBlitFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glBlitFramebuffer(self: QOpenGLFunctions_4_2_Core, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `glGenerateMipmap` instead
    ///
    pub const GlGenerateMipmap = glGenerateMipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    pub fn glGenerateMipmap(self: QOpenGLFunctions_4_2_Core, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetFramebufferAttachmentParameteriv` instead
    ///
    pub const GlGetFramebufferAttachmentParameteriv = glGetFramebufferAttachmentParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetFramebufferAttachmentParameteriv(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFramebufferRenderbuffer` instead
    ///
    pub const GlFramebufferRenderbuffer = glFramebufferRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glFramebufferRenderbuffer(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture3D` instead
    ///
    pub const GlFramebufferTexture3D = glFramebufferTexture3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glFramebufferTexture3D(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture2D` instead
    ///
    pub const GlFramebufferTexture2D = glFramebufferTexture2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glFramebufferTexture2D(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture1D` instead
    ///
    pub const GlFramebufferTexture1D = glFramebufferTexture1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glFramebufferTexture1D(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glGenFramebuffers` instead
    ///
    pub const GlGenFramebuffers = glGenFramebuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn glGenFramebuffers(self: QOpenGLFunctions_4_2_Core, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteFramebuffers` instead
    ///
    pub const GlDeleteFramebuffers = glDeleteFramebuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn glDeleteFramebuffers(self: QOpenGLFunctions_4_2_Core, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindFramebuffer` instead
    ///
    pub const GlBindFramebuffer = glBindFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn glBindFramebuffer(self: QOpenGLFunctions_4_2_Core, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glIsFramebuffer` instead
    ///
    pub const GlIsFramebuffer = glIsFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn glIsFramebuffer(self: QOpenGLFunctions_4_2_Core, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glGetRenderbufferParameteriv` instead
    ///
    pub const GlGetRenderbufferParameteriv = glGetRenderbufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetRenderbufferParameteriv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glRenderbufferStorage` instead
    ///
    pub const GlRenderbufferStorage = glRenderbufferStorage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glRenderbufferStorage(self: QOpenGLFunctions_4_2_Core, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glGenRenderbuffers` instead
    ///
    pub const GlGenRenderbuffers = glGenRenderbuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn glGenRenderbuffers(self: QOpenGLFunctions_4_2_Core, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteRenderbuffers` instead
    ///
    pub const GlDeleteRenderbuffers = glDeleteRenderbuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn glDeleteRenderbuffers(self: QOpenGLFunctions_4_2_Core, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindRenderbuffer` instead
    ///
    pub const GlBindRenderbuffer = glBindRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glBindRenderbuffer(self: QOpenGLFunctions_4_2_Core, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glIsRenderbuffer` instead
    ///
    pub const GlIsRenderbuffer = glIsRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glIsRenderbuffer(self: QOpenGLFunctions_4_2_Core, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glGetStringi` instead
    ///
    pub const GlGetStringi = glGetStringi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glGetStringi(self: QOpenGLFunctions_4_2_Core, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_2_Core_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glClearBufferfi` instead
    ///
    pub const GlClearBufferfi = glClearBufferfi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn glClearBufferfi(self: QOpenGLFunctions_4_2_Core, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### DEPRECATED: Use `glClearBufferfv` instead
    ///
    pub const GlClearBufferfv = glClearBufferfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glClearBufferfv(self: QOpenGLFunctions_4_2_Core, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferuiv` instead
    ///
    pub const GlClearBufferuiv = glClearBufferuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glClearBufferuiv(self: QOpenGLFunctions_4_2_Core, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferiv` instead
    ///
    pub const GlClearBufferiv = glClearBufferiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glClearBufferiv(self: QOpenGLFunctions_4_2_Core, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIuiv` instead
    ///
    pub const GlGetTexParameterIuiv = glGetTexParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetTexParameterIuiv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIiv` instead
    ///
    pub const GlGetTexParameterIiv = glGetTexParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameterIiv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIuiv` instead
    ///
    pub const GlTexParameterIuiv = glTexParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn glTexParameterIuiv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIiv` instead
    ///
    pub const GlTexParameterIiv = glTexParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameterIiv(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4uiv` instead
    ///
    pub const GlUniform4uiv = glUniform4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform4uiv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3uiv` instead
    ///
    pub const GlUniform3uiv = glUniform3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform3uiv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2uiv` instead
    ///
    pub const GlUniform2uiv = glUniform2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform2uiv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1uiv` instead
    ///
    pub const GlUniform1uiv = glUniform1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform1uiv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4ui` instead
    ///
    pub const GlUniform4ui = glUniform4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glUniform4ui(self: QOpenGLFunctions_4_2_Core, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3ui` instead
    ///
    pub const GlUniform3ui = glUniform3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn glUniform3ui(self: QOpenGLFunctions_4_2_Core, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2ui` instead
    ///
    pub const GlUniform2ui = glUniform2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn glUniform2ui(self: QOpenGLFunctions_4_2_Core, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1ui` instead
    ///
    pub const GlUniform1ui = glUniform1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn glUniform1ui(self: QOpenGLFunctions_4_2_Core, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glGetFragDataLocation` instead
    ///
    pub const GlGetFragDataLocation = glGetFragDataLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetFragDataLocation(self: QOpenGLFunctions_4_2_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glBindFragDataLocation` instead
    ///
    pub const GlBindFragDataLocation = glBindFragDataLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindFragDataLocation(self: QOpenGLFunctions_4_2_Core, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlBindFragDataLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetUniformuiv` instead
    ///
    pub const GlGetUniformuiv = glGetUniformuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetUniformuiv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIuiv` instead
    ///
    pub const GlGetVertexAttribIuiv = glGetVertexAttribIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetVertexAttribIuiv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIiv` instead
    ///
    pub const GlGetVertexAttribIiv = glGetVertexAttribIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetVertexAttribIiv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribIPointer` instead
    ///
    pub const GlVertexAttribIPointer = glVertexAttribIPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glVertexAttribIPointer(self: QOpenGLFunctions_4_2_Core, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glEndConditionalRender` instead
    ///
    pub const GlEndConditionalRender = glEndConditionalRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glEndConditionalRender(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndConditionalRender(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBeginConditionalRender` instead
    ///
    pub const GlBeginConditionalRender = glBeginConditionalRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBeginConditionalRender(self: QOpenGLFunctions_4_2_Core, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginConditionalRender(@ptrCast(self.ptr), @bitCast(id), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glClampColor` instead
    ///
    pub const GlClampColor = glClampColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn glClampColor(self: QOpenGLFunctions_4_2_Core, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClampColor(@ptrCast(self.ptr), @bitCast(target), @bitCast(clamp));
    }

    /// ### DEPRECATED: Use `glTransformFeedbackVaryings` instead
    ///
    pub const GlTransformFeedbackVaryings = glTransformFeedbackVaryings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTransformFeedbackVaryings(self: QOpenGLFunctions_4_2_Core, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*:0]const u8, varyings.len) catch @panic("QOpenGLFunctions_4_2_Core.glTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_2_Core_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), @ptrCast(varyings_chararr), @bitCast(bufferMode));
    }

    /// ### DEPRECATED: Use `glBindBufferBase` instead
    ///
    pub const GlBindBufferBase = glBindBufferBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glBindBufferBase(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glBindBufferRange` instead
    ///
    pub const GlBindBufferRange = glBindBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glBindBufferRange(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glEndTransformFeedback` instead
    ///
    pub const GlEndTransformFeedback = glEndTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glEndTransformFeedback(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBeginTransformFeedback` instead
    ///
    pub const GlBeginTransformFeedback = glBeginTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn glBeginTransformFeedback(self: QOpenGLFunctions_4_2_Core, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### DEPRECATED: Use `glIsEnabledi` instead
    ///
    pub const GlIsEnabledi = glIsEnabledi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glIsEnabledi(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisablei` instead
    ///
    pub const GlDisablei = glDisablei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glDisablei(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glEnablei` instead
    ///
    pub const GlEnablei = glEnablei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glEnablei(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glGetIntegeriV` instead
    ///
    pub const GlGetIntegeriV = glGetIntegeriV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn glGetIntegeriV(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleaniV` instead
    ///
    pub const GlGetBooleaniV = glGetBooleaniV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn glGetBooleaniV(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glColorMaski` instead
    ///
    pub const GlColorMaski = glColorMaski;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glColorMaski(self: QOpenGLFunctions_4_2_Core, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `glCopyBufferSubData` instead
    ///
    pub const GlCopyBufferSubData = glCopyBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glCopyBufferSubData(self: QOpenGLFunctions_4_2_Core, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_2_Core_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glUniformBlockBinding` instead
    ///
    pub const GlUniformBlockBinding = glUniformBlockBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn glUniformBlockBinding(self: QOpenGLFunctions_4_2_Core, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockName` instead
    ///
    pub const GlGetActiveUniformBlockName = glGetActiveUniformBlockName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetActiveUniformBlockName(self: QOpenGLFunctions_4_2_Core, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockiv` instead
    ///
    pub const GlGetActiveUniformBlockiv = glGetActiveUniformBlockiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetActiveUniformBlockiv(self: QOpenGLFunctions_4_2_Core, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformBlockIndex` instead
    ///
    pub const GlGetUniformBlockIndex = glGetUniformBlockIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn glGetUniformBlockIndex(self: QOpenGLFunctions_4_2_Core, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformName` instead
    ///
    pub const GlGetActiveUniformName = glGetActiveUniformName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetActiveUniformName(self: QOpenGLFunctions_4_2_Core, program: u32, uniformIndex: u32, bufSize: i32, length: []i32, uniformName: [:0]u8) void {
        const uniformName_Cstring = uniformName.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformIndex), @bitCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformsiv` instead
    ///
    pub const GlGetActiveUniformsiv = glGetActiveUniformsiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetActiveUniformsiv(self: QOpenGLFunctions_4_2_Core, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformIndices` instead
    ///
    pub const GlGetUniformIndices = glGetUniformIndices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetUniformIndices(self: QOpenGLFunctions_4_2_Core, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*:0]const u8, uniformNames.len) catch @panic("QOpenGLFunctions_4_2_Core.glGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), @ptrCast(uniformNames_chararr), uniformIndices.ptr);
    }

    /// ### DEPRECATED: Use `glPrimitiveRestartIndex` instead
    ///
    pub const GlPrimitiveRestartIndex = glPrimitiveRestartIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    pub fn glPrimitiveRestartIndex(self: QOpenGLFunctions_4_2_Core, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPrimitiveRestartIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glTexBuffer` instead
    ///
    pub const GlTexBuffer = glTexBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glTexBuffer(self: QOpenGLFunctions_4_2_Core, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstanced` instead
    ///
    pub const GlDrawElementsInstanced = glDrawElementsInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawElementsInstanced(self: QOpenGLFunctions_4_2_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawArraysInstanced` instead
    ///
    pub const GlDrawArraysInstanced = glDrawArraysInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawArraysInstanced(self: QOpenGLFunctions_4_2_Core, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glSampleMaski` instead
    ///
    pub const GlSampleMaski = glSampleMaski;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glSampleMaski(self: QOpenGLFunctions_4_2_Core, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSampleMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glGetMultisamplefv` instead
    ///
    pub const GlGetMultisamplefv = glGetMultisamplefv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn glGetMultisamplefv(self: QOpenGLFunctions_4_2_Core, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetMultisamplefv(@ptrCast(self.ptr), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### DEPRECATED: Use `glTexImage3DMultisample` instead
    ///
    pub const GlTexImage3DMultisample = glTexImage3DMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexImage3DMultisample(self: QOpenGLFunctions_4_2_Core, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glTexImage2DMultisample` instead
    ///
    pub const GlTexImage2DMultisample = glTexImage2DMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexImage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexImage2DMultisample(self: QOpenGLFunctions_4_2_Core, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexImage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glGetInteger64v` instead
    ///
    pub const GlGetInteger64v = glGetInteger64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn glGetInteger64v(self: QOpenGLFunctions_4_2_Core, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInteger64v(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glProvokingVertex` instead
    ///
    pub const GlProvokingVertex = glProvokingVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProvokingVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    pub fn glProvokingVertex(self: QOpenGLFunctions_4_2_Core, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProvokingVertex(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glMultiDrawElementsBaseVertex` instead
    ///
    pub const GlMultiDrawElementsBaseVertex = glMultiDrawElementsBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMultiDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glMultiDrawElementsBaseVertex(self: QOpenGLFunctions_4_2_Core, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32, basevertex: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMultiDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount), basevertex.ptr);
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseVertex` instead
    ///
    pub const GlDrawElementsInstancedBaseVertex = glDrawElementsInstancedBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawElementsInstancedBaseVertex(self: QOpenGLFunctions_4_2_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glDrawRangeElementsBaseVertex` instead
    ///
    pub const GlDrawRangeElementsBaseVertex = glDrawRangeElementsBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawRangeElementsBaseVertex(self: QOpenGLFunctions_4_2_Core, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawRangeElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glDrawElementsBaseVertex` instead
    ///
    pub const GlDrawElementsBaseVertex = glDrawElementsBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawElementsBaseVertex(self: QOpenGLFunctions_4_2_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture` instead
    ///
    pub const GlFramebufferTexture = glFramebufferTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn glFramebufferTexture(self: QOpenGLFunctions_4_2_Core, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlFramebufferTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glGetBufferParameteri64v` instead
    ///
    pub const GlGetBufferParameteri64v = glGetBufferParameteri64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn glGetBufferParameteri64v(self: QOpenGLFunctions_4_2_Core, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetBufferParameteri64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetInteger64iV` instead
    ///
    pub const GlGetInteger64iV = glGetInteger64iV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn glGetInteger64iV(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInteger64iV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP4uiv` instead
    ///
    pub const GlVertexAttribP4uiv = glVertexAttribP4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP4uiv(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP4uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP4ui` instead
    ///
    pub const GlVertexAttribP4ui = glVertexAttribP4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP4ui(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribP3uiv` instead
    ///
    pub const GlVertexAttribP3uiv = glVertexAttribP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP3uiv(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP3uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP3ui` instead
    ///
    pub const GlVertexAttribP3ui = glVertexAttribP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP3ui(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP3ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribP2uiv` instead
    ///
    pub const GlVertexAttribP2uiv = glVertexAttribP2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP2uiv(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP2uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP2ui` instead
    ///
    pub const GlVertexAttribP2ui = glVertexAttribP2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP2ui(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP2ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribP1uiv` instead
    ///
    pub const GlVertexAttribP1uiv = glVertexAttribP1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP1uiv(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP1uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP1ui` instead
    ///
    pub const GlVertexAttribP1ui = glVertexAttribP1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP1ui(self: QOpenGLFunctions_4_2_Core, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribP1ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glGetQueryObjectui64v` instead
    ///
    pub const GlGetQueryObjectui64v = glGetQueryObjectui64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjectui64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u64 `
    ///
    pub fn glGetQueryObjectui64v(self: QOpenGLFunctions_4_2_Core, id: u32, pname: u32, params: []u64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjectui64v(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryObjecti64v` instead
    ///
    pub const GlGetQueryObjecti64v = glGetQueryObjecti64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryObjecti64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn glGetQueryObjecti64v(self: QOpenGLFunctions_4_2_Core, id: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryObjecti64v(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glQueryCounter` instead
    ///
    pub const GlQueryCounter = glQueryCounter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glQueryCounter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    /// ` target: u32 `
    ///
    pub fn glQueryCounter(self: QOpenGLFunctions_4_2_Core, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlQueryCounter(@ptrCast(self.ptr), @bitCast(id), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterIuiv` instead
    ///
    pub const GlGetSamplerParameterIuiv = glGetSamplerParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetSamplerParameterIuiv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterfv` instead
    ///
    pub const GlGetSamplerParameterfv = glGetSamplerParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetSamplerParameterfv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterIiv` instead
    ///
    pub const GlGetSamplerParameterIiv = glGetSamplerParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetSamplerParameterIiv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameteriv` instead
    ///
    pub const GlGetSamplerParameteriv = glGetSamplerParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetSamplerParameteriv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterIuiv` instead
    ///
    pub const GlSamplerParameterIuiv = glSamplerParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const u32 `
    ///
    pub fn glSamplerParameterIuiv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterIiv` instead
    ///
    pub const GlSamplerParameterIiv = glSamplerParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn glSamplerParameterIiv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterfv` instead
    ///
    pub const GlSamplerParameterfv = glSamplerParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const f32 `
    ///
    pub fn glSamplerParameterfv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterf` instead
    ///
    pub const GlSamplerParameterf = glSamplerParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glSamplerParameterf(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameterf(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glSamplerParameteriv` instead
    ///
    pub const GlSamplerParameteriv = glSamplerParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn glSamplerParameteriv(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameteri` instead
    ///
    pub const GlSamplerParameteri = glSamplerParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glSamplerParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glSamplerParameteri(self: QOpenGLFunctions_4_2_Core, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlSamplerParameteri(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glBindSampler` instead
    ///
    pub const GlBindSampler = glBindSampler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` unit: u32 `
    ///
    /// ` sampler: u32 `
    ///
    pub fn glBindSampler(self: QOpenGLFunctions_4_2_Core, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindSampler(@ptrCast(self.ptr), @bitCast(unit), @bitCast(sampler));
    }

    /// ### DEPRECATED: Use `glIsSampler` instead
    ///
    pub const GlIsSampler = glIsSampler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` sampler: u32 `
    ///
    pub fn glIsSampler(self: QOpenGLFunctions_4_2_Core, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsSampler(@ptrCast(self.ptr), @bitCast(sampler));
    }

    /// ### DEPRECATED: Use `glDeleteSamplers` instead
    ///
    pub const GlDeleteSamplers = glDeleteSamplers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn glDeleteSamplers(self: QOpenGLFunctions_4_2_Core, count: i32, samplers: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glGenSamplers` instead
    ///
    pub const GlGenSamplers = glGenSamplers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []u32 `
    ///
    pub fn glGenSamplers(self: QOpenGLFunctions_4_2_Core, count: i32, samplers: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glGetFragDataIndex` instead
    ///
    pub const GlGetFragDataIndex = glGetFragDataIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFragDataIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetFragDataIndex(self: QOpenGLFunctions_4_2_Core, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetFragDataIndex(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glBindFragDataLocationIndexed` instead
    ///
    pub const GlBindFragDataLocationIndexed = glBindFragDataLocationIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindFragDataLocationIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` colorNumber: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindFragDataLocationIndexed(self: QOpenGLFunctions_4_2_Core, program: u32, colorNumber: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlBindFragDataLocationIndexed(@ptrCast(self.ptr), @bitCast(program), @bitCast(colorNumber), @bitCast(index), name_Cstring);
    }

    /// ### DEPRECATED: Use `glVertexAttribDivisor` instead
    ///
    pub const GlVertexAttribDivisor = glVertexAttribDivisor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn glVertexAttribDivisor(self: QOpenGLFunctions_4_2_Core, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribDivisor(@ptrCast(self.ptr), @bitCast(index), @bitCast(divisor));
    }

    /// ### DEPRECATED: Use `glGetQueryIndexediv` instead
    ///
    pub const GlGetQueryIndexediv = glGetQueryIndexediv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetQueryIndexediv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryIndexediv(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetQueryIndexediv(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glEndQueryIndexed` instead
    ///
    pub const GlEndQueryIndexed = glEndQueryIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glEndQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glEndQueryIndexed(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlEndQueryIndexed(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glBeginQueryIndexed` instead
    ///
    pub const GlBeginQueryIndexed = glBeginQueryIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBeginQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBeginQueryIndexed(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBeginQueryIndexed(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedbackStream` instead
    ///
    pub const GlDrawTransformFeedbackStream = glDrawTransformFeedbackStream;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedbackStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    pub fn glDrawTransformFeedbackStream(self: QOpenGLFunctions_4_2_Core, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStream(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(stream));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedback` instead
    ///
    pub const GlDrawTransformFeedback = glDrawTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glDrawTransformFeedback(self: QOpenGLFunctions_4_2_Core, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedback(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glResumeTransformFeedback` instead
    ///
    pub const GlResumeTransformFeedback = glResumeTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glResumeTransformFeedback(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlResumeTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPauseTransformFeedback` instead
    ///
    pub const GlPauseTransformFeedback = glPauseTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glPauseTransformFeedback(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPauseTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glIsTransformFeedback` instead
    ///
    pub const GlIsTransformFeedback = glIsTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsTransformFeedback(self: QOpenGLFunctions_4_2_Core, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsTransformFeedback(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glGenTransformFeedbacks` instead
    ///
    pub const GlGenTransformFeedbacks = glGenTransformFeedbacks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn glGenTransformFeedbacks(self: QOpenGLFunctions_4_2_Core, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteTransformFeedbacks` instead
    ///
    pub const GlDeleteTransformFeedbacks = glDeleteTransformFeedbacks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn glDeleteTransformFeedbacks(self: QOpenGLFunctions_4_2_Core, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glBindTransformFeedback` instead
    ///
    pub const GlBindTransformFeedback = glBindTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBindTransformFeedback(self: QOpenGLFunctions_4_2_Core, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindTransformFeedback(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glPatchParameterfv` instead
    ///
    pub const GlPatchParameterfv = glPatchParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPatchParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn glPatchParameterfv(self: QOpenGLFunctions_4_2_Core, pname: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPatchParameterfv(@ptrCast(self.ptr), @bitCast(pname), values.ptr);
    }

    /// ### DEPRECATED: Use `glPatchParameteri` instead
    ///
    pub const GlPatchParameteri = glPatchParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glPatchParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn glPatchParameteri(self: QOpenGLFunctions_4_2_Core, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlPatchParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glGetProgramStageiv` instead
    ///
    pub const GlGetProgramStageiv = glGetProgramStageiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramStageiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []i32 `
    ///
    pub fn glGetProgramStageiv(self: QOpenGLFunctions_4_2_Core, program: u32, shadertype: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramStageiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(pname), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformSubroutineuiv` instead
    ///
    pub const GlGetUniformSubroutineuiv = glGetUniformSubroutineuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformSubroutineuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetUniformSubroutineuiv(self: QOpenGLFunctions_4_2_Core, shadertype: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformSubroutineuiv(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniformSubroutinesuiv` instead
    ///
    pub const GlUniformSubroutinesuiv = glUniformSubroutinesuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformSubroutinesuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` indices: []const u32 `
    ///
    pub fn glUniformSubroutinesuiv(self: QOpenGLFunctions_4_2_Core, shadertype: u32, count: i32, indices: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformSubroutinesuiv(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(count), indices.ptr);
    }

    /// ### DEPRECATED: Use `glGetActiveSubroutineName` instead
    ///
    pub const GlGetActiveSubroutineName = glGetActiveSubroutineName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveSubroutineName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetActiveSubroutineName(self: QOpenGLFunctions_4_2_Core, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineName(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveSubroutineUniformName` instead
    ///
    pub const GlGetActiveSubroutineUniformName = glGetActiveSubroutineUniformName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveSubroutineUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetActiveSubroutineUniformName(self: QOpenGLFunctions_4_2_Core, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveSubroutineUniformiv` instead
    ///
    pub const GlGetActiveSubroutineUniformiv = glGetActiveSubroutineUniformiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveSubroutineUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetActiveSubroutineUniformiv(self: QOpenGLFunctions_4_2_Core, program: u32, shadertype: u32, index: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveSubroutineUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(pname), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetSubroutineIndex` instead
    ///
    pub const GlGetSubroutineIndex = glGetSubroutineIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSubroutineIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetSubroutineIndex(self: QOpenGLFunctions_4_2_Core, program: u32, shadertype: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetSubroutineIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetSubroutineUniformLocation` instead
    ///
    pub const GlGetSubroutineUniformLocation = glGetSubroutineUniformLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetSubroutineUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetSubroutineUniformLocation(self: QOpenGLFunctions_4_2_Core, program: u32, shadertype: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_2_Core_GlGetSubroutineUniformLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetUniformdv` instead
    ///
    pub const GlGetUniformdv = glGetUniformdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetUniformdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetUniformdv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetUniformdv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x3dv` instead
    ///
    pub const GlUniformMatrix4x3dv = glUniformMatrix4x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix4x3dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x2dv` instead
    ///
    pub const GlUniformMatrix4x2dv = glUniformMatrix4x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix4x2dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4x2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x4dv` instead
    ///
    pub const GlUniformMatrix3x4dv = glUniformMatrix3x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix3x4dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x2dv` instead
    ///
    pub const GlUniformMatrix3x2dv = glUniformMatrix3x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix3x2dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3x2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x4dv` instead
    ///
    pub const GlUniformMatrix2x4dv = glUniformMatrix2x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix2x4dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x3dv` instead
    ///
    pub const GlUniformMatrix2x3dv = glUniformMatrix2x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix2x3dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2x3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4dv` instead
    ///
    pub const GlUniformMatrix4dv = glUniformMatrix4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix4dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3dv` instead
    ///
    pub const GlUniformMatrix3dv = glUniformMatrix3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix3dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2dv` instead
    ///
    pub const GlUniformMatrix2dv = glUniformMatrix2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix2dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniformMatrix2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4dv` instead
    ///
    pub const GlUniform4dv = glUniform4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform4dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3dv` instead
    ///
    pub const GlUniform3dv = glUniform3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform3dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2dv` instead
    ///
    pub const GlUniform2dv = glUniform2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform2dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1dv` instead
    ///
    pub const GlUniform1dv = glUniform1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform1dv(self: QOpenGLFunctions_4_2_Core, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4d` instead
    ///
    pub const GlUniform4d = glUniform4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glUniform4d(self: QOpenGLFunctions_4_2_Core, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform4d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glUniform3d` instead
    ///
    pub const GlUniform3d = glUniform3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glUniform3d(self: QOpenGLFunctions_4_2_Core, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform3d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glUniform2d` instead
    ///
    pub const GlUniform2d = glUniform2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glUniform2d(self: QOpenGLFunctions_4_2_Core, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform2d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glUniform1d` instead
    ///
    pub const GlUniform1d = glUniform1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    pub fn glUniform1d(self: QOpenGLFunctions_4_2_Core, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUniform1d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glDrawElementsIndirect` instead
    ///
    pub const GlDrawElementsIndirect = glDrawElementsIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn glDrawElementsIndirect(self: QOpenGLFunctions_4_2_Core, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsIndirect(@ptrCast(self.ptr), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect));
    }

    /// ### DEPRECATED: Use `glDrawArraysIndirect` instead
    ///
    pub const GlDrawArraysIndirect = glDrawArraysIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn glDrawArraysIndirect(self: QOpenGLFunctions_4_2_Core, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysIndirect(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(indirect));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparatei` instead
    ///
    pub const GlBlendFuncSeparatei = glBlendFuncSeparatei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFuncSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glBlendFuncSeparatei(self: QOpenGLFunctions_4_2_Core, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFuncSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### DEPRECATED: Use `glBlendFunci` instead
    ///
    pub const GlBlendFunci = glBlendFunci;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendFunci)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` src: u32 `
    ///
    /// ` dst: u32 `
    ///
    pub fn glBlendFunci(self: QOpenGLFunctions_4_2_Core, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendFunci(@ptrCast(self.ptr), @bitCast(buf), @bitCast(src), @bitCast(dst));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparatei` instead
    ///
    pub const GlBlendEquationSeparatei = glBlendEquationSeparatei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquationSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn glBlendEquationSeparatei(self: QOpenGLFunctions_4_2_Core, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glBlendEquationi` instead
    ///
    pub const GlBlendEquationi = glBlendEquationi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBlendEquationi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` buf: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBlendEquationi(self: QOpenGLFunctions_4_2_Core, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBlendEquationi(@ptrCast(self.ptr), @bitCast(buf), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glMinSampleShading` instead
    ///
    pub const GlMinSampleShading = glMinSampleShading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` value: f32 `
    ///
    pub fn glMinSampleShading(self: QOpenGLFunctions_4_2_Core, value: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMinSampleShading(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glGetDoubleiV` instead
    ///
    pub const GlGetDoubleiV = glGetDoubleiV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetDoublei_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f64 `
    ///
    pub fn glGetDoubleiV(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, data: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetDoubleiV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatiV` instead
    ///
    pub const GlGetFloatiV = glGetFloatiV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetFloati_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f32 `
    ///
    pub fn glGetFloatiV(self: QOpenGLFunctions_4_2_Core, target: u32, index: u32, data: []f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetFloatiV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glDepthRangeIndexed` instead
    ///
    pub const GlDepthRangeIndexed = glDepthRangeIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRangeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` n: f64 `
    ///
    /// ` f: f64 `
    ///
    pub fn glDepthRangeIndexed(self: QOpenGLFunctions_4_2_Core, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangeIndexed(@ptrCast(self.ptr), @bitCast(index), @bitCast(n), @bitCast(f));
    }

    /// ### DEPRECATED: Use `glDepthRangeArrayv` instead
    ///
    pub const GlDepthRangeArrayv = glDepthRangeArrayv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRangeArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glDepthRangeArrayv(self: QOpenGLFunctions_4_2_Core, first: u32, count: i32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangeArrayv(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glScissorIndexedv` instead
    ///
    pub const GlScissorIndexedv = glScissorIndexedv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissorIndexedv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glScissorIndexedv(self: QOpenGLFunctions_4_2_Core, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorIndexedv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glScissorIndexed` instead
    ///
    pub const GlScissorIndexed = glScissorIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissorIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glScissorIndexed(self: QOpenGLFunctions_4_2_Core, index: u32, left: i32, bottom: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorIndexed(@ptrCast(self.ptr), @bitCast(index), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glScissorArrayv` instead
    ///
    pub const GlScissorArrayv = glScissorArrayv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glScissorArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glScissorArrayv(self: QOpenGLFunctions_4_2_Core, first: u32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlScissorArrayv(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glViewportIndexedfv` instead
    ///
    pub const GlViewportIndexedfv = glViewportIndexedfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewportIndexedfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glViewportIndexedfv(self: QOpenGLFunctions_4_2_Core, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportIndexedfv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glViewportIndexedf` instead
    ///
    pub const GlViewportIndexedf = glViewportIndexedf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewportIndexedf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glViewportIndexedf(self: QOpenGLFunctions_4_2_Core, index: u32, x: f32, y: f32, w: f32, h: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportIndexedf(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `glViewportArrayv` instead
    ///
    pub const GlViewportArrayv = glViewportArrayv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glViewportArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glViewportArrayv(self: QOpenGLFunctions_4_2_Core, first: u32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlViewportArrayv(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribLdv` instead
    ///
    pub const GlGetVertexAttribLdv = glGetVertexAttribLdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetVertexAttribLdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetVertexAttribLdv(self: QOpenGLFunctions_4_2_Core, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetVertexAttribLdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribLPointer` instead
    ///
    pub const GlVertexAttribLPointer = glVertexAttribLPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribLPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glVertexAttribLPointer(self: QOpenGLFunctions_4_2_Core, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribLPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glVertexAttribL4dv` instead
    ///
    pub const GlVertexAttribL4dv = glVertexAttribL4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL4dv(self: QOpenGLFunctions_4_2_Core, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL4dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL3dv` instead
    ///
    pub const GlVertexAttribL3dv = glVertexAttribL3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL3dv(self: QOpenGLFunctions_4_2_Core, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL3dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL2dv` instead
    ///
    pub const GlVertexAttribL2dv = glVertexAttribL2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL2dv(self: QOpenGLFunctions_4_2_Core, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL2dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL1dv` instead
    ///
    pub const GlVertexAttribL1dv = glVertexAttribL1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL1dv(self: QOpenGLFunctions_4_2_Core, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL1dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL4d` instead
    ///
    pub const GlVertexAttribL4d = glVertexAttribL4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glVertexAttribL4d(self: QOpenGLFunctions_4_2_Core, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL4d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttribL3d` instead
    ///
    pub const GlVertexAttribL3d = glVertexAttribL3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glVertexAttribL3d(self: QOpenGLFunctions_4_2_Core, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL3d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttribL2d` instead
    ///
    pub const GlVertexAttribL2d = glVertexAttribL2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glVertexAttribL2d(self: QOpenGLFunctions_4_2_Core, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL2d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttribL1d` instead
    ///
    pub const GlVertexAttribL1d = glVertexAttribL1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glVertexAttribL1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn glVertexAttribL1d(self: QOpenGLFunctions_4_2_Core, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlVertexAttribL1d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glGetProgramPipelineInfoLog` instead
    ///
    pub const GlGetProgramPipelineInfoLog = glGetProgramPipelineInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramPipelineInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetProgramPipelineInfoLog(self: QOpenGLFunctions_4_2_Core, pipeline: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramPipelineInfoLog(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glValidateProgramPipeline` instead
    ///
    pub const GlValidateProgramPipeline = glValidateProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glValidateProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glValidateProgramPipeline(self: QOpenGLFunctions_4_2_Core, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlValidateProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x3dv` instead
    ///
    pub const GlProgramUniformMatrix4x3dv = glProgramUniformMatrix4x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix4x3dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x4dv` instead
    ///
    pub const GlProgramUniformMatrix3x4dv = glProgramUniformMatrix3x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix3x4dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x2dv` instead
    ///
    pub const GlProgramUniformMatrix4x2dv = glProgramUniformMatrix4x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix4x2dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x4dv` instead
    ///
    pub const GlProgramUniformMatrix2x4dv = glProgramUniformMatrix2x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix2x4dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x2dv` instead
    ///
    pub const GlProgramUniformMatrix3x2dv = glProgramUniformMatrix3x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix3x2dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x3dv` instead
    ///
    pub const GlProgramUniformMatrix2x3dv = glProgramUniformMatrix2x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix2x3dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x3fv` instead
    ///
    pub const GlProgramUniformMatrix4x3fv = glProgramUniformMatrix4x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix4x3fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x4fv` instead
    ///
    pub const GlProgramUniformMatrix3x4fv = glProgramUniformMatrix3x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix3x4fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x2fv` instead
    ///
    pub const GlProgramUniformMatrix4x2fv = glProgramUniformMatrix4x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix4x2fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x4fv` instead
    ///
    pub const GlProgramUniformMatrix2x4fv = glProgramUniformMatrix2x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix2x4fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x2fv` instead
    ///
    pub const GlProgramUniformMatrix3x2fv = glProgramUniformMatrix3x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix3x2fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x3fv` instead
    ///
    pub const GlProgramUniformMatrix2x3fv = glProgramUniformMatrix2x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix2x3fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4dv` instead
    ///
    pub const GlProgramUniformMatrix4dv = glProgramUniformMatrix4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix4dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3dv` instead
    ///
    pub const GlProgramUniformMatrix3dv = glProgramUniformMatrix3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix3dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2dv` instead
    ///
    pub const GlProgramUniformMatrix2dv = glProgramUniformMatrix2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix2dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4fv` instead
    ///
    pub const GlProgramUniformMatrix4fv = glProgramUniformMatrix4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix4fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3fv` instead
    ///
    pub const GlProgramUniformMatrix3fv = glProgramUniformMatrix3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix3fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2fv` instead
    ///
    pub const GlProgramUniformMatrix2fv = glProgramUniformMatrix2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniformMatrix2fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4uiv` instead
    ///
    pub const GlProgramUniform4uiv = glProgramUniform4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform4uiv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4ui` instead
    ///
    pub const GlProgramUniform4ui = glProgramUniform4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform4ui(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform4dv` instead
    ///
    pub const GlProgramUniform4dv = glProgramUniform4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform4dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4d` instead
    ///
    pub const GlProgramUniform4d = glProgramUniform4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform4d(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform4fv` instead
    ///
    pub const GlProgramUniform4fv = glProgramUniform4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform4fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4f` instead
    ///
    pub const GlProgramUniform4f = glProgramUniform4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform4f(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform4iv` instead
    ///
    pub const GlProgramUniform4iv = glProgramUniform4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform4iv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4i` instead
    ///
    pub const GlProgramUniform4i = glProgramUniform4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform4i(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform4i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform3uiv` instead
    ///
    pub const GlProgramUniform3uiv = glProgramUniform3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform3uiv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3ui` instead
    ///
    pub const GlProgramUniform3ui = glProgramUniform3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform3ui(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform3dv` instead
    ///
    pub const GlProgramUniform3dv = glProgramUniform3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform3dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3d` instead
    ///
    pub const GlProgramUniform3d = glProgramUniform3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform3d(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f64, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform3fv` instead
    ///
    pub const GlProgramUniform3fv = glProgramUniform3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform3fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3f` instead
    ///
    pub const GlProgramUniform3f = glProgramUniform3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform3f(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform3iv` instead
    ///
    pub const GlProgramUniform3iv = glProgramUniform3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform3iv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3i` instead
    ///
    pub const GlProgramUniform3i = glProgramUniform3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glProgramUniform3i(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform3i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform2uiv` instead
    ///
    pub const GlProgramUniform2uiv = glProgramUniform2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform2uiv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2ui` instead
    ///
    pub const GlProgramUniform2ui = glProgramUniform2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn glProgramUniform2ui(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform2dv` instead
    ///
    pub const GlProgramUniform2dv = glProgramUniform2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform2dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2d` instead
    ///
    pub const GlProgramUniform2d = glProgramUniform2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    /// ` v1: f64 `
    ///
    pub fn glProgramUniform2d(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f64, v1: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform2fv` instead
    ///
    pub const GlProgramUniform2fv = glProgramUniform2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform2fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2f` instead
    ///
    pub const GlProgramUniform2f = glProgramUniform2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn glProgramUniform2f(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform2iv` instead
    ///
    pub const GlProgramUniform2iv = glProgramUniform2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform2iv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2i` instead
    ///
    pub const GlProgramUniform2i = glProgramUniform2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn glProgramUniform2i(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform2i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform1uiv` instead
    ///
    pub const GlProgramUniform1uiv = glProgramUniform1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform1uiv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1ui` instead
    ///
    pub const GlProgramUniform1ui = glProgramUniform1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn glProgramUniform1ui(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform1dv` instead
    ///
    pub const GlProgramUniform1dv = glProgramUniform1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform1dv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1d` instead
    ///
    pub const GlProgramUniform1d = glProgramUniform1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    pub fn glProgramUniform1d(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform1fv` instead
    ///
    pub const GlProgramUniform1fv = glProgramUniform1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform1fv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1f` instead
    ///
    pub const GlProgramUniform1f = glProgramUniform1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn glProgramUniform1f(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform1iv` instead
    ///
    pub const GlProgramUniform1iv = glProgramUniform1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform1iv(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1i` instead
    ///
    pub const GlProgramUniform1i = glProgramUniform1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn glProgramUniform1i(self: QOpenGLFunctions_4_2_Core, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramUniform1i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glGetProgramPipelineiv` instead
    ///
    pub const GlGetProgramPipelineiv = glGetProgramPipelineiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetProgramPipelineiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetProgramPipelineiv(self: QOpenGLFunctions_4_2_Core, pipeline: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetProgramPipelineiv(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glIsProgramPipeline` instead
    ///
    pub const GlIsProgramPipeline = glIsProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glIsProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glIsProgramPipeline(self: QOpenGLFunctions_4_2_Core, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_2_Core_GlIsProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glGenProgramPipelines` instead
    ///
    pub const GlGenProgramPipelines = glGenProgramPipelines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGenProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []u32 `
    ///
    pub fn glGenProgramPipelines(self: QOpenGLFunctions_4_2_Core, n: i32, pipelines: []u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGenProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteProgramPipelines` instead
    ///
    pub const GlDeleteProgramPipelines = glDeleteProgramPipelines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDeleteProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []const u32 `
    ///
    pub fn glDeleteProgramPipelines(self: QOpenGLFunctions_4_2_Core, n: i32, pipelines: []const u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDeleteProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### DEPRECATED: Use `glBindProgramPipeline` instead
    ///
    pub const GlBindProgramPipeline = glBindProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glBindProgramPipeline(self: QOpenGLFunctions_4_2_Core, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glCreateShaderProgramv` instead
    ///
    pub const GlCreateShaderProgramv = glCreateShaderProgramv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glCreateShaderProgramv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` strings: []const [:0]const u8 `
    ///
    pub fn glCreateShaderProgramv(self: QOpenGLFunctions_4_2_Core, allocator: std.mem.Allocator, typeVal: u32, count: i32, strings: []const [:0]const u8) u32 {
        const strings_chararr = allocator.alloc([*:0]const u8, strings.len) catch @panic("QOpenGLFunctions_4_2_Core.glCreateShaderProgramv: Memory allocation failed");
        defer allocator.free(strings_chararr);
        for (strings, 0..strings.len) |str, i|
            strings_chararr[i] = @ptrCast(str.ptr);
        return qtc.QOpenGLFunctions_4_2_Core_GlCreateShaderProgramv(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(count), @ptrCast(strings_chararr));
    }

    /// ### DEPRECATED: Use `glActiveShaderProgram` instead
    ///
    pub const GlActiveShaderProgram = glActiveShaderProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glActiveShaderProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn glActiveShaderProgram(self: QOpenGLFunctions_4_2_Core, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlActiveShaderProgram(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glUseProgramStages` instead
    ///
    pub const GlUseProgramStages = glUseProgramStages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glUseProgramStages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` stages: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn glUseProgramStages(self: QOpenGLFunctions_4_2_Core, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlUseProgramStages(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(stages), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glProgramParameteri` instead
    ///
    pub const GlProgramParameteri = glProgramParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn glProgramParameteri(self: QOpenGLFunctions_4_2_Core, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramParameteri(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glProgramBinary` instead
    ///
    pub const GlProgramBinary = glProgramBinary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glProgramBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` binaryFormat: u32 `
    ///
    /// ` binary: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    pub fn glProgramBinary(self: QOpenGLFunctions_4_2_Core, program: u32, binaryFormat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlProgramBinary(@ptrCast(self.ptr), @bitCast(program), @bitCast(binaryFormat), @ptrCast(binary), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glClearDepthf` instead
    ///
    pub const GlClearDepthf = glClearDepthf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glClearDepthf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` dd: f32 `
    ///
    pub fn glClearDepthf(self: QOpenGLFunctions_4_2_Core, dd: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlClearDepthf(@ptrCast(self.ptr), @bitCast(dd));
    }

    /// ### DEPRECATED: Use `glDepthRangef` instead
    ///
    pub const GlDepthRangef = glDepthRangef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDepthRangef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` n: f32 `
    ///
    /// ` f: f32 `
    ///
    pub fn glDepthRangef(self: QOpenGLFunctions_4_2_Core, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDepthRangef(@ptrCast(self.ptr), @bitCast(n), @bitCast(f));
    }

    /// ### DEPRECATED: Use `glGetShaderPrecisionFormat` instead
    ///
    pub const GlGetShaderPrecisionFormat = glGetShaderPrecisionFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetShaderPrecisionFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` precisiontype: u32 `
    ///
    /// ` range: []i32 `
    ///
    /// ` precision: []i32 `
    ///
    pub fn glGetShaderPrecisionFormat(self: QOpenGLFunctions_4_2_Core, shadertype: u32, precisiontype: u32, range: []i32, precision: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetShaderPrecisionFormat(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(precisiontype), range.ptr, precision.ptr);
    }

    /// ### DEPRECATED: Use `glShaderBinary` instead
    ///
    pub const GlShaderBinary = glShaderBinary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glShaderBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glShaderBinary(self: QOpenGLFunctions_4_2_Core, count: i32, shaders: []const u32, binaryformat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlShaderBinary(@ptrCast(self.ptr), @bitCast(count), shaders.ptr, @bitCast(binaryformat), @ptrCast(binary), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glReleaseShaderCompiler` instead
    ///
    pub const GlReleaseShaderCompiler = glReleaseShaderCompiler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn glReleaseShaderCompiler(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_GlReleaseShaderCompiler(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glTexStorage3D` instead
    ///
    pub const GlTexStorage3D = glTexStorage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexStorage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexStorage3D(self: QOpenGLFunctions_4_2_Core, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glTexStorage2D` instead
    ///
    pub const GlTexStorage2D = glTexStorage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexStorage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glTexStorage2D(self: QOpenGLFunctions_4_2_Core, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexStorage1D` instead
    ///
    pub const GlTexStorage1D = glTexStorage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glTexStorage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` target: u32 `
    ///
    /// ` levels: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    pub fn glTexStorage1D(self: QOpenGLFunctions_4_2_Core, target: u32, levels: i32, internalformat: u32, width: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlTexStorage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glMemoryBarrier` instead
    ///
    pub const GlMemoryBarrier = glMemoryBarrier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glMemoryBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` barriers: u32 `
    ///
    pub fn glMemoryBarrier(self: QOpenGLFunctions_4_2_Core, barriers: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlMemoryBarrier(@ptrCast(self.ptr), @bitCast(barriers));
    }

    /// ### DEPRECATED: Use `glBindImageTexture` instead
    ///
    pub const GlBindImageTexture = glBindImageTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glBindImageTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glBindImageTexture(self: QOpenGLFunctions_4_2_Core, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlBindImageTexture(@ptrCast(self.ptr), @bitCast(unit), @bitCast(texture), @bitCast(level), @bitCast(layered), @bitCast(layer), @bitCast(access), @bitCast(format));
    }

    /// ### DEPRECATED: Use `glGetActiveAtomicCounterBufferiv` instead
    ///
    pub const GlGetActiveAtomicCounterBufferiv = glGetActiveAtomicCounterBufferiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetActiveAtomicCounterBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` program: u32 `
    ///
    /// ` bufferIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetActiveAtomicCounterBufferiv(self: QOpenGLFunctions_4_2_Core, program: u32, bufferIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetActiveAtomicCounterBufferiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufferIndex), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetInternalformativ` instead
    ///
    pub const GlGetInternalformativ = glGetInternalformativ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glGetInternalformativ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glGetInternalformativ(self: QOpenGLFunctions_4_2_Core, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlGetInternalformativ(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(pname), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedbackStreamInstanced` instead
    ///
    pub const GlDrawTransformFeedbackStreamInstanced = glDrawTransformFeedbackStreamInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedbackStreamInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawTransformFeedbackStreamInstanced(self: QOpenGLFunctions_4_2_Core, mode: u32, id: u32, stream: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackStreamInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(stream), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedbackInstanced` instead
    ///
    pub const GlDrawTransformFeedbackInstanced = glDrawTransformFeedbackInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawTransformFeedbackInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawTransformFeedbackInstanced(self: QOpenGLFunctions_4_2_Core, mode: u32, id: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawTransformFeedbackInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseVertexBaseInstance` instead
    ///
    pub const GlDrawElementsInstancedBaseVertexBaseInstance = glDrawElementsInstancedBaseVertexBaseInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstancedBaseVertexBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawElementsInstancedBaseVertexBaseInstance(self: QOpenGLFunctions_4_2_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseVertexBaseInstance(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex), @bitCast(baseinstance));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseInstance` instead
    ///
    pub const GlDrawElementsInstancedBaseInstance = glDrawElementsInstancedBaseInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawElementsInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawElementsInstancedBaseInstance(self: QOpenGLFunctions_4_2_Core, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawElementsInstancedBaseInstance(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(baseinstance));
    }

    /// ### DEPRECATED: Use `glDrawArraysInstancedBaseInstance` instead
    ///
    pub const GlDrawArraysInstancedBaseInstance = glDrawArraysInstancedBaseInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#glDrawArraysInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
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
    pub fn glDrawArraysInstancedBaseInstance(self: QOpenGLFunctions_4_2_Core, mode: u32, first: i32, count: i32, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_2_Core_GlDrawArraysInstancedBaseInstance(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount), @bitCast(baseinstance));
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
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn isInitialized(self: QOpenGLFunctions_4_2_Core) bool {
        return qtc.QOpenGLFunctions_4_2_Core_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn superIsInitialized(self: QOpenGLFunctions_4_2_Core) bool {
        return qtc.QOpenGLFunctions_4_2_Core_SuperIsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_4_2_Core`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: QOpenGLFunctions_4_2_Core, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_2_Core_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn setOwningContext(self: QOpenGLFunctions_4_2_Core, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_4_2_Core_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn superSetOwningContext(self: QOpenGLFunctions_4_2_Core, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_4_2_Core_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_4_2_Core`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_4_2_Core, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn onSetOwningContext(self: QOpenGLFunctions_4_2_Core, callback: *const fn (QOpenGLFunctions_4_2_Core, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_2_Core_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn owningContext(self: QOpenGLFunctions_4_2_Core) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_4_2_Core_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn superOwningContext(self: QOpenGLFunctions_4_2_Core) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_4_2_Core_SuperOwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_4_2_Core`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn onOwningContext(self: QOpenGLFunctions_4_2_Core, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_2_Core_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-core.html#dtor.QOpenGLFunctions_4_2_Core)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_2_Core `
    ///
    pub fn delete(self: QOpenGLFunctions_4_2_Core) void {
        qtc.QOpenGLFunctions_4_2_Core_Delete(@ptrCast(self.ptr));
    }
};
