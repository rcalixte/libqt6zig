const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html)
pub const QOpenGLFunctions_4_4_Compatibility = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_4_4_Compatibility,

    pub const _is_QOpenGLFunctions_4_4_Compatibility = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFunctions_4_4_Compatibility object in C++ memory
    ///
    pub fn new() QOpenGLFunctions_4_4_Compatibility {
        return .{ .ptr = qtc.QOpenGLFunctions_4_4_Compatibility_new() };
    }

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn initializeOpenGLFunctions(self: QOpenGLFunctions_4_4_Compatibility) bool {
        return qtc.QOpenGLFunctions_4_4_Compatibility_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitializeOpenGLFunctions` instead
    ///
    pub const OnInitializeOpenGLFunctions = onInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onInitializeOpenGLFunctions(self: QOpenGLFunctions_4_4_Compatibility, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitializeOpenGLFunctions` instead
    ///
    pub const SuperInitializeOpenGLFunctions = superInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn superInitializeOpenGLFunctions(self: QOpenGLFunctions_4_4_Compatibility) bool {
        return qtc.QOpenGLFunctions_4_4_Compatibility_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glViewport` instead
    ///
    pub const GlViewport = glViewport;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glViewport(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glDepthRange` instead
    ///
    pub const GlDepthRange = glDepthRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn glDepthRange(self: QOpenGLFunctions_4_4_Compatibility, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### DEPRECATED: Use `glIsEnabled` instead
    ///
    pub const GlIsEnabled = glIsEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` cap: u32 `
    ///
    pub fn glIsEnabled(self: QOpenGLFunctions_4_4_Compatibility, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameteriv` instead
    ///
    pub const GlGetTexLevelParameteriv = glGetTexLevelParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexLevelParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameterfv` instead
    ///
    pub const GlGetTexLevelParameterfv = glGetTexLevelParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexLevelParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameteriv` instead
    ///
    pub const GlGetTexParameteriv = glGetTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterfv` instead
    ///
    pub const GlGetTexParameterfv = glGetTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexImage` instead
    ///
    pub const GlGetTexImage = glGetTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetTexImage(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glGetString` instead
    ///
    pub const GlGetString = glGetString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` name: u32 `
    ///
    pub fn glGetString(self: QOpenGLFunctions_4_4_Compatibility, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_4_Compatibility_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glGetIntegerv` instead
    ///
    pub const GlGetIntegerv = glGetIntegerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn glGetIntegerv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, data: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatv` instead
    ///
    pub const GlGetFloatv = glGetFloatv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` data: []f32 `
    ///
    pub fn glGetFloatv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, data: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetDoublev` instead
    ///
    pub const GlGetDoublev = glGetDoublev;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` data: []f64 `
    ///
    pub fn glGetDoublev(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, data: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleanv` instead
    ///
    pub const GlGetBooleanv = glGetBooleanv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn glGetBooleanv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, data: []u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### DEPRECATED: Use `glReadPixels` instead
    ///
    pub const GlReadPixels = glReadPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glReadPixels(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glReadBuffer` instead
    ///
    pub const GlReadBuffer = glReadBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` src: u32 `
    ///
    pub fn glReadBuffer(self: QOpenGLFunctions_4_4_Compatibility, src: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlReadBuffer(@ptrCast(self.ptr), @bitCast(src));
    }

    /// ### DEPRECATED: Use `glPixelStorei` instead
    ///
    pub const GlPixelStorei = glPixelStorei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelStorei(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelStoref` instead
    ///
    pub const GlPixelStoref = glPixelStoref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelStoref(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glDepthFunc` instead
    ///
    pub const GlDepthFunc = glDepthFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` func: u32 `
    ///
    pub fn glDepthFunc(self: QOpenGLFunctions_4_4_Compatibility, func: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### DEPRECATED: Use `glStencilOp` instead
    ///
    pub const GlStencilOp = glStencilOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn glStencilOp(self: QOpenGLFunctions_4_4_Compatibility, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glStencilFunc` instead
    ///
    pub const GlStencilFunc = glStencilFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFunc(self: QOpenGLFunctions_4_4_Compatibility, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glLogicOp` instead
    ///
    pub const GlLogicOp = glLogicOp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` opcode: u32 `
    ///
    pub fn glLogicOp(self: QOpenGLFunctions_4_4_Compatibility, opcode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### DEPRECATED: Use `glBlendFunc` instead
    ///
    pub const GlBlendFunc = glBlendFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn glBlendFunc(self: QOpenGLFunctions_4_4_Compatibility, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### DEPRECATED: Use `glFlush` instead
    ///
    pub const GlFlush = glFlush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glFlush(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFlush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFinish` instead
    ///
    pub const GlFinish = glFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glFinish(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEnable` instead
    ///
    pub const GlEnable = glEnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` cap: u32 `
    ///
    pub fn glEnable(self: QOpenGLFunctions_4_4_Compatibility, cap: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDisable` instead
    ///
    pub const GlDisable = glDisable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` cap: u32 `
    ///
    pub fn glDisable(self: QOpenGLFunctions_4_4_Compatibility, cap: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDepthMask` instead
    ///
    pub const GlDepthMask = glDepthMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` flag: u8 `
    ///
    pub fn glDepthMask(self: QOpenGLFunctions_4_4_Compatibility, flag: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColorMask` instead
    ///
    pub const GlColorMask = glColorMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColorMask(self: QOpenGLFunctions_4_4_Compatibility, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glStencilMask` instead
    ///
    pub const GlStencilMask = glStencilMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMask(self: QOpenGLFunctions_4_4_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearDepth` instead
    ///
    pub const GlClearDepth = glClearDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` depth: f64 `
    ///
    pub fn glClearDepth(self: QOpenGLFunctions_4_4_Compatibility, depth: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glClearStencil` instead
    ///
    pub const GlClearStencil = glClearStencil;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i32 `
    ///
    pub fn glClearStencil(self: QOpenGLFunctions_4_4_Compatibility, s: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glClearColor` instead
    ///
    pub const GlClearColor = glClearColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearColor(self: QOpenGLFunctions_4_4_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glClear` instead
    ///
    pub const GlClear = glClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn glClear(self: QOpenGLFunctions_4_4_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glDrawBuffer` instead
    ///
    pub const GlDrawBuffer = glDrawBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buf: u32 `
    ///
    pub fn glDrawBuffer(self: QOpenGLFunctions_4_4_Compatibility, buf: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(buf));
    }

    /// ### DEPRECATED: Use `glTexImage2D` instead
    ///
    pub const GlTexImage2D = glTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexImage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage1D` instead
    ///
    pub const GlTexImage1D = glTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexImage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexParameteriv` instead
    ///
    pub const GlTexParameteriv = glTexParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameteri` instead
    ///
    pub const GlTexParameteri = glTexParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexParameteri(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameterfv` instead
    ///
    pub const GlTexParameterfv = glTexParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterf` instead
    ///
    pub const GlTexParameterf = glTexParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexParameterf(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glScissor` instead
    ///
    pub const GlScissor = glScissor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glScissor(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glPolygonMode` instead
    ///
    pub const GlPolygonMode = glPolygonMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glPolygonMode(self: QOpenGLFunctions_4_4_Compatibility, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPointSize` instead
    ///
    pub const GlPointSize = glPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: f32 `
    ///
    pub fn glPointSize(self: QOpenGLFunctions_4_4_Compatibility, size: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glLineWidth` instead
    ///
    pub const GlLineWidth = glLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` width: f32 `
    ///
    pub fn glLineWidth(self: QOpenGLFunctions_4_4_Compatibility, width: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glHint` instead
    ///
    pub const GlHint = glHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glHint(self: QOpenGLFunctions_4_4_Compatibility, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glFrontFace` instead
    ///
    pub const GlFrontFace = glFrontFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glFrontFace(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glCullFace` instead
    ///
    pub const GlCullFace = glCullFace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glCullFace(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glIsTexture` instead
    ///
    pub const GlIsTexture = glIsTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    pub fn glIsTexture(self: QOpenGLFunctions_4_4_Compatibility, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glGenTextures` instead
    ///
    pub const GlGenTextures = glGenTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn glGenTextures(self: QOpenGLFunctions_4_4_Compatibility, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteTextures` instead
    ///
    pub const GlDeleteTextures = glDeleteTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn glDeleteTextures(self: QOpenGLFunctions_4_4_Compatibility, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glBindTexture` instead
    ///
    pub const GlBindTexture = glBindTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn glBindTexture(self: QOpenGLFunctions_4_4_Compatibility, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glTexSubImage2D` instead
    ///
    pub const GlTexSubImage2D = glTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexSubImage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexSubImage1D` instead
    ///
    pub const GlTexSubImage1D = glTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexSubImage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage2D` instead
    ///
    pub const GlCopyTexSubImage2D = glCopyTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyTexSubImage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage1D` instead
    ///
    pub const GlCopyTexSubImage1D = glCopyTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyTexSubImage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glCopyTexImage2D` instead
    ///
    pub const GlCopyTexImage2D = glCopyTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyTexImage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glCopyTexImage1D` instead
    ///
    pub const GlCopyTexImage1D = glCopyTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyTexImage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glPolygonOffset` instead
    ///
    pub const GlPolygonOffset = glPolygonOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn glPolygonOffset(self: QOpenGLFunctions_4_4_Compatibility, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### DEPRECATED: Use `glDrawElements` instead
    ///
    pub const GlDrawElements = glDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn glDrawElements(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glDrawArrays` instead
    ///
    pub const GlDrawArrays = glDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn glDrawArrays(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### DEPRECATED: Use `glBlendColor` instead
    ///
    pub const GlBlendColor = glBlendColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glBlendColor(self: QOpenGLFunctions_4_4_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glBlendEquation` instead
    ///
    pub const GlBlendEquation = glBlendEquation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBlendEquation(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage3D` instead
    ///
    pub const GlCopyTexSubImage3D = glCopyTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyTexSubImage3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexSubImage3D` instead
    ///
    pub const GlTexSubImage3D = glTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexSubImage3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexImage3D` instead
    ///
    pub const GlTexImage3D = glTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexImage3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glDrawRangeElements` instead
    ///
    pub const GlDrawRangeElements = glDrawRangeElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawRangeElements(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glGetCompressedTexImage` instead
    ///
    pub const GlGetCompressedTexImage = glGetCompressedTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn glGetCompressedTexImage(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetCompressedTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage1D` instead
    ///
    pub const GlCompressedTexSubImage1D = glCompressedTexSubImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCompressedTexSubImage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompressedTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage2D` instead
    ///
    pub const GlCompressedTexSubImage2D = glCompressedTexSubImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCompressedTexSubImage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage3D` instead
    ///
    pub const GlCompressedTexSubImage3D = glCompressedTexSubImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCompressedTexSubImage3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage1D` instead
    ///
    pub const GlCompressedTexImage1D = glCompressedTexImage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCompressedTexImage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompressedTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage2D` instead
    ///
    pub const GlCompressedTexImage2D = glCompressedTexImage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCompressedTexImage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage3D` instead
    ///
    pub const GlCompressedTexImage3D = glCompressedTexImage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCompressedTexImage3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glSampleCoverage` instead
    ///
    pub const GlSampleCoverage = glSampleCoverage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn glSampleCoverage(self: QOpenGLFunctions_4_4_Compatibility, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSampleCoverage(@ptrCast(self.ptr), @bitCast(value), @bitCast(invert));
    }

    /// ### DEPRECATED: Use `glActiveTexture` instead
    ///
    pub const GlActiveTexture = glActiveTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    pub fn glActiveTexture(self: QOpenGLFunctions_4_4_Compatibility, texture: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glPointParameteriv` instead
    ///
    pub const GlPointParameteriv = glPointParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glPointParameteriv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPointParameteriv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glPointParameteri` instead
    ///
    pub const GlPointParameteri = glPointParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPointParameteri(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPointParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPointParameterfv` instead
    ///
    pub const GlPointParameterfv = glPointParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glPointParameterfv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPointParameterfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glPointParameterf` instead
    ///
    pub const GlPointParameterf = glPointParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPointParameterf(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPointParameterf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glMultiDrawElements` instead
    ///
    pub const GlMultiDrawElements = glMultiDrawElements;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiDrawElements(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiDrawElements(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### DEPRECATED: Use `glMultiDrawArrays` instead
    ///
    pub const GlMultiDrawArrays = glMultiDrawArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn glMultiDrawArrays(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiDrawArrays(@ptrCast(self.ptr), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparate` instead
    ///
    pub const GlBlendFuncSeparate = glBlendFuncSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn glBlendFuncSeparate(self: QOpenGLFunctions_4_4_Compatibility, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### DEPRECATED: Use `glGetBufferPointerv` instead
    ///
    pub const GlGetBufferPointerv = glGetBufferPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn glGetBufferPointerv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glGetBufferParameteriv` instead
    ///
    pub const GlGetBufferParameteriv = glGetBufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetBufferParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUnmapBuffer` instead
    ///
    pub const GlUnmapBuffer = glUnmapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn glUnmapBuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glMapBuffer` instead
    ///
    pub const GlMapBuffer = glMapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn glMapBuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlMapBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glGetBufferSubData` instead
    ///
    pub const GlGetBufferSubData = glGetBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn glGetBufferSubData(self: QOpenGLFunctions_4_4_Compatibility, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferSubData` instead
    ///
    pub const GlBufferSubData = glBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn glBufferSubData(self: QOpenGLFunctions_4_4_Compatibility, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferData` instead
    ///
    pub const GlBufferData = glBufferData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn glBufferData(self: QOpenGLFunctions_4_4_Compatibility, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### DEPRECATED: Use `glIsBuffer` instead
    ///
    pub const GlIsBuffer = glIsBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glIsBuffer(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glGenBuffers` instead
    ///
    pub const GlGenBuffers = glGenBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn glGenBuffers(self: QOpenGLFunctions_4_4_Compatibility, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteBuffers` instead
    ///
    pub const GlDeleteBuffers = glDeleteBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn glDeleteBuffers(self: QOpenGLFunctions_4_4_Compatibility, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindBuffer` instead
    ///
    pub const GlBindBuffer = glBindBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glBindBuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glGetQueryObjectuiv` instead
    ///
    pub const GlGetQueryObjectuiv = glGetQueryObjectuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetQueryObjectuiv(self: QOpenGLFunctions_4_4_Compatibility, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryObjectiv` instead
    ///
    pub const GlGetQueryObjectiv = glGetQueryObjectiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryObjectiv(self: QOpenGLFunctions_4_4_Compatibility, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetQueryObjectiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryiv` instead
    ///
    pub const GlGetQueryiv = glGetQueryiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryiv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glEndQuery` instead
    ///
    pub const GlEndQuery = glEndQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn glEndQuery(self: QOpenGLFunctions_4_4_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glBeginQuery` instead
    ///
    pub const GlBeginQuery = glBeginQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBeginQuery(self: QOpenGLFunctions_4_4_Compatibility, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glIsQuery` instead
    ///
    pub const GlIsQuery = glIsQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsQuery(self: QOpenGLFunctions_4_4_Compatibility, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glDeleteQueries` instead
    ///
    pub const GlDeleteQueries = glDeleteQueries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn glDeleteQueries(self: QOpenGLFunctions_4_4_Compatibility, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glGenQueries` instead
    ///
    pub const GlGenQueries = glGenQueries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn glGenQueries(self: QOpenGLFunctions_4_4_Compatibility, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribPointer` instead
    ///
    pub const GlVertexAttribPointer = glVertexAttribPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribPointer(self: QOpenGLFunctions_4_4_Compatibility, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glVertexAttrib4usv` instead
    ///
    pub const GlVertexAttrib4usv = glVertexAttrib4usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glVertexAttrib4usv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4usv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4uiv` instead
    ///
    pub const GlVertexAttrib4uiv = glVertexAttrib4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glVertexAttrib4uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4ubv` instead
    ///
    pub const GlVertexAttrib4ubv = glVertexAttrib4ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glVertexAttrib4ubv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4ubv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4sv` instead
    ///
    pub const GlVertexAttrib4sv = glVertexAttrib4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertexAttrib4sv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4s` instead
    ///
    pub const GlVertexAttrib4s = glVertexAttrib4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttrib4s(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttrib4iv` instead
    ///
    pub const GlVertexAttrib4iv = glVertexAttrib4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertexAttrib4iv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4fv` instead
    ///
    pub const GlVertexAttrib4fv = glVertexAttrib4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertexAttrib4fv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4f` instead
    ///
    pub const GlVertexAttrib4f = glVertexAttrib4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttrib4f(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttrib4dv` instead
    ///
    pub const GlVertexAttrib4dv = glVertexAttrib4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttrib4dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4d` instead
    ///
    pub const GlVertexAttrib4d = glVertexAttrib4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttrib4d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttrib4bv` instead
    ///
    pub const GlVertexAttrib4bv = glVertexAttrib4bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glVertexAttrib4bv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4bv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Nusv` instead
    ///
    pub const GlVertexAttrib4Nusv = glVertexAttrib4Nusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Nusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glVertexAttrib4Nusv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Nusv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Nuiv` instead
    ///
    pub const GlVertexAttrib4Nuiv = glVertexAttrib4Nuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Nuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glVertexAttrib4Nuiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Nuiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Nubv` instead
    ///
    pub const GlVertexAttrib4Nubv = glVertexAttrib4Nubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Nubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glVertexAttrib4Nubv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Nubv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Nub` instead
    ///
    pub const GlVertexAttrib4Nub = glVertexAttrib4Nub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Nub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttrib4Nub(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Nub(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Nsv` instead
    ///
    pub const GlVertexAttrib4Nsv = glVertexAttrib4Nsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Nsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertexAttrib4Nsv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Nsv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Niv` instead
    ///
    pub const GlVertexAttrib4Niv = glVertexAttrib4Niv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Niv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertexAttrib4Niv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Niv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4Nbv` instead
    ///
    pub const GlVertexAttrib4Nbv = glVertexAttrib4Nbv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib4Nbv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glVertexAttrib4Nbv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib4Nbv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib3sv` instead
    ///
    pub const GlVertexAttrib3sv = glVertexAttrib3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertexAttrib3sv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib3sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib3s` instead
    ///
    pub const GlVertexAttrib3s = glVertexAttrib3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glVertexAttrib3s(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib3s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttrib3fv` instead
    ///
    pub const GlVertexAttrib3fv = glVertexAttrib3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertexAttrib3fv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib3fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib3f` instead
    ///
    pub const GlVertexAttrib3f = glVertexAttrib3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glVertexAttrib3f(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib3f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttrib3dv` instead
    ///
    pub const GlVertexAttrib3dv = glVertexAttrib3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttrib3dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib3dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib3d` instead
    ///
    pub const GlVertexAttrib3d = glVertexAttrib3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glVertexAttrib3d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib3d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttrib2sv` instead
    ///
    pub const GlVertexAttrib2sv = glVertexAttrib2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertexAttrib2sv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib2sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib2s` instead
    ///
    pub const GlVertexAttrib2s = glVertexAttrib2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glVertexAttrib2s(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib2s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttrib2fv` instead
    ///
    pub const GlVertexAttrib2fv = glVertexAttrib2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertexAttrib2fv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib2fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib2f` instead
    ///
    pub const GlVertexAttrib2f = glVertexAttrib2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glVertexAttrib2f(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib2f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttrib2dv` instead
    ///
    pub const GlVertexAttrib2dv = glVertexAttrib2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttrib2dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib2dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib2d` instead
    ///
    pub const GlVertexAttrib2d = glVertexAttrib2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glVertexAttrib2d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib2d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttrib1sv` instead
    ///
    pub const GlVertexAttrib1sv = glVertexAttrib1sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertexAttrib1sv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib1sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib1s` instead
    ///
    pub const GlVertexAttrib1s = glVertexAttrib1s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    pub fn glVertexAttrib1s(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib1s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glVertexAttrib1fv` instead
    ///
    pub const GlVertexAttrib1fv = glVertexAttrib1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertexAttrib1fv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib1fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib1f` instead
    ///
    pub const GlVertexAttrib1f = glVertexAttrib1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    pub fn glVertexAttrib1f(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib1f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glVertexAttrib1dv` instead
    ///
    pub const GlVertexAttrib1dv = glVertexAttrib1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttrib1dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib1dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib1d` instead
    ///
    pub const GlVertexAttrib1d = glVertexAttrib1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttrib1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn glVertexAttrib1d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttrib1d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glValidateProgram` instead
    ///
    pub const GlValidateProgram = glValidateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn glValidateProgram(self: QOpenGLFunctions_4_4_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glUniformMatrix4fv` instead
    ///
    pub const GlUniformMatrix4fv = glUniformMatrix4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3fv` instead
    ///
    pub const GlUniformMatrix3fv = glUniformMatrix3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2fv` instead
    ///
    pub const GlUniformMatrix2fv = glUniformMatrix2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4iv` instead
    ///
    pub const GlUniform4iv = glUniform4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform4iv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3iv` instead
    ///
    pub const GlUniform3iv = glUniform3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform3iv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2iv` instead
    ///
    pub const GlUniform2iv = glUniform2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform2iv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1iv` instead
    ///
    pub const GlUniform1iv = glUniform1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glUniform1iv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4fv` instead
    ///
    pub const GlUniform4fv = glUniform4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform4fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3fv` instead
    ///
    pub const GlUniform3fv = glUniform3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform3fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2fv` instead
    ///
    pub const GlUniform2fv = glUniform2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform2fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1fv` instead
    ///
    pub const GlUniform1fv = glUniform1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniform1fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4i` instead
    ///
    pub const GlUniform4i = glUniform4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glUniform4i(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3i` instead
    ///
    pub const GlUniform3i = glUniform3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn glUniform3i(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2i` instead
    ///
    pub const GlUniform2i = glUniform2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn glUniform2i(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1i` instead
    ///
    pub const GlUniform1i = glUniform1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn glUniform1i(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUniform4f` instead
    ///
    pub const GlUniform4f = glUniform4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glUniform4f(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3f` instead
    ///
    pub const GlUniform3f = glUniform3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn glUniform3f(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2f` instead
    ///
    pub const GlUniform2f = glUniform2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn glUniform2f(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1f` instead
    ///
    pub const GlUniform1f = glUniform1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn glUniform1f(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUseProgram` instead
    ///
    pub const GlUseProgram = glUseProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn glUseProgram(self: QOpenGLFunctions_4_4_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glShaderSource` instead
    ///
    pub const GlShaderSource = glShaderSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glShaderSource(self: QOpenGLFunctions_4_4_Compatibility, allocator: std.mem.Allocator, shader: u32, count: i32, string: []const [:0]const u8, length: []const i32) void {
        const string_chararr = allocator.alloc([*:0]const u8, string.len) catch @panic("QOpenGLFunctions_4_4_Compatibility.glShaderSource: Memory allocation failed");
        defer allocator.free(string_chararr);
        for (string, 0..string.len) |str, i|
            string_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_4_Compatibility_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), @ptrCast(string_chararr), length.ptr);
    }

    /// ### DEPRECATED: Use `glLinkProgram` instead
    ///
    pub const GlLinkProgram = glLinkProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn glLinkProgram(self: QOpenGLFunctions_4_4_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glIsShader` instead
    ///
    pub const GlIsShader = glIsShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    pub fn glIsShader(self: QOpenGLFunctions_4_4_Compatibility, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glIsProgram` instead
    ///
    pub const GlIsProgram = glIsProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn glIsProgram(self: QOpenGLFunctions_4_4_Compatibility, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribPointerv` instead
    ///
    pub const GlGetVertexAttribPointerv = glGetVertexAttribPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn glGetVertexAttribPointerv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribiv` instead
    ///
    pub const GlGetVertexAttribiv = glGetVertexAttribiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetVertexAttribiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribfv` instead
    ///
    pub const GlGetVertexAttribfv = glGetVertexAttribfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetVertexAttribfv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribdv` instead
    ///
    pub const GlGetVertexAttribdv = glGetVertexAttribdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetVertexAttribdv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformiv` instead
    ///
    pub const GlGetUniformiv = glGetUniformiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetUniformiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformfv` instead
    ///
    pub const GlGetUniformfv = glGetUniformfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetUniformfv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformLocation` instead
    ///
    pub const GlGetUniformLocation = glGetUniformLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetUniformLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderSource` instead
    ///
    pub const GlGetShaderSource = glGetShaderSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn glGetShaderSource(self: QOpenGLFunctions_4_4_Compatibility, shader: u32, bufSize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderInfoLog` instead
    ///
    pub const GlGetShaderInfoLog = glGetShaderInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetShaderInfoLog(self: QOpenGLFunctions_4_4_Compatibility, shader: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderiv` instead
    ///
    pub const GlGetShaderiv = glGetShaderiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetShaderiv(self: QOpenGLFunctions_4_4_Compatibility, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramInfoLog` instead
    ///
    pub const GlGetProgramInfoLog = glGetProgramInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetProgramInfoLog(self: QOpenGLFunctions_4_4_Compatibility, program: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramiv` instead
    ///
    pub const GlGetProgramiv = glGetProgramiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetProgramiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetAttribLocation` instead
    ///
    pub const GlGetAttribLocation = glGetAttribLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetAttribLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetAttachedShaders` instead
    ///
    pub const GlGetAttachedShaders = glGetAttachedShaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` maxCount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` shaders: []u32 `
    ///
    pub fn glGetAttachedShaders(self: QOpenGLFunctions_4_4_Compatibility, program: u32, maxCount: i32, count: []i32, shaders: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxCount), count.ptr, shaders.ptr);
    }

    /// ### DEPRECATED: Use `glEnableVertexAttribArray` instead
    ///
    pub const GlEnableVertexAttribArray = glEnableVertexAttribArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    pub fn glEnableVertexAttribArray(self: QOpenGLFunctions_4_4_Compatibility, index: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisableVertexAttribArray` instead
    ///
    pub const GlDisableVertexAttribArray = glDisableVertexAttribArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    pub fn glDisableVertexAttribArray(self: QOpenGLFunctions_4_4_Compatibility, index: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDetachShader` instead
    ///
    pub const GlDetachShader = glDetachShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glDetachShader(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDeleteShader` instead
    ///
    pub const GlDeleteShader = glDeleteShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    pub fn glDeleteShader(self: QOpenGLFunctions_4_4_Compatibility, shader: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDeleteProgram` instead
    ///
    pub const GlDeleteProgram = glDeleteProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn glDeleteProgram(self: QOpenGLFunctions_4_4_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glCreateShader` instead
    ///
    pub const GlCreateShader = glCreateShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn glCreateShader(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glCreateProgram` instead
    ///
    pub const GlCreateProgram = glCreateProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glCreateProgram(self: QOpenGLFunctions_4_4_Compatibility) u32 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glCompileShader` instead
    ///
    pub const GlCompileShader = glCompileShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    pub fn glCompileShader(self: QOpenGLFunctions_4_4_Compatibility, shader: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glBindAttribLocation` instead
    ///
    pub const GlBindAttribLocation = glBindAttribLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindAttribLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### DEPRECATED: Use `glAttachShader` instead
    ///
    pub const GlAttachShader = glAttachShader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn glAttachShader(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glStencilMaskSeparate` instead
    ///
    pub const GlStencilMaskSeparate = glStencilMaskSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilMaskSeparate(self: QOpenGLFunctions_4_4_Compatibility, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilFuncSeparate` instead
    ///
    pub const GlStencilFuncSeparate = glStencilFuncSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glStencilFuncSeparate(self: QOpenGLFunctions_4_4_Compatibility, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilOpSeparate` instead
    ///
    pub const GlStencilOpSeparate = glStencilOpSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` sfail: u32 `
    ///
    /// ` dpfail: u32 `
    ///
    /// ` dppass: u32 `
    ///
    pub fn glStencilOpSeparate(self: QOpenGLFunctions_4_4_Compatibility, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparate` instead
    ///
    pub const GlBlendEquationSeparate = glBlendEquationSeparate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn glBlendEquationSeparate(self: QOpenGLFunctions_4_4_Compatibility, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x3fv` instead
    ///
    pub const GlUniformMatrix4x3fv = glUniformMatrix4x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4x3fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x4fv` instead
    ///
    pub const GlUniformMatrix3x4fv = glUniformMatrix3x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3x4fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x2fv` instead
    ///
    pub const GlUniformMatrix4x2fv = glUniformMatrix4x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix4x2fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x4fv` instead
    ///
    pub const GlUniformMatrix2x4fv = glUniformMatrix2x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2x4fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x2fv` instead
    ///
    pub const GlUniformMatrix3x2fv = glUniformMatrix3x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix3x2fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x3fv` instead
    ///
    pub const GlUniformMatrix2x3fv = glUniformMatrix2x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glUniformMatrix2x3fv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glIsVertexArray` instead
    ///
    pub const GlIsVertexArray = glIsVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn glIsVertexArray(self: QOpenGLFunctions_4_4_Compatibility, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glGenVertexArrays` instead
    ///
    pub const GlGenVertexArrays = glGenVertexArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn glGenVertexArrays(self: QOpenGLFunctions_4_4_Compatibility, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteVertexArrays` instead
    ///
    pub const GlDeleteVertexArrays = glDeleteVertexArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn glDeleteVertexArrays(self: QOpenGLFunctions_4_4_Compatibility, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glBindVertexArray` instead
    ///
    pub const GlBindVertexArray = glBindVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn glBindVertexArray(self: QOpenGLFunctions_4_4_Compatibility, array: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glFlushMappedBufferRange` instead
    ///
    pub const GlFlushMappedBufferRange = glFlushMappedBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn glFlushMappedBufferRange(self: QOpenGLFunctions_4_4_Compatibility, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glMapBufferRange` instead
    ///
    pub const GlMapBufferRange = glMapBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn glMapBufferRange(self: QOpenGLFunctions_4_4_Compatibility, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glFramebufferTextureLayer` instead
    ///
    pub const GlFramebufferTextureLayer = glFramebufferTextureLayer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glFramebufferTextureLayer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### DEPRECATED: Use `glRenderbufferStorageMultisample` instead
    ///
    pub const GlRenderbufferStorageMultisample = glRenderbufferStorageMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glRenderbufferStorageMultisample(self: QOpenGLFunctions_4_4_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glBlitFramebuffer` instead
    ///
    pub const GlBlitFramebuffer = glBlitFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glBlitFramebuffer(self: QOpenGLFunctions_4_4_Compatibility, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `glGenerateMipmap` instead
    ///
    pub const GlGenerateMipmap = glGenerateMipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn glGenerateMipmap(self: QOpenGLFunctions_4_4_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetFramebufferAttachmentParameteriv` instead
    ///
    pub const GlGetFramebufferAttachmentParameteriv = glGetFramebufferAttachmentParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetFramebufferAttachmentParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFramebufferRenderbuffer` instead
    ///
    pub const GlFramebufferRenderbuffer = glFramebufferRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glFramebufferRenderbuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture3D` instead
    ///
    pub const GlFramebufferTexture3D = glFramebufferTexture3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glFramebufferTexture3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferTexture3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture2D` instead
    ///
    pub const GlFramebufferTexture2D = glFramebufferTexture2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glFramebufferTexture2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture1D` instead
    ///
    pub const GlFramebufferTexture1D = glFramebufferTexture1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glFramebufferTexture1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferTexture1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glGenFramebuffers` instead
    ///
    pub const GlGenFramebuffers = glGenFramebuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn glGenFramebuffers(self: QOpenGLFunctions_4_4_Compatibility, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteFramebuffers` instead
    ///
    pub const GlDeleteFramebuffers = glDeleteFramebuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn glDeleteFramebuffers(self: QOpenGLFunctions_4_4_Compatibility, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindFramebuffer` instead
    ///
    pub const GlBindFramebuffer = glBindFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn glBindFramebuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glIsFramebuffer` instead
    ///
    pub const GlIsFramebuffer = glIsFramebuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn glIsFramebuffer(self: QOpenGLFunctions_4_4_Compatibility, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glGetRenderbufferParameteriv` instead
    ///
    pub const GlGetRenderbufferParameteriv = glGetRenderbufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetRenderbufferParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glRenderbufferStorage` instead
    ///
    pub const GlRenderbufferStorage = glRenderbufferStorage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn glRenderbufferStorage(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glGenRenderbuffers` instead
    ///
    pub const GlGenRenderbuffers = glGenRenderbuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn glGenRenderbuffers(self: QOpenGLFunctions_4_4_Compatibility, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteRenderbuffers` instead
    ///
    pub const GlDeleteRenderbuffers = glDeleteRenderbuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn glDeleteRenderbuffers(self: QOpenGLFunctions_4_4_Compatibility, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glBindRenderbuffer` instead
    ///
    pub const GlBindRenderbuffer = glBindRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glBindRenderbuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glIsRenderbuffer` instead
    ///
    pub const GlIsRenderbuffer = glIsRenderbuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn glIsRenderbuffer(self: QOpenGLFunctions_4_4_Compatibility, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glGetStringi` instead
    ///
    pub const GlGetStringi = glGetStringi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glGetStringi(self: QOpenGLFunctions_4_4_Compatibility, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_4_4_Compatibility_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glClearBufferfi` instead
    ///
    pub const GlClearBufferfi = glClearBufferfi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn glClearBufferfi(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### DEPRECATED: Use `glClearBufferfv` instead
    ///
    pub const GlClearBufferfv = glClearBufferfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glClearBufferfv(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferuiv` instead
    ///
    pub const GlClearBufferuiv = glClearBufferuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glClearBufferuiv(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferiv` instead
    ///
    pub const GlClearBufferiv = glClearBufferiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glClearBufferiv(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIuiv` instead
    ///
    pub const GlGetTexParameterIuiv = glGetTexParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetTexParameterIuiv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIiv` instead
    ///
    pub const GlGetTexParameterIiv = glGetTexParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexParameterIiv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIuiv` instead
    ///
    pub const GlTexParameterIuiv = glTexParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn glTexParameterIuiv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIiv` instead
    ///
    pub const GlTexParameterIiv = glTexParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexParameterIiv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4uiv` instead
    ///
    pub const GlUniform4uiv = glUniform4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform4uiv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3uiv` instead
    ///
    pub const GlUniform3uiv = glUniform3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform3uiv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2uiv` instead
    ///
    pub const GlUniform2uiv = glUniform2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform2uiv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1uiv` instead
    ///
    pub const GlUniform1uiv = glUniform1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glUniform1uiv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4ui` instead
    ///
    pub const GlUniform4ui = glUniform4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glUniform4ui(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform3ui` instead
    ///
    pub const GlUniform3ui = glUniform3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn glUniform3ui(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform2ui` instead
    ///
    pub const GlUniform2ui = glUniform2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn glUniform2ui(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform1ui` instead
    ///
    pub const GlUniform1ui = glUniform1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn glUniform1ui(self: QOpenGLFunctions_4_4_Compatibility, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glGetFragDataLocation` instead
    ///
    pub const GlGetFragDataLocation = glGetFragDataLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetFragDataLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glBindFragDataLocation` instead
    ///
    pub const GlBindFragDataLocation = glBindFragDataLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindFragDataLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindFragDataLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetUniformuiv` instead
    ///
    pub const GlGetUniformuiv = glGetUniformuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetUniformuiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4usv` instead
    ///
    pub const GlVertexAttribI4usv = glVertexAttribI4usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glVertexAttribI4usv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4usv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4ubv` instead
    ///
    pub const GlVertexAttribI4ubv = glVertexAttribI4ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glVertexAttribI4ubv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4ubv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4sv` instead
    ///
    pub const GlVertexAttribI4sv = glVertexAttribI4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertexAttribI4sv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4bv` instead
    ///
    pub const GlVertexAttribI4bv = glVertexAttribI4bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glVertexAttribI4bv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4bv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4uiv` instead
    ///
    pub const GlVertexAttribI4uiv = glVertexAttribI4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glVertexAttribI4uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI3uiv` instead
    ///
    pub const GlVertexAttribI3uiv = glVertexAttribI3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glVertexAttribI3uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI3uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI2uiv` instead
    ///
    pub const GlVertexAttribI2uiv = glVertexAttribI2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glVertexAttribI2uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI2uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI1uiv` instead
    ///
    pub const GlVertexAttribI1uiv = glVertexAttribI1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glVertexAttribI1uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI1uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4iv` instead
    ///
    pub const GlVertexAttribI4iv = glVertexAttribI4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertexAttribI4iv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI3iv` instead
    ///
    pub const GlVertexAttribI3iv = glVertexAttribI3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertexAttribI3iv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI3iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI2iv` instead
    ///
    pub const GlVertexAttribI2iv = glVertexAttribI2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertexAttribI2iv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI2iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI1iv` instead
    ///
    pub const GlVertexAttribI1iv = glVertexAttribI1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertexAttribI1iv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI1iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4ui` instead
    ///
    pub const GlVertexAttribI4ui = glVertexAttribI4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribI4ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttribI3ui` instead
    ///
    pub const GlVertexAttribI3ui = glVertexAttribI3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    /// ` z: u32 `
    ///
    pub fn glVertexAttribI3ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: u32, y: u32, z: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI3ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttribI2ui` instead
    ///
    pub const GlVertexAttribI2ui = glVertexAttribI2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    pub fn glVertexAttribI2ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: u32, y: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI2ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttribI1ui` instead
    ///
    pub const GlVertexAttribI1ui = glVertexAttribI1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    pub fn glVertexAttribI1ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI1ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glVertexAttribI4i` instead
    ///
    pub const GlVertexAttribI4i = glVertexAttribI4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribI4i(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI4i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttribI3i` instead
    ///
    pub const GlVertexAttribI3i = glVertexAttribI3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glVertexAttribI3i(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI3i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttribI2i` instead
    ///
    pub const GlVertexAttribI2i = glVertexAttribI2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glVertexAttribI2i(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI2i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttribI1i` instead
    ///
    pub const GlVertexAttribI1i = glVertexAttribI1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribI1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    pub fn glVertexAttribI1i(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribI1i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIuiv` instead
    ///
    pub const GlGetVertexAttribIuiv = glGetVertexAttribIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetVertexAttribIuiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIiv` instead
    ///
    pub const GlGetVertexAttribIiv = glGetVertexAttribIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetVertexAttribIiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribIPointer` instead
    ///
    pub const GlVertexAttribIPointer = glVertexAttribIPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribIPointer(self: QOpenGLFunctions_4_4_Compatibility, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glEndConditionalRender` instead
    ///
    pub const GlEndConditionalRender = glEndConditionalRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glEndConditionalRender(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEndConditionalRender(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBeginConditionalRender` instead
    ///
    pub const GlBeginConditionalRender = glBeginConditionalRender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBeginConditionalRender(self: QOpenGLFunctions_4_4_Compatibility, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBeginConditionalRender(@ptrCast(self.ptr), @bitCast(id), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glClampColor` instead
    ///
    pub const GlClampColor = glClampColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn glClampColor(self: QOpenGLFunctions_4_4_Compatibility, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClampColor(@ptrCast(self.ptr), @bitCast(target), @bitCast(clamp));
    }

    /// ### DEPRECATED: Use `glTransformFeedbackVaryings` instead
    ///
    pub const GlTransformFeedbackVaryings = glTransformFeedbackVaryings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTransformFeedbackVaryings(self: QOpenGLFunctions_4_4_Compatibility, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*:0]const u8, varyings.len) catch @panic("QOpenGLFunctions_4_4_Compatibility.glTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), @ptrCast(varyings_chararr), @bitCast(bufferMode));
    }

    /// ### DEPRECATED: Use `glBindBufferBase` instead
    ///
    pub const GlBindBufferBase = glBindBufferBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glBindBufferBase(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glBindBufferRange` instead
    ///
    pub const GlBindBufferRange = glBindBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glBindBufferRange(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glEndTransformFeedback` instead
    ///
    pub const GlEndTransformFeedback = glEndTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glEndTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBeginTransformFeedback` instead
    ///
    pub const GlBeginTransformFeedback = glBeginTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn glBeginTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### DEPRECATED: Use `glIsEnabledi` instead
    ///
    pub const GlIsEnabledi = glIsEnabledi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glIsEnabledi(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisablei` instead
    ///
    pub const GlDisablei = glDisablei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glDisablei(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glEnablei` instead
    ///
    pub const GlEnablei = glEnablei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glEnablei(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glGetIntegeriV` instead
    ///
    pub const GlGetIntegeriV = glGetIntegeriV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn glGetIntegeriV(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleaniV` instead
    ///
    pub const GlGetBooleaniV = glGetBooleaniV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn glGetBooleaniV(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glColorMaski` instead
    ///
    pub const GlColorMaski = glColorMaski;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glColorMaski(self: QOpenGLFunctions_4_4_Compatibility, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `glUniformBlockBinding` instead
    ///
    pub const GlUniformBlockBinding = glUniformBlockBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn glUniformBlockBinding(self: QOpenGLFunctions_4_4_Compatibility, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockName` instead
    ///
    pub const GlGetActiveUniformBlockName = glGetActiveUniformBlockName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetActiveUniformBlockName(self: QOpenGLFunctions_4_4_Compatibility, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockiv` instead
    ///
    pub const GlGetActiveUniformBlockiv = glGetActiveUniformBlockiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetActiveUniformBlockiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformBlockIndex` instead
    ///
    pub const GlGetUniformBlockIndex = glGetUniformBlockIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn glGetUniformBlockIndex(self: QOpenGLFunctions_4_4_Compatibility, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformName` instead
    ///
    pub const GlGetActiveUniformName = glGetActiveUniformName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetActiveUniformName(self: QOpenGLFunctions_4_4_Compatibility, program: u32, uniformIndex: u32, bufSize: i32, length: []i32, uniformName: [:0]u8) void {
        const uniformName_Cstring = uniformName.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformIndex), @bitCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformsiv` instead
    ///
    pub const GlGetActiveUniformsiv = glGetActiveUniformsiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetActiveUniformsiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformIndices` instead
    ///
    pub const GlGetUniformIndices = glGetUniformIndices;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetUniformIndices(self: QOpenGLFunctions_4_4_Compatibility, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*:0]const u8, uniformNames.len) catch @panic("QOpenGLFunctions_4_4_Compatibility.glGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), @ptrCast(uniformNames_chararr), uniformIndices.ptr);
    }

    /// ### DEPRECATED: Use `glCopyBufferSubData` instead
    ///
    pub const GlCopyBufferSubData = glCopyBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyBufferSubData(self: QOpenGLFunctions_4_4_Compatibility, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glPrimitiveRestartIndex` instead
    ///
    pub const GlPrimitiveRestartIndex = glPrimitiveRestartIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    pub fn glPrimitiveRestartIndex(self: QOpenGLFunctions_4_4_Compatibility, index: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPrimitiveRestartIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glTexBuffer` instead
    ///
    pub const GlTexBuffer = glTexBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glTexBuffer(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstanced` instead
    ///
    pub const GlDrawElementsInstanced = glDrawElementsInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawElementsInstanced(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawArraysInstanced` instead
    ///
    pub const GlDrawArraysInstanced = glDrawArraysInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawArraysInstanced(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glSampleMaski` instead
    ///
    pub const GlSampleMaski = glSampleMaski;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` maskNumber: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn glSampleMaski(self: QOpenGLFunctions_4_4_Compatibility, maskNumber: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSampleMaski(@ptrCast(self.ptr), @bitCast(maskNumber), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glGetMultisamplefv` instead
    ///
    pub const GlGetMultisamplefv = glGetMultisamplefv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn glGetMultisamplefv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMultisamplefv(@ptrCast(self.ptr), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### DEPRECATED: Use `glTexImage3DMultisample` instead
    ///
    pub const GlTexImage3DMultisample = glTexImage3DMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexImage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexImage3DMultisample(self: QOpenGLFunctions_4_4_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexImage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glTexImage2DMultisample` instead
    ///
    pub const GlTexImage2DMultisample = glTexImage2DMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexImage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexImage2DMultisample(self: QOpenGLFunctions_4_4_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexImage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture` instead
    ///
    pub const GlFramebufferTexture = glFramebufferTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn glFramebufferTexture(self: QOpenGLFunctions_4_4_Compatibility, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glGetBufferParameteri64v` instead
    ///
    pub const GlGetBufferParameteri64v = glGetBufferParameteri64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn glGetBufferParameteri64v(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetBufferParameteri64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetInteger64iV` instead
    ///
    pub const GlGetInteger64iV = glGetInteger64iV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn glGetInteger64iV(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetInteger64iV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetInteger64v` instead
    ///
    pub const GlGetInteger64v = glGetInteger64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn glGetInteger64v(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, data: []i64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetInteger64v(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### DEPRECATED: Use `glProvokingVertex` instead
    ///
    pub const GlProvokingVertex = glProvokingVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProvokingVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glProvokingVertex(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProvokingVertex(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glMultiDrawElementsBaseVertex` instead
    ///
    pub const GlMultiDrawElementsBaseVertex = glMultiDrawElementsBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiDrawElementsBaseVertex(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32, basevertex: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount), basevertex.ptr);
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseVertex` instead
    ///
    pub const GlDrawElementsInstancedBaseVertex = glDrawElementsInstancedBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawElementsInstancedBaseVertex(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElementsInstancedBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glDrawRangeElementsBaseVertex` instead
    ///
    pub const GlDrawRangeElementsBaseVertex = glDrawRangeElementsBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawRangeElementsBaseVertex(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawRangeElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glDrawElementsBaseVertex` instead
    ///
    pub const GlDrawElementsBaseVertex = glDrawElementsBaseVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawElementsBaseVertex(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glVertexAttribP4uiv` instead
    ///
    pub const GlVertexAttribP4uiv = glVertexAttribP4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP4uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP4uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP4ui` instead
    ///
    pub const GlVertexAttribP4ui = glVertexAttribP4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP4ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribP3uiv` instead
    ///
    pub const GlVertexAttribP3uiv = glVertexAttribP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP3uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP3uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP3ui` instead
    ///
    pub const GlVertexAttribP3ui = glVertexAttribP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP3ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP3ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribP2uiv` instead
    ///
    pub const GlVertexAttribP2uiv = glVertexAttribP2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP2uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP2uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP2ui` instead
    ///
    pub const GlVertexAttribP2ui = glVertexAttribP2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP2ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP2ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribP1uiv` instead
    ///
    pub const GlVertexAttribP1uiv = glVertexAttribP1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexAttribP1uiv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP1uiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribP1ui` instead
    ///
    pub const GlVertexAttribP1ui = glVertexAttribP1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexAttribP1ui(self: QOpenGLFunctions_4_4_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribP1ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(typeVal), @bitCast(normalized), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexAttribDivisor` instead
    ///
    pub const GlVertexAttribDivisor = glVertexAttribDivisor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn glVertexAttribDivisor(self: QOpenGLFunctions_4_4_Compatibility, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribDivisor(@ptrCast(self.ptr), @bitCast(index), @bitCast(divisor));
    }

    /// ### DEPRECATED: Use `glGetQueryObjectui64v` instead
    ///
    pub const GlGetQueryObjectui64v = glGetQueryObjectui64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetQueryObjectui64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u64 `
    ///
    pub fn glGetQueryObjectui64v(self: QOpenGLFunctions_4_4_Compatibility, id: u32, pname: u32, params: []u64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetQueryObjectui64v(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryObjecti64v` instead
    ///
    pub const GlGetQueryObjecti64v = glGetQueryObjecti64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetQueryObjecti64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn glGetQueryObjecti64v(self: QOpenGLFunctions_4_4_Compatibility, id: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetQueryObjecti64v(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glQueryCounter` instead
    ///
    pub const GlQueryCounter = glQueryCounter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glQueryCounter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` target: u32 `
    ///
    pub fn glQueryCounter(self: QOpenGLFunctions_4_4_Compatibility, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlQueryCounter(@ptrCast(self.ptr), @bitCast(id), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterIuiv` instead
    ///
    pub const GlGetSamplerParameterIuiv = glGetSamplerParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetSamplerParameterIuiv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterfv` instead
    ///
    pub const GlGetSamplerParameterfv = glGetSamplerParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetSamplerParameterfv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterIiv` instead
    ///
    pub const GlGetSamplerParameterIiv = glGetSamplerParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetSamplerParameterIiv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameteriv` instead
    ///
    pub const GlGetSamplerParameteriv = glGetSamplerParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetSamplerParameteriv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterIuiv` instead
    ///
    pub const GlSamplerParameterIuiv = glSamplerParameterIuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const u32 `
    ///
    pub fn glSamplerParameterIuiv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterIiv` instead
    ///
    pub const GlSamplerParameterIiv = glSamplerParameterIiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn glSamplerParameterIiv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterfv` instead
    ///
    pub const GlSamplerParameterfv = glSamplerParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const f32 `
    ///
    pub fn glSamplerParameterfv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterf` instead
    ///
    pub const GlSamplerParameterf = glSamplerParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSamplerParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glSamplerParameterf(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSamplerParameterf(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glSamplerParameteriv` instead
    ///
    pub const GlSamplerParameteriv = glSamplerParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn glSamplerParameteriv(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameteri` instead
    ///
    pub const GlSamplerParameteri = glSamplerParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSamplerParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glSamplerParameteri(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSamplerParameteri(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glBindSampler` instead
    ///
    pub const GlBindSampler = glBindSampler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` unit: u32 `
    ///
    /// ` sampler: u32 `
    ///
    pub fn glBindSampler(self: QOpenGLFunctions_4_4_Compatibility, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindSampler(@ptrCast(self.ptr), @bitCast(unit), @bitCast(sampler));
    }

    /// ### DEPRECATED: Use `glIsSampler` instead
    ///
    pub const GlIsSampler = glIsSampler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` sampler: u32 `
    ///
    pub fn glIsSampler(self: QOpenGLFunctions_4_4_Compatibility, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsSampler(@ptrCast(self.ptr), @bitCast(sampler));
    }

    /// ### DEPRECATED: Use `glDeleteSamplers` instead
    ///
    pub const GlDeleteSamplers = glDeleteSamplers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn glDeleteSamplers(self: QOpenGLFunctions_4_4_Compatibility, count: i32, samplers: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glGenSamplers` instead
    ///
    pub const GlGenSamplers = glGenSamplers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []u32 `
    ///
    pub fn glGenSamplers(self: QOpenGLFunctions_4_4_Compatibility, count: i32, samplers: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glGetFragDataIndex` instead
    ///
    pub const GlGetFragDataIndex = glGetFragDataIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetFragDataIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetFragDataIndex(self: QOpenGLFunctions_4_4_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetFragDataIndex(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glBindFragDataLocationIndexed` instead
    ///
    pub const GlBindFragDataLocationIndexed = glBindFragDataLocationIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindFragDataLocationIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` colorNumber: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glBindFragDataLocationIndexed(self: QOpenGLFunctions_4_4_Compatibility, program: u32, colorNumber: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindFragDataLocationIndexed(@ptrCast(self.ptr), @bitCast(program), @bitCast(colorNumber), @bitCast(index), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetQueryIndexediv` instead
    ///
    pub const GlGetQueryIndexediv = glGetQueryIndexediv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetQueryIndexediv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetQueryIndexediv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetQueryIndexediv(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glEndQueryIndexed` instead
    ///
    pub const GlEndQueryIndexed = glEndQueryIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEndQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn glEndQueryIndexed(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEndQueryIndexed(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glBeginQueryIndexed` instead
    ///
    pub const GlBeginQueryIndexed = glBeginQueryIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBeginQueryIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBeginQueryIndexed(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBeginQueryIndexed(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedbackStream` instead
    ///
    pub const GlDrawTransformFeedbackStream = glDrawTransformFeedbackStream;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawTransformFeedbackStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    pub fn glDrawTransformFeedbackStream(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawTransformFeedbackStream(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(stream));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedback` instead
    ///
    pub const GlDrawTransformFeedback = glDrawTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glDrawTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawTransformFeedback(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glResumeTransformFeedback` instead
    ///
    pub const GlResumeTransformFeedback = glResumeTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glResumeTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlResumeTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPauseTransformFeedback` instead
    ///
    pub const GlPauseTransformFeedback = glPauseTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPauseTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPauseTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glIsTransformFeedback` instead
    ///
    pub const GlIsTransformFeedback = glIsTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsTransformFeedback(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glGenTransformFeedbacks` instead
    ///
    pub const GlGenTransformFeedbacks = glGenTransformFeedbacks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn glGenTransformFeedbacks(self: QOpenGLFunctions_4_4_Compatibility, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteTransformFeedbacks` instead
    ///
    pub const GlDeleteTransformFeedbacks = glDeleteTransformFeedbacks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn glDeleteTransformFeedbacks(self: QOpenGLFunctions_4_4_Compatibility, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glBindTransformFeedback` instead
    ///
    pub const GlBindTransformFeedback = glBindTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn glBindTransformFeedback(self: QOpenGLFunctions_4_4_Compatibility, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindTransformFeedback(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glPatchParameterfv` instead
    ///
    pub const GlPatchParameterfv = glPatchParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPatchParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn glPatchParameterfv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPatchParameterfv(@ptrCast(self.ptr), @bitCast(pname), values.ptr);
    }

    /// ### DEPRECATED: Use `glPatchParameteri` instead
    ///
    pub const GlPatchParameteri = glPatchParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPatchParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn glPatchParameteri(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPatchParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glGetProgramStageiv` instead
    ///
    pub const GlGetProgramStageiv = glGetProgramStageiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramStageiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` values: []i32 `
    ///
    pub fn glGetProgramStageiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shadertype: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramStageiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(pname), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformSubroutineuiv` instead
    ///
    pub const GlGetUniformSubroutineuiv = glGetUniformSubroutineuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformSubroutineuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn glGetUniformSubroutineuiv(self: QOpenGLFunctions_4_4_Compatibility, shadertype: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformSubroutineuiv(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniformSubroutinesuiv` instead
    ///
    pub const GlUniformSubroutinesuiv = glUniformSubroutinesuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformSubroutinesuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` indices: []const u32 `
    ///
    pub fn glUniformSubroutinesuiv(self: QOpenGLFunctions_4_4_Compatibility, shadertype: u32, count: i32, indices: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformSubroutinesuiv(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(count), indices.ptr);
    }

    /// ### DEPRECATED: Use `glGetActiveSubroutineName` instead
    ///
    pub const GlGetActiveSubroutineName = glGetActiveSubroutineName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveSubroutineName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetActiveSubroutineName(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveSubroutineName(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveSubroutineUniformName` instead
    ///
    pub const GlGetActiveSubroutineUniformName = glGetActiveSubroutineUniformName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveSubroutineUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetActiveSubroutineUniformName(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shadertype: u32, index: u32, bufsize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveSubroutineUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(bufsize), length.ptr, name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveSubroutineUniformiv` instead
    ///
    pub const GlGetActiveSubroutineUniformiv = glGetActiveSubroutineUniformiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveSubroutineUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetActiveSubroutineUniformiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shadertype: u32, index: u32, pname: u32, values: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveSubroutineUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), @bitCast(index), @bitCast(pname), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetSubroutineIndex` instead
    ///
    pub const GlGetSubroutineIndex = glGetSubroutineIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSubroutineIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetSubroutineIndex(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shadertype: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSubroutineIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetSubroutineUniformLocation` instead
    ///
    pub const GlGetSubroutineUniformLocation = glGetSubroutineUniformLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSubroutineUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetSubroutineUniformLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, shadertype: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSubroutineUniformLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(shadertype), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetUniformdv` instead
    ///
    pub const GlGetUniformdv = glGetUniformdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetUniformdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetUniformdv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, params: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetUniformdv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x3dv` instead
    ///
    pub const GlUniformMatrix4x3dv = glUniformMatrix4x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix4x3dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix4x3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x2dv` instead
    ///
    pub const GlUniformMatrix4x2dv = glUniformMatrix4x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix4x2dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix4x2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x4dv` instead
    ///
    pub const GlUniformMatrix3x4dv = glUniformMatrix3x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix3x4dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix3x4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x2dv` instead
    ///
    pub const GlUniformMatrix3x2dv = glUniformMatrix3x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix3x2dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix3x2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x4dv` instead
    ///
    pub const GlUniformMatrix2x4dv = glUniformMatrix2x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix2x4dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix2x4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x3dv` instead
    ///
    pub const GlUniformMatrix2x3dv = glUniformMatrix2x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix2x3dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix2x3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4dv` instead
    ///
    pub const GlUniformMatrix4dv = glUniformMatrix4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix4dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3dv` instead
    ///
    pub const GlUniformMatrix3dv = glUniformMatrix3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix3dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2dv` instead
    ///
    pub const GlUniformMatrix2dv = glUniformMatrix2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniformMatrix2dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniformMatrix2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4dv` instead
    ///
    pub const GlUniform4dv = glUniform4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform4dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3dv` instead
    ///
    pub const GlUniform3dv = glUniform3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform3dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2dv` instead
    ///
    pub const GlUniform2dv = glUniform2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform2dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1dv` instead
    ///
    pub const GlUniform1dv = glUniform1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glUniform1dv(self: QOpenGLFunctions_4_4_Compatibility, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1dv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4d` instead
    ///
    pub const GlUniform4d = glUniform4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glUniform4d(self: QOpenGLFunctions_4_4_Compatibility, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform4d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glUniform3d` instead
    ///
    pub const GlUniform3d = glUniform3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glUniform3d(self: QOpenGLFunctions_4_4_Compatibility, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform3d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glUniform2d` instead
    ///
    pub const GlUniform2d = glUniform2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glUniform2d(self: QOpenGLFunctions_4_4_Compatibility, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform2d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glUniform1d` instead
    ///
    pub const GlUniform1d = glUniform1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f64 `
    ///
    pub fn glUniform1d(self: QOpenGLFunctions_4_4_Compatibility, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUniform1d(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glDrawElementsIndirect` instead
    ///
    pub const GlDrawElementsIndirect = glDrawElementsIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn glDrawElementsIndirect(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElementsIndirect(@ptrCast(self.ptr), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect));
    }

    /// ### DEPRECATED: Use `glDrawArraysIndirect` instead
    ///
    pub const GlDrawArraysIndirect = glDrawArraysIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn glDrawArraysIndirect(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawArraysIndirect(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(indirect));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparatei` instead
    ///
    pub const GlBlendFuncSeparatei = glBlendFuncSeparatei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendFuncSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glBlendFuncSeparatei(self: QOpenGLFunctions_4_4_Compatibility, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendFuncSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### DEPRECATED: Use `glBlendFunci` instead
    ///
    pub const GlBlendFunci = glBlendFunci;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendFunci)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buf: u32 `
    ///
    /// ` src: u32 `
    ///
    /// ` dst: u32 `
    ///
    pub fn glBlendFunci(self: QOpenGLFunctions_4_4_Compatibility, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendFunci(@ptrCast(self.ptr), @bitCast(buf), @bitCast(src), @bitCast(dst));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparatei` instead
    ///
    pub const GlBlendEquationSeparatei = glBlendEquationSeparatei;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendEquationSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buf: u32 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn glBlendEquationSeparatei(self: QOpenGLFunctions_4_4_Compatibility, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendEquationSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glBlendEquationi` instead
    ///
    pub const GlBlendEquationi = glBlendEquationi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBlendEquationi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buf: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBlendEquationi(self: QOpenGLFunctions_4_4_Compatibility, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBlendEquationi(@ptrCast(self.ptr), @bitCast(buf), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glMinSampleShading` instead
    ///
    pub const GlMinSampleShading = glMinSampleShading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` value: f32 `
    ///
    pub fn glMinSampleShading(self: QOpenGLFunctions_4_4_Compatibility, value: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMinSampleShading(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glGetDoubleiV` instead
    ///
    pub const GlGetDoubleiV = glGetDoubleiV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetDoublei_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f64 `
    ///
    pub fn glGetDoubleiV(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, data: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetDoubleiV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatiV` instead
    ///
    pub const GlGetFloatiV = glGetFloatiV;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetFloati_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []f32 `
    ///
    pub fn glGetFloatiV(self: QOpenGLFunctions_4_4_Compatibility, target: u32, index: u32, data: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetFloatiV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glDepthRangeIndexed` instead
    ///
    pub const GlDepthRangeIndexed = glDepthRangeIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDepthRangeIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` n: f64 `
    ///
    /// ` f: f64 `
    ///
    pub fn glDepthRangeIndexed(self: QOpenGLFunctions_4_4_Compatibility, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDepthRangeIndexed(@ptrCast(self.ptr), @bitCast(index), @bitCast(n), @bitCast(f));
    }

    /// ### DEPRECATED: Use `glDepthRangeArrayv` instead
    ///
    pub const GlDepthRangeArrayv = glDepthRangeArrayv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDepthRangeArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glDepthRangeArrayv(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDepthRangeArrayv(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glScissorIndexedv` instead
    ///
    pub const GlScissorIndexedv = glScissorIndexedv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glScissorIndexedv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glScissorIndexedv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlScissorIndexedv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glScissorIndexed` instead
    ///
    pub const GlScissorIndexed = glScissorIndexed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glScissorIndexed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glScissorIndexed(self: QOpenGLFunctions_4_4_Compatibility, index: u32, left: i32, bottom: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlScissorIndexed(@ptrCast(self.ptr), @bitCast(index), @bitCast(left), @bitCast(bottom), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glScissorArrayv` instead
    ///
    pub const GlScissorArrayv = glScissorArrayv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glScissorArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glScissorArrayv(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlScissorArrayv(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glViewportIndexedfv` instead
    ///
    pub const GlViewportIndexedfv = glViewportIndexedfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glViewportIndexedfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glViewportIndexedfv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlViewportIndexedfv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glViewportIndexedf` instead
    ///
    pub const GlViewportIndexedf = glViewportIndexedf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glViewportIndexedf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glViewportIndexedf(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f32, y: f32, w: f32, h: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlViewportIndexedf(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `glViewportArrayv` instead
    ///
    pub const GlViewportArrayv = glViewportArrayv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glViewportArrayv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glViewportArrayv(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlViewportArrayv(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribLdv` instead
    ///
    pub const GlGetVertexAttribLdv = glGetVertexAttribLdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetVertexAttribLdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetVertexAttribLdv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetVertexAttribLdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribLPointer` instead
    ///
    pub const GlVertexAttribLPointer = glVertexAttribLPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribLPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribLPointer(self: QOpenGLFunctions_4_4_Compatibility, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribLPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glVertexAttribL4dv` instead
    ///
    pub const GlVertexAttribL4dv = glVertexAttribL4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL4dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL4dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL3dv` instead
    ///
    pub const GlVertexAttribL3dv = glVertexAttribL3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL3dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL3dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL2dv` instead
    ///
    pub const GlVertexAttribL2dv = glVertexAttribL2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL2dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL2dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL1dv` instead
    ///
    pub const GlVertexAttribL1dv = glVertexAttribL1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertexAttribL1dv(self: QOpenGLFunctions_4_4_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL1dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribL4d` instead
    ///
    pub const GlVertexAttribL4d = glVertexAttribL4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribL4d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL4d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttribL3d` instead
    ///
    pub const GlVertexAttribL3d = glVertexAttribL3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glVertexAttribL3d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL3d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttribL2d` instead
    ///
    pub const GlVertexAttribL2d = glVertexAttribL2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glVertexAttribL2d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL2d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttribL1d` instead
    ///
    pub const GlVertexAttribL1d = glVertexAttribL1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribL1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn glVertexAttribL1d(self: QOpenGLFunctions_4_4_Compatibility, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribL1d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glGetProgramPipelineInfoLog` instead
    ///
    pub const GlGetProgramPipelineInfoLog = glGetProgramPipelineInfoLog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramPipelineInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn glGetProgramPipelineInfoLog(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramPipelineInfoLog(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glValidateProgramPipeline` instead
    ///
    pub const GlValidateProgramPipeline = glValidateProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glValidateProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glValidateProgramPipeline(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlValidateProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x3dv` instead
    ///
    pub const GlProgramUniformMatrix4x3dv = glProgramUniformMatrix4x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix4x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix4x3dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix4x3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x4dv` instead
    ///
    pub const GlProgramUniformMatrix3x4dv = glProgramUniformMatrix3x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix3x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix3x4dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix3x4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x2dv` instead
    ///
    pub const GlProgramUniformMatrix4x2dv = glProgramUniformMatrix4x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix4x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix4x2dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix4x2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x4dv` instead
    ///
    pub const GlProgramUniformMatrix2x4dv = glProgramUniformMatrix2x4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix2x4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix2x4dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix2x4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x2dv` instead
    ///
    pub const GlProgramUniformMatrix3x2dv = glProgramUniformMatrix3x2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix3x2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix3x2dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix3x2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x3dv` instead
    ///
    pub const GlProgramUniformMatrix2x3dv = glProgramUniformMatrix2x3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix2x3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix2x3dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix2x3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x3fv` instead
    ///
    pub const GlProgramUniformMatrix4x3fv = glProgramUniformMatrix4x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix4x3fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x4fv` instead
    ///
    pub const GlProgramUniformMatrix3x4fv = glProgramUniformMatrix3x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix3x4fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x2fv` instead
    ///
    pub const GlProgramUniformMatrix4x2fv = glProgramUniformMatrix4x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix4x2fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x4fv` instead
    ///
    pub const GlProgramUniformMatrix2x4fv = glProgramUniformMatrix2x4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix2x4fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x2fv` instead
    ///
    pub const GlProgramUniformMatrix3x2fv = glProgramUniformMatrix3x2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix3x2fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x3fv` instead
    ///
    pub const GlProgramUniformMatrix2x3fv = glProgramUniformMatrix2x3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix2x3fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4dv` instead
    ///
    pub const GlProgramUniformMatrix4dv = glProgramUniformMatrix4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix4dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3dv` instead
    ///
    pub const GlProgramUniformMatrix3dv = glProgramUniformMatrix3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix3dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2dv` instead
    ///
    pub const GlProgramUniformMatrix2dv = glProgramUniformMatrix2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix2dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4fv` instead
    ///
    pub const GlProgramUniformMatrix4fv = glProgramUniformMatrix4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix4fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3fv` instead
    ///
    pub const GlProgramUniformMatrix3fv = glProgramUniformMatrix3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix3fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2fv` instead
    ///
    pub const GlProgramUniformMatrix2fv = glProgramUniformMatrix2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniformMatrix2fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4uiv` instead
    ///
    pub const GlProgramUniform4uiv = glProgramUniform4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform4uiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4ui` instead
    ///
    pub const GlProgramUniform4ui = glProgramUniform4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform4ui(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform4dv` instead
    ///
    pub const GlProgramUniform4dv = glProgramUniform4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform4dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4d` instead
    ///
    pub const GlProgramUniform4d = glProgramUniform4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform4d(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform4fv` instead
    ///
    pub const GlProgramUniform4fv = glProgramUniform4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform4fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4f` instead
    ///
    pub const GlProgramUniform4f = glProgramUniform4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform4f(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform4iv` instead
    ///
    pub const GlProgramUniform4iv = glProgramUniform4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform4iv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4i` instead
    ///
    pub const GlProgramUniform4i = glProgramUniform4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform4i(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform4i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform3uiv` instead
    ///
    pub const GlProgramUniform3uiv = glProgramUniform3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform3uiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3ui` instead
    ///
    pub const GlProgramUniform3ui = glProgramUniform3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform3ui(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform3dv` instead
    ///
    pub const GlProgramUniform3dv = glProgramUniform3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform3dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3d` instead
    ///
    pub const GlProgramUniform3d = glProgramUniform3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform3d(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f64, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform3fv` instead
    ///
    pub const GlProgramUniform3fv = glProgramUniform3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform3fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3f` instead
    ///
    pub const GlProgramUniform3f = glProgramUniform3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform3f(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform3iv` instead
    ///
    pub const GlProgramUniform3iv = glProgramUniform3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform3iv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3i` instead
    ///
    pub const GlProgramUniform3i = glProgramUniform3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glProgramUniform3i(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform3i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform2uiv` instead
    ///
    pub const GlProgramUniform2uiv = glProgramUniform2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform2uiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2ui` instead
    ///
    pub const GlProgramUniform2ui = glProgramUniform2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn glProgramUniform2ui(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform2dv` instead
    ///
    pub const GlProgramUniform2dv = glProgramUniform2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform2dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2d` instead
    ///
    pub const GlProgramUniform2d = glProgramUniform2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    /// ` v1: f64 `
    ///
    pub fn glProgramUniform2d(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f64, v1: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform2fv` instead
    ///
    pub const GlProgramUniform2fv = glProgramUniform2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform2fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2f` instead
    ///
    pub const GlProgramUniform2f = glProgramUniform2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn glProgramUniform2f(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform2iv` instead
    ///
    pub const GlProgramUniform2iv = glProgramUniform2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform2iv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2i` instead
    ///
    pub const GlProgramUniform2i = glProgramUniform2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn glProgramUniform2i(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform2i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform1uiv` instead
    ///
    pub const GlProgramUniform1uiv = glProgramUniform1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glProgramUniform1uiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1ui` instead
    ///
    pub const GlProgramUniform1ui = glProgramUniform1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn glProgramUniform1ui(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform1dv` instead
    ///
    pub const GlProgramUniform1dv = glProgramUniform1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f64 `
    ///
    pub fn glProgramUniform1dv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1dv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1d` instead
    ///
    pub const GlProgramUniform1d = glProgramUniform1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f64 `
    ///
    pub fn glProgramUniform1d(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1d(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform1fv` instead
    ///
    pub const GlProgramUniform1fv = glProgramUniform1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn glProgramUniform1fv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1f` instead
    ///
    pub const GlProgramUniform1f = glProgramUniform1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn glProgramUniform1f(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform1iv` instead
    ///
    pub const GlProgramUniform1iv = glProgramUniform1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn glProgramUniform1iv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1i` instead
    ///
    pub const GlProgramUniform1i = glProgramUniform1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn glProgramUniform1i(self: QOpenGLFunctions_4_4_Compatibility, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramUniform1i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glGetProgramPipelineiv` instead
    ///
    pub const GlGetProgramPipelineiv = glGetProgramPipelineiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramPipelineiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetProgramPipelineiv(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramPipelineiv(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glIsProgramPipeline` instead
    ///
    pub const GlIsProgramPipeline = glIsProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glIsProgramPipeline(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glGenProgramPipelines` instead
    ///
    pub const GlGenProgramPipelines = glGenProgramPipelines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []u32 `
    ///
    pub fn glGenProgramPipelines(self: QOpenGLFunctions_4_4_Compatibility, n: i32, pipelines: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGenProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteProgramPipelines` instead
    ///
    pub const GlDeleteProgramPipelines = glDeleteProgramPipelines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []const u32 `
    ///
    pub fn glDeleteProgramPipelines(self: QOpenGLFunctions_4_4_Compatibility, n: i32, pipelines: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### DEPRECATED: Use `glBindProgramPipeline` instead
    ///
    pub const GlBindProgramPipeline = glBindProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glBindProgramPipeline(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glCreateShaderProgramv` instead
    ///
    pub const GlCreateShaderProgramv = glCreateShaderProgramv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCreateShaderProgramv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` strings: []const [:0]const u8 `
    ///
    pub fn glCreateShaderProgramv(self: QOpenGLFunctions_4_4_Compatibility, allocator: std.mem.Allocator, typeVal: u32, count: i32, strings: []const [:0]const u8) u32 {
        const strings_chararr = allocator.alloc([*:0]const u8, strings.len) catch @panic("QOpenGLFunctions_4_4_Compatibility.glCreateShaderProgramv: Memory allocation failed");
        defer allocator.free(strings_chararr);
        for (strings, 0..strings.len) |str, i|
            strings_chararr[i] = @ptrCast(str.ptr);
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlCreateShaderProgramv(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(count), @ptrCast(strings_chararr));
    }

    /// ### DEPRECATED: Use `glActiveShaderProgram` instead
    ///
    pub const GlActiveShaderProgram = glActiveShaderProgram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glActiveShaderProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn glActiveShaderProgram(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlActiveShaderProgram(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glUseProgramStages` instead
    ///
    pub const GlUseProgramStages = glUseProgramStages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glUseProgramStages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` stages: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn glUseProgramStages(self: QOpenGLFunctions_4_4_Compatibility, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlUseProgramStages(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(stages), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glProgramParameteri` instead
    ///
    pub const GlProgramParameteri = glProgramParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn glProgramParameteri(self: QOpenGLFunctions_4_4_Compatibility, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramParameteri(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glProgramBinary` instead
    ///
    pub const GlProgramBinary = glProgramBinary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glProgramBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` binaryFormat: u32 `
    ///
    /// ` binary: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    pub fn glProgramBinary(self: QOpenGLFunctions_4_4_Compatibility, program: u32, binaryFormat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlProgramBinary(@ptrCast(self.ptr), @bitCast(program), @bitCast(binaryFormat), @ptrCast(binary), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glClearDepthf` instead
    ///
    pub const GlClearDepthf = glClearDepthf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearDepthf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` dd: f32 `
    ///
    pub fn glClearDepthf(self: QOpenGLFunctions_4_4_Compatibility, dd: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearDepthf(@ptrCast(self.ptr), @bitCast(dd));
    }

    /// ### DEPRECATED: Use `glDepthRangef` instead
    ///
    pub const GlDepthRangef = glDepthRangef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDepthRangef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: f32 `
    ///
    /// ` f: f32 `
    ///
    pub fn glDepthRangef(self: QOpenGLFunctions_4_4_Compatibility, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDepthRangef(@ptrCast(self.ptr), @bitCast(n), @bitCast(f));
    }

    /// ### DEPRECATED: Use `glGetShaderPrecisionFormat` instead
    ///
    pub const GlGetShaderPrecisionFormat = glGetShaderPrecisionFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetShaderPrecisionFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` precisiontype: u32 `
    ///
    /// ` range: []i32 `
    ///
    /// ` precision: []i32 `
    ///
    pub fn glGetShaderPrecisionFormat(self: QOpenGLFunctions_4_4_Compatibility, shadertype: u32, precisiontype: u32, range: []i32, precision: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetShaderPrecisionFormat(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(precisiontype), range.ptr, precision.ptr);
    }

    /// ### DEPRECATED: Use `glShaderBinary` instead
    ///
    pub const GlShaderBinary = glShaderBinary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glShaderBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glShaderBinary(self: QOpenGLFunctions_4_4_Compatibility, count: i32, shaders: []const u32, binaryformat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlShaderBinary(@ptrCast(self.ptr), @bitCast(count), shaders.ptr, @bitCast(binaryformat), @ptrCast(binary), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glReleaseShaderCompiler` instead
    ///
    pub const GlReleaseShaderCompiler = glReleaseShaderCompiler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glReleaseShaderCompiler(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlReleaseShaderCompiler(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedbackStreamInstanced` instead
    ///
    pub const GlDrawTransformFeedbackStreamInstanced = glDrawTransformFeedbackStreamInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawTransformFeedbackStreamInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` stream: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawTransformFeedbackStreamInstanced(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, id: u32, stream: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawTransformFeedbackStreamInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(stream), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawTransformFeedbackInstanced` instead
    ///
    pub const GlDrawTransformFeedbackInstanced = glDrawTransformFeedbackInstanced;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawTransformFeedbackInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn glDrawTransformFeedbackInstanced(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, id: u32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawTransformFeedbackInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(id), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glTexStorage3D` instead
    ///
    pub const GlTexStorage3D = glTexStorage3D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexStorage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexStorage3D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexStorage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glTexStorage2D` instead
    ///
    pub const GlTexStorage2D = glTexStorage2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexStorage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexStorage2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexStorage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexStorage1D` instead
    ///
    pub const GlTexStorage1D = glTexStorage1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexStorage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` levels: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    pub fn glTexStorage1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, levels: i32, internalformat: u32, width: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexStorage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glMemoryBarrier` instead
    ///
    pub const GlMemoryBarrier = glMemoryBarrier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMemoryBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` barriers: u32 `
    ///
    pub fn glMemoryBarrier(self: QOpenGLFunctions_4_4_Compatibility, barriers: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMemoryBarrier(@ptrCast(self.ptr), @bitCast(barriers));
    }

    /// ### DEPRECATED: Use `glBindImageTexture` instead
    ///
    pub const GlBindImageTexture = glBindImageTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindImageTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glBindImageTexture(self: QOpenGLFunctions_4_4_Compatibility, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindImageTexture(@ptrCast(self.ptr), @bitCast(unit), @bitCast(texture), @bitCast(level), @bitCast(layered), @bitCast(layer), @bitCast(access), @bitCast(format));
    }

    /// ### DEPRECATED: Use `glGetActiveAtomicCounterBufferiv` instead
    ///
    pub const GlGetActiveAtomicCounterBufferiv = glGetActiveAtomicCounterBufferiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetActiveAtomicCounterBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` bufferIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetActiveAtomicCounterBufferiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, bufferIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetActiveAtomicCounterBufferiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufferIndex), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetInternalformativ` instead
    ///
    pub const GlGetInternalformativ = glGetInternalformativ;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetInternalformativ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetInternalformativ(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetInternalformativ(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(pname), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseVertexBaseInstance` instead
    ///
    pub const GlDrawElementsInstancedBaseVertexBaseInstance = glDrawElementsInstancedBaseVertexBaseInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElementsInstancedBaseVertexBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawElementsInstancedBaseVertexBaseInstance(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElementsInstancedBaseVertexBaseInstance(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex), @bitCast(baseinstance));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseInstance` instead
    ///
    pub const GlDrawElementsInstancedBaseInstance = glDrawElementsInstancedBaseInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawElementsInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawElementsInstancedBaseInstance(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawElementsInstancedBaseInstance(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(baseinstance));
    }

    /// ### DEPRECATED: Use `glDrawArraysInstancedBaseInstance` instead
    ///
    pub const GlDrawArraysInstancedBaseInstance = glDrawArraysInstancedBaseInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawArraysInstancedBaseInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawArraysInstancedBaseInstance(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, first: i32, count: i32, instancecount: i32, baseinstance: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawArraysInstancedBaseInstance(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount), @bitCast(baseinstance));
    }

    /// ### DEPRECATED: Use `glGetObjectPtrLabel` instead
    ///
    pub const GlGetObjectPtrLabel = glGetObjectPtrLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetObjectPtrLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` label: [:0]u8 `
    ///
    pub fn glGetObjectPtrLabel(self: QOpenGLFunctions_4_4_Compatibility, ptr: ?*const anyopaque, bufSize: i32, length: []i32, label: [:0]u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetObjectPtrLabel(@ptrCast(self.ptr), @ptrCast(ptr), @bitCast(bufSize), length.ptr, label_Cstring);
    }

    /// ### DEPRECATED: Use `glObjectPtrLabel` instead
    ///
    pub const GlObjectPtrLabel = glObjectPtrLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glObjectPtrLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    /// ` label: [:0]const u8 `
    ///
    pub fn glObjectPtrLabel(self: QOpenGLFunctions_4_4_Compatibility, ptr: ?*const anyopaque, length: i32, label: [:0]const u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlObjectPtrLabel(@ptrCast(self.ptr), @ptrCast(ptr), @bitCast(length), label_Cstring);
    }

    /// ### DEPRECATED: Use `glGetObjectLabel` instead
    ///
    pub const GlGetObjectLabel = glGetObjectLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetObjectLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` identifier: u32 `
    ///
    /// ` name: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` label: [:0]u8 `
    ///
    pub fn glGetObjectLabel(self: QOpenGLFunctions_4_4_Compatibility, identifier: u32, name: u32, bufSize: i32, length: []i32, label: [:0]u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetObjectLabel(@ptrCast(self.ptr), @bitCast(identifier), @bitCast(name), @bitCast(bufSize), length.ptr, label_Cstring);
    }

    /// ### DEPRECATED: Use `glObjectLabel` instead
    ///
    pub const GlObjectLabel = glObjectLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glObjectLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` identifier: u32 `
    ///
    /// ` name: u32 `
    ///
    /// ` length: i32 `
    ///
    /// ` label: [:0]const u8 `
    ///
    pub fn glObjectLabel(self: QOpenGLFunctions_4_4_Compatibility, identifier: u32, name: u32, length: i32, label: [:0]const u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlObjectLabel(@ptrCast(self.ptr), @bitCast(identifier), @bitCast(name), @bitCast(length), label_Cstring);
    }

    /// ### DEPRECATED: Use `glPopDebugGroup` instead
    ///
    pub const GlPopDebugGroup = glPopDebugGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPopDebugGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPopDebugGroup(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPopDebugGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPushDebugGroup` instead
    ///
    pub const GlPushDebugGroup = glPushDebugGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPushDebugGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` source: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` length: i32 `
    ///
    /// ` message: [:0]const u8 `
    ///
    pub fn glPushDebugGroup(self: QOpenGLFunctions_4_4_Compatibility, source: u32, id: u32, length: i32, message: [:0]const u8) void {
        const message_Cstring = message.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPushDebugGroup(@ptrCast(self.ptr), @bitCast(source), @bitCast(id), @bitCast(length), message_Cstring);
    }

    /// ### DEPRECATED: Use `glDebugMessageInsert` instead
    ///
    pub const GlDebugMessageInsert = glDebugMessageInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDebugMessageInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` source: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` severity: u32 `
    ///
    /// ` length: i32 `
    ///
    /// ` buf: [:0]const u8 `
    ///
    pub fn glDebugMessageInsert(self: QOpenGLFunctions_4_4_Compatibility, source: u32, typeVal: u32, id: u32, severity: u32, length: i32, buf: [:0]const u8) void {
        const buf_Cstring = buf.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDebugMessageInsert(@ptrCast(self.ptr), @bitCast(source), @bitCast(typeVal), @bitCast(id), @bitCast(severity), @bitCast(length), buf_Cstring);
    }

    /// ### DEPRECATED: Use `glDebugMessageControl` instead
    ///
    pub const GlDebugMessageControl = glDebugMessageControl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDebugMessageControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` source: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` severity: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    /// ` enabled: u8 `
    ///
    pub fn glDebugMessageControl(self: QOpenGLFunctions_4_4_Compatibility, source: u32, typeVal: u32, severity: u32, count: i32, ids: []const u32, enabled: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDebugMessageControl(@ptrCast(self.ptr), @bitCast(source), @bitCast(typeVal), @bitCast(severity), @bitCast(count), ids.ptr, @bitCast(enabled));
    }

    /// ### DEPRECATED: Use `glVertexBindingDivisor` instead
    ///
    pub const GlVertexBindingDivisor = glVertexBindingDivisor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexBindingDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` bindingindex: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn glVertexBindingDivisor(self: QOpenGLFunctions_4_4_Compatibility, bindingindex: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexBindingDivisor(@ptrCast(self.ptr), @bitCast(bindingindex), @bitCast(divisor));
    }

    /// ### DEPRECATED: Use `glVertexAttribBinding` instead
    ///
    pub const GlVertexAttribBinding = glVertexAttribBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` bindingindex: u32 `
    ///
    pub fn glVertexAttribBinding(self: QOpenGLFunctions_4_4_Compatibility, attribindex: u32, bindingindex: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribBinding(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(bindingindex));
    }

    /// ### DEPRECATED: Use `glVertexAttribLFormat` instead
    ///
    pub const GlVertexAttribLFormat = glVertexAttribLFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribLFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` relativeoffset: u32 `
    ///
    pub fn glVertexAttribLFormat(self: QOpenGLFunctions_4_4_Compatibility, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribLFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(relativeoffset));
    }

    /// ### DEPRECATED: Use `glVertexAttribIFormat` instead
    ///
    pub const GlVertexAttribIFormat = glVertexAttribIFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribIFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` relativeoffset: u32 `
    ///
    pub fn glVertexAttribIFormat(self: QOpenGLFunctions_4_4_Compatibility, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribIFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(relativeoffset));
    }

    /// ### DEPRECATED: Use `glVertexAttribFormat` instead
    ///
    pub const GlVertexAttribFormat = glVertexAttribFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexAttribFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glVertexAttribFormat(self: QOpenGLFunctions_4_4_Compatibility, attribindex: u32, size: i32, typeVal: u32, normalized: u8, relativeoffset: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexAttribFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(relativeoffset));
    }

    /// ### DEPRECATED: Use `glBindVertexBuffer` instead
    ///
    pub const GlBindVertexBuffer = glBindVertexBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindVertexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` bindingindex: u32 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` stride: i32 `
    ///
    pub fn glBindVertexBuffer(self: QOpenGLFunctions_4_4_Compatibility, bindingindex: u32, buffer: u32, offset: isize, stride: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindVertexBuffer(@ptrCast(self.ptr), @bitCast(bindingindex), @bitCast(buffer), @bitCast(offset), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `glTextureView` instead
    ///
    pub const GlTextureView = glTextureView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTextureView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTextureView(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, target: u32, origtexture: u32, internalformat: u32, minlevel: u32, numlevels: u32, minlayer: u32, numlayers: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTextureView(@ptrCast(self.ptr), @bitCast(texture), @bitCast(target), @bitCast(origtexture), @bitCast(internalformat), @bitCast(minlevel), @bitCast(numlevels), @bitCast(minlayer), @bitCast(numlayers));
    }

    /// ### DEPRECATED: Use `glTexStorage3DMultisample` instead
    ///
    pub const GlTexStorage3DMultisample = glTexStorage3DMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexStorage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexStorage3DMultisample(self: QOpenGLFunctions_4_4_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexStorage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glTexStorage2DMultisample` instead
    ///
    pub const GlTexStorage2DMultisample = glTexStorage2DMultisample;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexStorage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexStorage2DMultisample(self: QOpenGLFunctions_4_4_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexStorage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glTexBufferRange` instead
    ///
    pub const GlTexBufferRange = glTexBufferRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glTexBufferRange(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glShaderStorageBlockBinding` instead
    ///
    pub const GlShaderStorageBlockBinding = glShaderStorageBlockBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glShaderStorageBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` storageBlockIndex: u32 `
    ///
    /// ` storageBlockBinding: u32 `
    ///
    pub fn glShaderStorageBlockBinding(self: QOpenGLFunctions_4_4_Compatibility, program: u32, storageBlockIndex: u32, storageBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlShaderStorageBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(storageBlockIndex), @bitCast(storageBlockBinding));
    }

    /// ### DEPRECATED: Use `glGetProgramResourceLocationIndex` instead
    ///
    pub const GlGetProgramResourceLocationIndex = glGetProgramResourceLocationIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramResourceLocationIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetProgramResourceLocationIndex(self: QOpenGLFunctions_4_4_Compatibility, program: u32, programInterface: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramResourceLocationIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramResourceLocation` instead
    ///
    pub const GlGetProgramResourceLocation = glGetProgramResourceLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramResourceLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetProgramResourceLocation(self: QOpenGLFunctions_4_4_Compatibility, program: u32, programInterface: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramResourceLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramResourceName` instead
    ///
    pub const GlGetProgramResourceName = glGetProgramResourceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramResourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetProgramResourceName(self: QOpenGLFunctions_4_4_Compatibility, program: u32, programInterface: u32, index: u32, bufSize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramResourceName(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), @bitCast(index), @bitCast(bufSize), length.ptr, name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramResourceIndex` instead
    ///
    pub const GlGetProgramResourceIndex = glGetProgramResourceIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramResourceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn glGetProgramResourceIndex(self: QOpenGLFunctions_4_4_Compatibility, program: u32, programInterface: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramResourceIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramInterfaceiv` instead
    ///
    pub const GlGetProgramInterfaceiv = glGetProgramInterfaceiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetProgramInterfaceiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetProgramInterfaceiv(self: QOpenGLFunctions_4_4_Compatibility, program: u32, programInterface: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetProgramInterfaceiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMultiDrawElementsIndirect` instead
    ///
    pub const GlMultiDrawElementsIndirect = glMultiDrawElementsIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiDrawElementsIndirect(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, typeVal: u32, indirect: ?*const anyopaque, drawcount: i32, stride: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiDrawElementsIndirect(@ptrCast(self.ptr), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect), @bitCast(drawcount), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `glMultiDrawArraysIndirect` instead
    ///
    pub const GlMultiDrawArraysIndirect = glMultiDrawArraysIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    /// ` drawcount: i32 `
    ///
    /// ` stride: i32 `
    ///
    pub fn glMultiDrawArraysIndirect(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, indirect: ?*const anyopaque, drawcount: i32, stride: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiDrawArraysIndirect(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(indirect), @bitCast(drawcount), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `glInvalidateBufferData` instead
    ///
    pub const GlInvalidateBufferData = glInvalidateBufferData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glInvalidateBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    pub fn glInvalidateBufferData(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlInvalidateBufferData(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glInvalidateBufferSubData` instead
    ///
    pub const GlInvalidateBufferSubData = glInvalidateBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glInvalidateBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn glInvalidateBufferSubData(self: QOpenGLFunctions_4_4_Compatibility, buffer: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlInvalidateBufferSubData(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(offset), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glInvalidateTexImage` instead
    ///
    pub const GlInvalidateTexImage = glInvalidateTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glInvalidateTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn glInvalidateTexImage(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlInvalidateTexImage(@ptrCast(self.ptr), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glInvalidateTexSubImage` instead
    ///
    pub const GlInvalidateTexSubImage = glInvalidateTexSubImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glInvalidateTexSubImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glInvalidateTexSubImage(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlInvalidateTexSubImage(@ptrCast(self.ptr), @bitCast(texture), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glGetInternalformati64v` instead
    ///
    pub const GlGetInternalformati64v = glGetInternalformati64v;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetInternalformati64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetInternalformati64v(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetInternalformati64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(pname), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFramebufferParameteriv` instead
    ///
    pub const GlGetFramebufferParameteriv = glGetFramebufferParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetFramebufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetFramebufferParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetFramebufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFramebufferParameteri` instead
    ///
    pub const GlFramebufferParameteri = glFramebufferParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFramebufferParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glFramebufferParameteri(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFramebufferParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glCopyImageSubData` instead
    ///
    pub const GlCopyImageSubData = glCopyImageSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyImageSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyImageSubData(self: QOpenGLFunctions_4_4_Compatibility, srcName: u32, srcTarget: u32, srcLevel: i32, srcX: i32, srcY: i32, srcZ: i32, dstName: u32, dstTarget: u32, dstLevel: i32, dstX: i32, dstY: i32, dstZ: i32, srcWidth: i32, srcHeight: i32, srcDepth: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyImageSubData(@ptrCast(self.ptr), @bitCast(srcName), @bitCast(srcTarget), @bitCast(srcLevel), @bitCast(srcX), @bitCast(srcY), @bitCast(srcZ), @bitCast(dstName), @bitCast(dstTarget), @bitCast(dstLevel), @bitCast(dstX), @bitCast(dstY), @bitCast(dstZ), @bitCast(srcWidth), @bitCast(srcHeight), @bitCast(srcDepth));
    }

    /// ### DEPRECATED: Use `glDispatchComputeIndirect` instead
    ///
    pub const GlDispatchComputeIndirect = glDispatchComputeIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDispatchComputeIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` indirect: isize `
    ///
    pub fn glDispatchComputeIndirect(self: QOpenGLFunctions_4_4_Compatibility, indirect: isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDispatchComputeIndirect(@ptrCast(self.ptr), @bitCast(indirect));
    }

    /// ### DEPRECATED: Use `glDispatchCompute` instead
    ///
    pub const GlDispatchCompute = glDispatchCompute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDispatchCompute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` num_groups_x: u32 `
    ///
    /// ` num_groups_y: u32 `
    ///
    /// ` num_groups_z: u32 `
    ///
    pub fn glDispatchCompute(self: QOpenGLFunctions_4_4_Compatibility, num_groups_x: u32, num_groups_y: u32, num_groups_z: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDispatchCompute(@ptrCast(self.ptr), @bitCast(num_groups_x), @bitCast(num_groups_y), @bitCast(num_groups_z));
    }

    /// ### DEPRECATED: Use `glClearBufferSubData` instead
    ///
    pub const GlClearBufferSubData = glClearBufferSubData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glClearBufferSubData(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, offset: isize, size: isize, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(offset), @bitCast(size), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glClearBufferData` instead
    ///
    pub const GlClearBufferData = glClearBufferData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glClearBufferData(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBindVertexBuffers` instead
    ///
    pub const GlBindVertexBuffers = glBindVertexBuffers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindVertexBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    /// ` offsets: []const isize `
    ///
    /// ` strides: []const i32 `
    ///
    pub fn glBindVertexBuffers(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, buffers: []const u32, offsets: []const isize, strides: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindVertexBuffers(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), buffers.ptr, offsets.ptr, strides.ptr);
    }

    /// ### DEPRECATED: Use `glBindImageTextures` instead
    ///
    pub const GlBindImageTextures = glBindImageTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindImageTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn glBindImageTextures(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindImageTextures(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), textures.ptr);
    }

    /// ### DEPRECATED: Use `glBindSamplers` instead
    ///
    pub const GlBindSamplers = glBindSamplers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn glBindSamplers(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, samplers: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindSamplers(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glBindTextures` instead
    ///
    pub const GlBindTextures = glBindTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn glBindTextures(self: QOpenGLFunctions_4_4_Compatibility, first: u32, count: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindTextures(@ptrCast(self.ptr), @bitCast(first), @bitCast(count), textures.ptr);
    }

    /// ### DEPRECATED: Use `glBindBuffersRange` instead
    ///
    pub const GlBindBuffersRange = glBindBuffersRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindBuffersRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    /// ` offsets: []const isize `
    ///
    /// ` sizes: []const isize `
    ///
    pub fn glBindBuffersRange(self: QOpenGLFunctions_4_4_Compatibility, target: u32, first: u32, count: i32, buffers: []const u32, offsets: []const isize, sizes: []const isize) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindBuffersRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(first), @bitCast(count), buffers.ptr, offsets.ptr, sizes.ptr);
    }

    /// ### DEPRECATED: Use `glBindBuffersBase` instead
    ///
    pub const GlBindBuffersBase = glBindBuffersBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBindBuffersBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` first: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn glBindBuffersBase(self: QOpenGLFunctions_4_4_Compatibility, target: u32, first: u32, count: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBindBuffersBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(first), @bitCast(count), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glClearTexSubImage` instead
    ///
    pub const GlClearTexSubImage = glClearTexSubImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearTexSubImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn glClearTexSubImage(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearTexSubImage(@ptrCast(self.ptr), @bitCast(texture), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glClearTexImage` instead
    ///
    pub const GlClearTexImage = glClearTexImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn glClearTexImage(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, level: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearTexImage(@ptrCast(self.ptr), @bitCast(texture), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glBufferStorage` instead
    ///
    pub const GlBufferStorage = glBufferStorage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` flags: u32 `
    ///
    pub fn glBufferStorage(self: QOpenGLFunctions_4_4_Compatibility, target: u32, size: isize, data: ?*const anyopaque, flags: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `glTranslatef` instead
    ///
    pub const GlTranslatef = glTranslatef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glTranslatef(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTranslatef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glTranslated` instead
    ///
    pub const GlTranslated = glTranslated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glTranslated(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTranslated(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glScalef` instead
    ///
    pub const GlScalef = glScalef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glScalef(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlScalef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glScaled` instead
    ///
    pub const GlScaled = glScaled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glScaled(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlScaled(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRotatef` instead
    ///
    pub const GlRotatef = glRotatef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glRotatef(self: QOpenGLFunctions_4_4_Compatibility, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRotatef(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRotated` instead
    ///
    pub const GlRotated = glRotated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` angle: f64 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glRotated(self: QOpenGLFunctions_4_4_Compatibility, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRotated(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glPushMatrix` instead
    ///
    pub const GlPushMatrix = glPushMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPushMatrix(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPushMatrix(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPopMatrix` instead
    ///
    pub const GlPopMatrix = glPopMatrix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPopMatrix(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPopMatrix(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glOrtho` instead
    ///
    pub const GlOrtho = glOrtho;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glOrtho(self: QOpenGLFunctions_4_4_Compatibility, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlOrtho(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### DEPRECATED: Use `glMultMatrixd` instead
    ///
    pub const GlMultMatrixd = glMultMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glMultMatrixd(self: QOpenGLFunctions_4_4_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMultMatrixf` instead
    ///
    pub const GlMultMatrixf = glMultMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glMultMatrixf(self: QOpenGLFunctions_4_4_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMatrixMode` instead
    ///
    pub const GlMatrixMode = glMatrixMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glMatrixMode(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMatrixMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glLoadMatrixd` instead
    ///
    pub const GlLoadMatrixd = glLoadMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glLoadMatrixd(self: QOpenGLFunctions_4_4_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLoadMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadMatrixf` instead
    ///
    pub const GlLoadMatrixf = glLoadMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glLoadMatrixf(self: QOpenGLFunctions_4_4_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLoadMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadIdentity` instead
    ///
    pub const GlLoadIdentity = glLoadIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glLoadIdentity(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLoadIdentity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFrustum` instead
    ///
    pub const GlFrustum = glFrustum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glFrustum(self: QOpenGLFunctions_4_4_Compatibility, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFrustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### DEPRECATED: Use `glIsList` instead
    ///
    pub const GlIsList = glIsList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` list: u32 `
    ///
    pub fn glIsList(self: QOpenGLFunctions_4_4_Compatibility, list: u32) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlIsList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### DEPRECATED: Use `glGetTexGeniv` instead
    ///
    pub const GlGetTexGeniv = glGetTexGeniv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexGeniv(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexGenfv` instead
    ///
    pub const GlGetTexGenfv = glGetTexGenfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexGenfv(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexGendv` instead
    ///
    pub const GlGetTexGendv = glGetTexGendv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn glGetTexGendv(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexEnviv` instead
    ///
    pub const GlGetTexEnviv = glGetTexEnviv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetTexEnviv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexEnvfv` instead
    ///
    pub const GlGetTexEnvfv = glGetTexEnvfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetTexEnvfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetPolygonStipple` instead
    ///
    pub const GlGetPolygonStipple = glGetPolygonStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: []u8 `
    ///
    pub fn glGetPolygonStipple(self: QOpenGLFunctions_4_4_Compatibility, mask: []u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapusv` instead
    ///
    pub const GlGetPixelMapusv = glGetPixelMapusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn glGetPixelMapusv(self: QOpenGLFunctions_4_4_Compatibility, map: u32, values: []u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetPixelMapusv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapuiv` instead
    ///
    pub const GlGetPixelMapuiv = glGetPixelMapuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn glGetPixelMapuiv(self: QOpenGLFunctions_4_4_Compatibility, map: u32, values: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetPixelMapuiv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetPixelMapfv` instead
    ///
    pub const GlGetPixelMapfv = glGetPixelMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` map: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn glGetPixelMapfv(self: QOpenGLFunctions_4_4_Compatibility, map: u32, values: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetPixelMapfv(@ptrCast(self.ptr), @bitCast(map), values.ptr);
    }

    /// ### DEPRECATED: Use `glGetMaterialiv` instead
    ///
    pub const GlGetMaterialiv = glGetMaterialiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetMaterialiv(self: QOpenGLFunctions_4_4_Compatibility, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMaterialfv` instead
    ///
    pub const GlGetMaterialfv = glGetMaterialfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetMaterialfv(self: QOpenGLFunctions_4_4_Compatibility, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapiv` instead
    ///
    pub const GlGetMapiv = glGetMapiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn glGetMapiv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMapiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapfv` instead
    ///
    pub const GlGetMapfv = glGetMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn glGetMapfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMapfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetMapdv` instead
    ///
    pub const GlGetMapdv = glGetMapdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn glGetMapdv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMapdv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetLightiv` instead
    ///
    pub const GlGetLightiv = glGetLightiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetLightiv(self: QOpenGLFunctions_4_4_Compatibility, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetLightfv` instead
    ///
    pub const GlGetLightfv = glGetLightfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetLightfv(self: QOpenGLFunctions_4_4_Compatibility, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetClipPlane` instead
    ///
    pub const GlGetClipPlane = glGetClipPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn glGetClipPlane(self: QOpenGLFunctions_4_4_Compatibility, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### DEPRECATED: Use `glDrawPixels` instead
    ///
    pub const GlDrawPixels = glDrawPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glDrawPixels(self: QOpenGLFunctions_4_4_Compatibility, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDrawPixels(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyPixels` instead
    ///
    pub const GlCopyPixels = glCopyPixels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyPixels(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glPixelMapusv` instead
    ///
    pub const GlPixelMapusv = glPixelMapusv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn glPixelMapusv(self: QOpenGLFunctions_4_4_Compatibility, map: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelMapusv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelMapuiv` instead
    ///
    pub const GlPixelMapuiv = glPixelMapuiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn glPixelMapuiv(self: QOpenGLFunctions_4_4_Compatibility, map: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelMapuiv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelMapfv` instead
    ///
    pub const GlPixelMapfv = glPixelMapfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` map: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn glPixelMapfv(self: QOpenGLFunctions_4_4_Compatibility, map: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelMapfv(@ptrCast(self.ptr), @bitCast(map), @bitCast(mapsize), values.ptr);
    }

    /// ### DEPRECATED: Use `glPixelTransferi` instead
    ///
    pub const GlPixelTransferi = glPixelTransferi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glPixelTransferi(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelTransferi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelTransferf` instead
    ///
    pub const GlPixelTransferf = glPixelTransferf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glPixelTransferf(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelTransferf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPixelZoom` instead
    ///
    pub const GlPixelZoom = glPixelZoom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn glPixelZoom(self: QOpenGLFunctions_4_4_Compatibility, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPixelZoom(@ptrCast(self.ptr), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### DEPRECATED: Use `glAlphaFunc` instead
    ///
    pub const GlAlphaFunc = glAlphaFunc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn glAlphaFunc(self: QOpenGLFunctions_4_4_Compatibility, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlAlphaFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref));
    }

    /// ### DEPRECATED: Use `glEvalPoint2` instead
    ///
    pub const GlEvalPoint2 = glEvalPoint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn glEvalPoint2(self: QOpenGLFunctions_4_4_Compatibility, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalPoint2(@ptrCast(self.ptr), @bitCast(i), @bitCast(j));
    }

    /// ### DEPRECATED: Use `glEvalMesh2` instead
    ///
    pub const GlEvalMesh2 = glEvalMesh2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glEvalMesh2(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalMesh2(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### DEPRECATED: Use `glEvalPoint1` instead
    ///
    pub const GlEvalPoint1 = glEvalPoint1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` i: i32 `
    ///
    pub fn glEvalPoint1(self: QOpenGLFunctions_4_4_Compatibility, i: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalPoint1(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `glEvalMesh1` instead
    ///
    pub const GlEvalMesh1 = glEvalMesh1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn glEvalMesh1(self: QOpenGLFunctions_4_4_Compatibility, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalMesh1(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### DEPRECATED: Use `glEvalCoord2fv` instead
    ///
    pub const GlEvalCoord2fv = glEvalCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: []const f32 `
    ///
    pub fn glEvalCoord2fv(self: QOpenGLFunctions_4_4_Compatibility, u: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord2fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord2f` instead
    ///
    pub const GlEvalCoord2f = glEvalCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn glEvalCoord2f(self: QOpenGLFunctions_4_4_Compatibility, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord2f(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### DEPRECATED: Use `glEvalCoord2dv` instead
    ///
    pub const GlEvalCoord2dv = glEvalCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: []const f64 `
    ///
    pub fn glEvalCoord2dv(self: QOpenGLFunctions_4_4_Compatibility, u: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord2dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord2d` instead
    ///
    pub const GlEvalCoord2d = glEvalCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn glEvalCoord2d(self: QOpenGLFunctions_4_4_Compatibility, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord2d(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### DEPRECATED: Use `glEvalCoord1fv` instead
    ///
    pub const GlEvalCoord1fv = glEvalCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: []const f32 `
    ///
    pub fn glEvalCoord1fv(self: QOpenGLFunctions_4_4_Compatibility, u: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord1fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord1f` instead
    ///
    pub const GlEvalCoord1f = glEvalCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: f32 `
    ///
    pub fn glEvalCoord1f(self: QOpenGLFunctions_4_4_Compatibility, u: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord1f(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `glEvalCoord1dv` instead
    ///
    pub const GlEvalCoord1dv = glEvalCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: []const f64 `
    ///
    pub fn glEvalCoord1dv(self: QOpenGLFunctions_4_4_Compatibility, u: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord1dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### DEPRECATED: Use `glEvalCoord1d` instead
    ///
    pub const GlEvalCoord1d = glEvalCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` u: f64 `
    ///
    pub fn glEvalCoord1d(self: QOpenGLFunctions_4_4_Compatibility, u: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEvalCoord1d(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### DEPRECATED: Use `glMapGrid2f` instead
    ///
    pub const GlMapGrid2f = glMapGrid2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMapGrid2f(self: QOpenGLFunctions_4_4_Compatibility, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMapGrid2f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glMapGrid2d` instead
    ///
    pub const GlMapGrid2d = glMapGrid2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMapGrid2d(self: QOpenGLFunctions_4_4_Compatibility, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMapGrid2d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glMapGrid1f` instead
    ///
    pub const GlMapGrid1f = glMapGrid1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn glMapGrid1f(self: QOpenGLFunctions_4_4_Compatibility, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMapGrid1f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### DEPRECATED: Use `glMapGrid1d` instead
    ///
    pub const GlMapGrid1d = glMapGrid1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn glMapGrid1d(self: QOpenGLFunctions_4_4_Compatibility, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMapGrid1d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### DEPRECATED: Use `glMap2f` instead
    ///
    pub const GlMap2f = glMap2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMap2f(self: QOpenGLFunctions_4_4_Compatibility, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMap2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap2d` instead
    ///
    pub const GlMap2d = glMap2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMap2d(self: QOpenGLFunctions_4_4_Compatibility, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMap2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap1f` instead
    ///
    pub const GlMap1f = glMap1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMap1f(self: QOpenGLFunctions_4_4_Compatibility, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMap1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### DEPRECATED: Use `glMap1d` instead
    ///
    pub const GlMap1d = glMap1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMap1d(self: QOpenGLFunctions_4_4_Compatibility, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMap1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### DEPRECATED: Use `glPushAttrib` instead
    ///
    pub const GlPushAttrib = glPushAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn glPushAttrib(self: QOpenGLFunctions_4_4_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPushAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glPopAttrib` instead
    ///
    pub const GlPopAttrib = glPopAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPopAttrib(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPopAttrib(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glAccum` instead
    ///
    pub const GlAccum = glAccum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn glAccum(self: QOpenGLFunctions_4_4_Compatibility, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlAccum(@ptrCast(self.ptr), @bitCast(op), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glIndexMask` instead
    ///
    pub const GlIndexMask = glIndexMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn glIndexMask(self: QOpenGLFunctions_4_4_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearIndex` instead
    ///
    pub const GlClearIndex = glClearIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: f32 `
    ///
    pub fn glClearIndex(self: QOpenGLFunctions_4_4_Compatibility, c: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearIndex(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glClearAccum` instead
    ///
    pub const GlClearAccum = glClearAccum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glClearAccum(self: QOpenGLFunctions_4_4_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClearAccum(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glPushName` instead
    ///
    pub const GlPushName = glPushName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` name: u32 `
    ///
    pub fn glPushName(self: QOpenGLFunctions_4_4_Compatibility, name: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPushName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `glPopName` instead
    ///
    pub const GlPopName = glPopName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPopName(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPopName(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glPassThrough` instead
    ///
    pub const GlPassThrough = glPassThrough;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` token: f32 `
    ///
    pub fn glPassThrough(self: QOpenGLFunctions_4_4_Compatibility, token: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPassThrough(@ptrCast(self.ptr), @bitCast(token));
    }

    /// ### DEPRECATED: Use `glLoadName` instead
    ///
    pub const GlLoadName = glLoadName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` name: u32 `
    ///
    pub fn glLoadName(self: QOpenGLFunctions_4_4_Compatibility, name: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLoadName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### DEPRECATED: Use `glInitNames` instead
    ///
    pub const GlInitNames = glInitNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glInitNames(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlInitNames(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glRenderMode` instead
    ///
    pub const GlRenderMode = glRenderMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glRenderMode(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) i32 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlRenderMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glSelectBuffer` instead
    ///
    pub const GlSelectBuffer = glSelectBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn glSelectBuffer(self: QOpenGLFunctions_4_4_Compatibility, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSelectBuffer(@ptrCast(self.ptr), @bitCast(size), buffer.ptr);
    }

    /// ### DEPRECATED: Use `glFeedbackBuffer` instead
    ///
    pub const GlFeedbackBuffer = glFeedbackBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn glFeedbackBuffer(self: QOpenGLFunctions_4_4_Compatibility, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFeedbackBuffer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### DEPRECATED: Use `glTexGeniv` instead
    ///
    pub const GlTexGeniv = glTexGeniv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexGeniv(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGeni` instead
    ///
    pub const GlTexGeni = glTexGeni;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexGeni(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexGeni(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexGenfv` instead
    ///
    pub const GlTexGenfv = glTexGenfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexGenfv(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGenf` instead
    ///
    pub const GlTexGenf = glTexGenf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexGenf(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexGenf(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexGendv` instead
    ///
    pub const GlTexGendv = glTexGendv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn glTexGendv(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexGend` instead
    ///
    pub const GlTexGend = glTexGend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn glTexGend(self: QOpenGLFunctions_4_4_Compatibility, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexGend(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexEnviv` instead
    ///
    pub const GlTexEnviv = glTexEnviv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glTexEnviv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexEnvi` instead
    ///
    pub const GlTexEnvi = glTexEnvi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glTexEnvi(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexEnvi(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexEnvfv` instead
    ///
    pub const GlTexEnvfv = glTexEnvfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glTexEnvfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexEnvf` instead
    ///
    pub const GlTexEnvf = glTexEnvf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glTexEnvf(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexEnvf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glShadeModel` instead
    ///
    pub const GlShadeModel = glShadeModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glShadeModel(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlShadeModel(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPolygonStipple` instead
    ///
    pub const GlPolygonStipple = glPolygonStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn glPolygonStipple(self: QOpenGLFunctions_4_4_Compatibility, mask: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### DEPRECATED: Use `glMaterialiv` instead
    ///
    pub const GlMaterialiv = glMaterialiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glMaterialiv(self: QOpenGLFunctions_4_4_Compatibility, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMateriali` instead
    ///
    pub const GlMateriali = glMateriali;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glMateriali(self: QOpenGLFunctions_4_4_Compatibility, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMateriali(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glMaterialfv` instead
    ///
    pub const GlMaterialfv = glMaterialfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glMaterialfv(self: QOpenGLFunctions_4_4_Compatibility, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glMaterialf` instead
    ///
    pub const GlMaterialf = glMaterialf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glMaterialf(self: QOpenGLFunctions_4_4_Compatibility, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMaterialf(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLineStipple` instead
    ///
    pub const GlLineStipple = glLineStipple;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn glLineStipple(self: QOpenGLFunctions_4_4_Compatibility, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLineStipple(@ptrCast(self.ptr), @bitCast(factor), @bitCast(pattern));
    }

    /// ### DEPRECATED: Use `glLightModeliv` instead
    ///
    pub const GlLightModeliv = glLightModeliv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glLightModeliv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightModeliv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightModeli` instead
    ///
    pub const GlLightModeli = glLightModeli;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glLightModeli(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightModeli(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightModelfv` instead
    ///
    pub const GlLightModelfv = glLightModelfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glLightModelfv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightModelfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightModelf` instead
    ///
    pub const GlLightModelf = glLightModelf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glLightModelf(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightModelf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightiv` instead
    ///
    pub const GlLightiv = glLightiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glLightiv(self: QOpenGLFunctions_4_4_Compatibility, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLighti` instead
    ///
    pub const GlLighti = glLighti;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glLighti(self: QOpenGLFunctions_4_4_Compatibility, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLighti(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glLightfv` instead
    ///
    pub const GlLightfv = glLightfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glLightfv(self: QOpenGLFunctions_4_4_Compatibility, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glLightf` instead
    ///
    pub const GlLightf = glLightf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glLightf(self: QOpenGLFunctions_4_4_Compatibility, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLightf(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glFogiv` instead
    ///
    pub const GlFogiv = glFogiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glFogiv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogiv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFogi` instead
    ///
    pub const GlFogi = glFogi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn glFogi(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glFogfv` instead
    ///
    pub const GlFogfv = glFogfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glFogfv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glFogf` instead
    ///
    pub const GlFogf = glFogf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn glFogf(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glColorMaterial` instead
    ///
    pub const GlColorMaterial = glColorMaterial;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glColorMaterial(self: QOpenGLFunctions_4_4_Compatibility, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorMaterial(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glClipPlane` instead
    ///
    pub const GlClipPlane = glClipPlane;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn glClipPlane(self: QOpenGLFunctions_4_4_Compatibility, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4sv` instead
    ///
    pub const GlVertex4sv = glVertex4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex4sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4s` instead
    ///
    pub const GlVertex4s = glVertex4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn glVertex4s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4iv` instead
    ///
    pub const GlVertex4iv = glVertex4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex4iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4i` instead
    ///
    pub const GlVertex4i = glVertex4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn glVertex4i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4fv` instead
    ///
    pub const GlVertex4fv = glVertex4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex4fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4f` instead
    ///
    pub const GlVertex4f = glVertex4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn glVertex4f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex4dv` instead
    ///
    pub const GlVertex4dv = glVertex4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex4dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex4d` instead
    ///
    pub const GlVertex4d = glVertex4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn glVertex4d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertex3sv` instead
    ///
    pub const GlVertex3sv = glVertex3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3s` instead
    ///
    pub const GlVertex3s = glVertex3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glVertex3s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3iv` instead
    ///
    pub const GlVertex3iv = glVertex3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3i` instead
    ///
    pub const GlVertex3i = glVertex3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glVertex3i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3fv` instead
    ///
    pub const GlVertex3fv = glVertex3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3f` instead
    ///
    pub const GlVertex3f = glVertex3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glVertex3f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex3dv` instead
    ///
    pub const GlVertex3dv = glVertex3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex3d` instead
    ///
    pub const GlVertex3d = glVertex3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glVertex3d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertex2sv` instead
    ///
    pub const GlVertex2sv = glVertex2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glVertex2sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2s` instead
    ///
    pub const GlVertex2s = glVertex2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glVertex2s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2iv` instead
    ///
    pub const GlVertex2iv = glVertex2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glVertex2iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2i` instead
    ///
    pub const GlVertex2i = glVertex2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glVertex2i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2fv` instead
    ///
    pub const GlVertex2fv = glVertex2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glVertex2fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2f` instead
    ///
    pub const GlVertex2f = glVertex2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glVertex2f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertex2dv` instead
    ///
    pub const GlVertex2dv = glVertex2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glVertex2dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertex2d` instead
    ///
    pub const GlVertex2d = glVertex2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glVertex2d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertex2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glTexCoord4sv` instead
    ///
    pub const GlTexCoord4sv = glTexCoord4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord4sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4s` instead
    ///
    pub const GlTexCoord4s = glTexCoord4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn glTexCoord4s(self: QOpenGLFunctions_4_4_Compatibility, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4iv` instead
    ///
    pub const GlTexCoord4iv = glTexCoord4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord4iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4i` instead
    ///
    pub const GlTexCoord4i = glTexCoord4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn glTexCoord4i(self: QOpenGLFunctions_4_4_Compatibility, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4fv` instead
    ///
    pub const GlTexCoord4fv = glTexCoord4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord4fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4f` instead
    ///
    pub const GlTexCoord4f = glTexCoord4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn glTexCoord4f(self: QOpenGLFunctions_4_4_Compatibility, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord4dv` instead
    ///
    pub const GlTexCoord4dv = glTexCoord4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord4dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord4d` instead
    ///
    pub const GlTexCoord4d = glTexCoord4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn glTexCoord4d(self: QOpenGLFunctions_4_4_Compatibility, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord4d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glTexCoord3sv` instead
    ///
    pub const GlTexCoord3sv = glTexCoord3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3s` instead
    ///
    pub const GlTexCoord3s = glTexCoord3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn glTexCoord3s(self: QOpenGLFunctions_4_4_Compatibility, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3iv` instead
    ///
    pub const GlTexCoord3iv = glTexCoord3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3i` instead
    ///
    pub const GlTexCoord3i = glTexCoord3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn glTexCoord3i(self: QOpenGLFunctions_4_4_Compatibility, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3fv` instead
    ///
    pub const GlTexCoord3fv = glTexCoord3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3f` instead
    ///
    pub const GlTexCoord3f = glTexCoord3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn glTexCoord3f(self: QOpenGLFunctions_4_4_Compatibility, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord3dv` instead
    ///
    pub const GlTexCoord3dv = glTexCoord3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord3d` instead
    ///
    pub const GlTexCoord3d = glTexCoord3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn glTexCoord3d(self: QOpenGLFunctions_4_4_Compatibility, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord3d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glTexCoord2sv` instead
    ///
    pub const GlTexCoord2sv = glTexCoord2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord2sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2s` instead
    ///
    pub const GlTexCoord2s = glTexCoord2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn glTexCoord2s(self: QOpenGLFunctions_4_4_Compatibility, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2iv` instead
    ///
    pub const GlTexCoord2iv = glTexCoord2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord2iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2i` instead
    ///
    pub const GlTexCoord2i = glTexCoord2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn glTexCoord2i(self: QOpenGLFunctions_4_4_Compatibility, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2fv` instead
    ///
    pub const GlTexCoord2fv = glTexCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord2fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2f` instead
    ///
    pub const GlTexCoord2f = glTexCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn glTexCoord2f(self: QOpenGLFunctions_4_4_Compatibility, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord2dv` instead
    ///
    pub const GlTexCoord2dv = glTexCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord2dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord2d` instead
    ///
    pub const GlTexCoord2d = glTexCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn glTexCoord2d(self: QOpenGLFunctions_4_4_Compatibility, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord2d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glTexCoord1sv` instead
    ///
    pub const GlTexCoord1sv = glTexCoord1sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glTexCoord1sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1s` instead
    ///
    pub const GlTexCoord1s = glTexCoord1s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i16 `
    ///
    pub fn glTexCoord1s(self: QOpenGLFunctions_4_4_Compatibility, s: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1s(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1iv` instead
    ///
    pub const GlTexCoord1iv = glTexCoord1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glTexCoord1iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1i` instead
    ///
    pub const GlTexCoord1i = glTexCoord1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: i32 `
    ///
    pub fn glTexCoord1i(self: QOpenGLFunctions_4_4_Compatibility, s: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1i(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1fv` instead
    ///
    pub const GlTexCoord1fv = glTexCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glTexCoord1fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1f` instead
    ///
    pub const GlTexCoord1f = glTexCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f32 `
    ///
    pub fn glTexCoord1f(self: QOpenGLFunctions_4_4_Compatibility, s: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1f(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glTexCoord1dv` instead
    ///
    pub const GlTexCoord1dv = glTexCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glTexCoord1dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoord1d` instead
    ///
    pub const GlTexCoord1d = glTexCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` s: f64 `
    ///
    pub fn glTexCoord1d(self: QOpenGLFunctions_4_4_Compatibility, s: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoord1d(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glRectsv` instead
    ///
    pub const GlRectsv = glRectsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn glRectsv(self: QOpenGLFunctions_4_4_Compatibility, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRectsv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRects` instead
    ///
    pub const GlRects = glRects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x1: i16 `
    ///
    /// ` y1: i16 `
    ///
    /// ` x2: i16 `
    ///
    /// ` y2: i16 `
    ///
    pub fn glRects(self: QOpenGLFunctions_4_4_Compatibility, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRects(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectiv` instead
    ///
    pub const GlRectiv = glRectiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn glRectiv(self: QOpenGLFunctions_4_4_Compatibility, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRectiv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRecti` instead
    ///
    pub const GlRecti = glRecti;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn glRecti(self: QOpenGLFunctions_4_4_Compatibility, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRecti(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectfv` instead
    ///
    pub const GlRectfv = glRectfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn glRectfv(self: QOpenGLFunctions_4_4_Compatibility, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRectfv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRectf` instead
    ///
    pub const GlRectf = glRectf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x1: f32 `
    ///
    /// ` y1: f32 `
    ///
    /// ` x2: f32 `
    ///
    /// ` y2: f32 `
    ///
    pub fn glRectf(self: QOpenGLFunctions_4_4_Compatibility, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRectf(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRectdv` instead
    ///
    pub const GlRectdv = glRectdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn glRectdv(self: QOpenGLFunctions_4_4_Compatibility, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRectdv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### DEPRECATED: Use `glRectd` instead
    ///
    pub const GlRectd = glRectd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn glRectd(self: QOpenGLFunctions_4_4_Compatibility, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRectd(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### DEPRECATED: Use `glRasterPos4sv` instead
    ///
    pub const GlRasterPos4sv = glRasterPos4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos4sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4s` instead
    ///
    pub const GlRasterPos4s = glRasterPos4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn glRasterPos4s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4iv` instead
    ///
    pub const GlRasterPos4iv = glRasterPos4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos4iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4i` instead
    ///
    pub const GlRasterPos4i = glRasterPos4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn glRasterPos4i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4fv` instead
    ///
    pub const GlRasterPos4fv = glRasterPos4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos4fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4f` instead
    ///
    pub const GlRasterPos4f = glRasterPos4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn glRasterPos4f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos4dv` instead
    ///
    pub const GlRasterPos4dv = glRasterPos4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos4dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos4d` instead
    ///
    pub const GlRasterPos4d = glRasterPos4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn glRasterPos4d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glRasterPos3sv` instead
    ///
    pub const GlRasterPos3sv = glRasterPos3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3s` instead
    ///
    pub const GlRasterPos3s = glRasterPos3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glRasterPos3s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3iv` instead
    ///
    pub const GlRasterPos3iv = glRasterPos3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3i` instead
    ///
    pub const GlRasterPos3i = glRasterPos3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glRasterPos3i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3fv` instead
    ///
    pub const GlRasterPos3fv = glRasterPos3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3f` instead
    ///
    pub const GlRasterPos3f = glRasterPos3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glRasterPos3f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos3dv` instead
    ///
    pub const GlRasterPos3dv = glRasterPos3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos3d` instead
    ///
    pub const GlRasterPos3d = glRasterPos3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glRasterPos3d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glRasterPos2sv` instead
    ///
    pub const GlRasterPos2sv = glRasterPos2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glRasterPos2sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2s` instead
    ///
    pub const GlRasterPos2s = glRasterPos2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glRasterPos2s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2iv` instead
    ///
    pub const GlRasterPos2iv = glRasterPos2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glRasterPos2iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2i` instead
    ///
    pub const GlRasterPos2i = glRasterPos2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glRasterPos2i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2fv` instead
    ///
    pub const GlRasterPos2fv = glRasterPos2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glRasterPos2fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2f` instead
    ///
    pub const GlRasterPos2f = glRasterPos2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glRasterPos2f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glRasterPos2dv` instead
    ///
    pub const GlRasterPos2dv = glRasterPos2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glRasterPos2dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glRasterPos2d` instead
    ///
    pub const GlRasterPos2d = glRasterPos2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glRasterPos2d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlRasterPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glNormal3sv` instead
    ///
    pub const GlNormal3sv = glNormal3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glNormal3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3s` instead
    ///
    pub const GlNormal3s = glNormal3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn glNormal3s(self: QOpenGLFunctions_4_4_Compatibility, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3s(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3iv` instead
    ///
    pub const GlNormal3iv = glNormal3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glNormal3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3i` instead
    ///
    pub const GlNormal3i = glNormal3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn glNormal3i(self: QOpenGLFunctions_4_4_Compatibility, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3i(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3fv` instead
    ///
    pub const GlNormal3fv = glNormal3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glNormal3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3f` instead
    ///
    pub const GlNormal3f = glNormal3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn glNormal3f(self: QOpenGLFunctions_4_4_Compatibility, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3f(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3dv` instead
    ///
    pub const GlNormal3dv = glNormal3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glNormal3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3d` instead
    ///
    pub const GlNormal3d = glNormal3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn glNormal3d(self: QOpenGLFunctions_4_4_Compatibility, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3d(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glNormal3bv` instead
    ///
    pub const GlNormal3bv = glNormal3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glNormal3bv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glNormal3b` instead
    ///
    pub const GlNormal3b = glNormal3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn glNormal3b(self: QOpenGLFunctions_4_4_Compatibility, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormal3b(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### DEPRECATED: Use `glIndexsv` instead
    ///
    pub const GlIndexsv = glIndexsv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: []const i16 `
    ///
    pub fn glIndexsv(self: QOpenGLFunctions_4_4_Compatibility, c: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexsv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexs` instead
    ///
    pub const GlIndexs = glIndexs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: i16 `
    ///
    pub fn glIndexs(self: QOpenGLFunctions_4_4_Compatibility, c: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexs(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexiv` instead
    ///
    pub const GlIndexiv = glIndexiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: []const i32 `
    ///
    pub fn glIndexiv(self: QOpenGLFunctions_4_4_Compatibility, c: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexiv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexi` instead
    ///
    pub const GlIndexi = glIndexi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: i32 `
    ///
    pub fn glIndexi(self: QOpenGLFunctions_4_4_Compatibility, c: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexi(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexfv` instead
    ///
    pub const GlIndexfv = glIndexfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: []const f32 `
    ///
    pub fn glIndexfv(self: QOpenGLFunctions_4_4_Compatibility, c: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexfv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexf` instead
    ///
    pub const GlIndexf = glIndexf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: f32 `
    ///
    pub fn glIndexf(self: QOpenGLFunctions_4_4_Compatibility, c: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexf(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glIndexdv` instead
    ///
    pub const GlIndexdv = glIndexdv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: []const f64 `
    ///
    pub fn glIndexdv(self: QOpenGLFunctions_4_4_Compatibility, c: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexdv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexd` instead
    ///
    pub const GlIndexd = glIndexd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: f64 `
    ///
    pub fn glIndexd(self: QOpenGLFunctions_4_4_Compatibility, c: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexd(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glEnd` instead
    ///
    pub const GlEnd = glEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glEnd(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glEdgeFlagv` instead
    ///
    pub const GlEdgeFlagv = glEdgeFlagv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn glEdgeFlagv(self: QOpenGLFunctions_4_4_Compatibility, flag: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEdgeFlagv(@ptrCast(self.ptr), flag.ptr);
    }

    /// ### DEPRECATED: Use `glEdgeFlag` instead
    ///
    pub const GlEdgeFlag = glEdgeFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` flag: u8 `
    ///
    pub fn glEdgeFlag(self: QOpenGLFunctions_4_4_Compatibility, flag: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEdgeFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glColor4usv` instead
    ///
    pub const GlColor4usv = glColor4usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glColor4usv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4us` instead
    ///
    pub const GlColor4us = glColor4us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn glColor4us(self: QOpenGLFunctions_4_4_Compatibility, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4uiv` instead
    ///
    pub const GlColor4uiv = glColor4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glColor4uiv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4ui` instead
    ///
    pub const GlColor4ui = glColor4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    /// ` alpha: u32 `
    ///
    pub fn glColor4ui(self: QOpenGLFunctions_4_4_Compatibility, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4ubv` instead
    ///
    pub const GlColor4ubv = glColor4ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glColor4ubv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4ub` instead
    ///
    pub const GlColor4ub = glColor4ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn glColor4ub(self: QOpenGLFunctions_4_4_Compatibility, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4sv` instead
    ///
    pub const GlColor4sv = glColor4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glColor4sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4s` instead
    ///
    pub const GlColor4s = glColor4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    /// ` alpha: i16 `
    ///
    pub fn glColor4s(self: QOpenGLFunctions_4_4_Compatibility, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4iv` instead
    ///
    pub const GlColor4iv = glColor4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glColor4iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4i` instead
    ///
    pub const GlColor4i = glColor4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    /// ` alpha: i32 `
    ///
    pub fn glColor4i(self: QOpenGLFunctions_4_4_Compatibility, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4fv` instead
    ///
    pub const GlColor4fv = glColor4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glColor4fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4f` instead
    ///
    pub const GlColor4f = glColor4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn glColor4f(self: QOpenGLFunctions_4_4_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4dv` instead
    ///
    pub const GlColor4dv = glColor4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glColor4dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4d` instead
    ///
    pub const GlColor4d = glColor4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn glColor4d(self: QOpenGLFunctions_4_4_Compatibility, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor4bv` instead
    ///
    pub const GlColor4bv = glColor4bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glColor4bv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor4b` instead
    ///
    pub const GlColor4b = glColor4b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    /// ` alpha: i8 `
    ///
    pub fn glColor4b(self: QOpenGLFunctions_4_4_Compatibility, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor4b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glColor3usv` instead
    ///
    pub const GlColor3usv = glColor3usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glColor3usv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3us` instead
    ///
    pub const GlColor3us = glColor3us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn glColor3us(self: QOpenGLFunctions_4_4_Compatibility, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3uiv` instead
    ///
    pub const GlColor3uiv = glColor3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glColor3uiv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3ui` instead
    ///
    pub const GlColor3ui = glColor3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn glColor3ui(self: QOpenGLFunctions_4_4_Compatibility, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3ubv` instead
    ///
    pub const GlColor3ubv = glColor3ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glColor3ubv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3ub` instead
    ///
    pub const GlColor3ub = glColor3ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn glColor3ub(self: QOpenGLFunctions_4_4_Compatibility, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3sv` instead
    ///
    pub const GlColor3sv = glColor3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glColor3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3s` instead
    ///
    pub const GlColor3s = glColor3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn glColor3s(self: QOpenGLFunctions_4_4_Compatibility, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3iv` instead
    ///
    pub const GlColor3iv = glColor3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glColor3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3i` instead
    ///
    pub const GlColor3i = glColor3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn glColor3i(self: QOpenGLFunctions_4_4_Compatibility, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3fv` instead
    ///
    pub const GlColor3fv = glColor3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glColor3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3f` instead
    ///
    pub const GlColor3f = glColor3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn glColor3f(self: QOpenGLFunctions_4_4_Compatibility, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3dv` instead
    ///
    pub const GlColor3dv = glColor3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glColor3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3d` instead
    ///
    pub const GlColor3d = glColor3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn glColor3d(self: QOpenGLFunctions_4_4_Compatibility, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glColor3bv` instead
    ///
    pub const GlColor3bv = glColor3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glColor3bv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glColor3b` instead
    ///
    pub const GlColor3b = glColor3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn glColor3b(self: QOpenGLFunctions_4_4_Compatibility, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glBitmap` instead
    ///
    pub const GlBitmap = glBitmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glBitmap(self: QOpenGLFunctions_4_4_Compatibility, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBitmap(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### DEPRECATED: Use `glBegin` instead
    ///
    pub const GlBegin = glBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn glBegin(self: QOpenGLFunctions_4_4_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlBegin(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glListBase` instead
    ///
    pub const GlListBase = glListBase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` base: u32 `
    ///
    pub fn glListBase(self: QOpenGLFunctions_4_4_Compatibility, base: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlListBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### DEPRECATED: Use `glGenLists` instead
    ///
    pub const GlGenLists = glGenLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` range: i32 `
    ///
    pub fn glGenLists(self: QOpenGLFunctions_4_4_Compatibility, range: i32) u32 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlGenLists(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `glDeleteLists` instead
    ///
    pub const GlDeleteLists = glDeleteLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn glDeleteLists(self: QOpenGLFunctions_4_4_Compatibility, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDeleteLists(@ptrCast(self.ptr), @bitCast(list), @bitCast(range));
    }

    /// ### DEPRECATED: Use `glCallLists` instead
    ///
    pub const GlCallLists = glCallLists;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn glCallLists(self: QOpenGLFunctions_4_4_Compatibility, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCallLists(@ptrCast(self.ptr), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### DEPRECATED: Use `glCallList` instead
    ///
    pub const GlCallList = glCallList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` list: u32 `
    ///
    pub fn glCallList(self: QOpenGLFunctions_4_4_Compatibility, list: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCallList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### DEPRECATED: Use `glEndList` instead
    ///
    pub const GlEndList = glEndList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glEndList(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEndList(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glNewList` instead
    ///
    pub const GlNewList = glNewList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn glNewList(self: QOpenGLFunctions_4_4_Compatibility, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNewList(@ptrCast(self.ptr), @bitCast(list), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glPushClientAttrib` instead
    ///
    pub const GlPushClientAttrib = glPushClientAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPushClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn glPushClientAttrib(self: QOpenGLFunctions_4_4_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPushClientAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glPopClientAttrib` instead
    ///
    pub const GlPopClientAttrib = glPopClientAttrib;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPopClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn glPopClientAttrib(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPopClientAttrib(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glIndexubv` instead
    ///
    pub const GlIndexubv = glIndexubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: []const u8 `
    ///
    pub fn glIndexubv(self: QOpenGLFunctions_4_4_Compatibility, c: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexubv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### DEPRECATED: Use `glIndexub` instead
    ///
    pub const GlIndexub = glIndexub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` c: u8 `
    ///
    pub fn glIndexub(self: QOpenGLFunctions_4_4_Compatibility, c: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexub(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `glPrioritizeTextures` instead
    ///
    pub const GlPrioritizeTextures = glPrioritizeTextures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glPrioritizeTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` priorities: []const f32 `
    ///
    pub fn glPrioritizeTextures(self: QOpenGLFunctions_4_4_Compatibility, n: i32, textures: []const u32, priorities: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlPrioritizeTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr, priorities.ptr);
    }

    /// ### DEPRECATED: Use `glAreTexturesResident` instead
    ///
    pub const GlAreTexturesResident = glAreTexturesResident;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glAreTexturesResident)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` residences: []u8 `
    ///
    pub fn glAreTexturesResident(self: QOpenGLFunctions_4_4_Compatibility, n: i32, textures: []const u32, residences: []u8) u8 {
        return qtc.QOpenGLFunctions_4_4_Compatibility_GlAreTexturesResident(@ptrCast(self.ptr), @bitCast(n), textures.ptr, residences.ptr);
    }

    /// ### DEPRECATED: Use `glVertexPointer` instead
    ///
    pub const GlVertexPointer = glVertexPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glVertexPointer(self: QOpenGLFunctions_4_4_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glTexCoordPointer` instead
    ///
    pub const GlTexCoordPointer = glTexCoordPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glTexCoordPointer(self: QOpenGLFunctions_4_4_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glNormalPointer` instead
    ///
    pub const GlNormalPointer = glNormalPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glNormalPointer(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormalPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glInterleavedArrays` instead
    ///
    pub const GlInterleavedArrays = glInterleavedArrays;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glInterleavedArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` format: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glInterleavedArrays(self: QOpenGLFunctions_4_4_Compatibility, format: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlInterleavedArrays(@ptrCast(self.ptr), @bitCast(format), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glGetPointerv` instead
    ///
    pub const GlGetPointerv = glGetPointerv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn glGetPointerv(self: QOpenGLFunctions_4_4_Compatibility, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetPointerv(@ptrCast(self.ptr), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glIndexPointer` instead
    ///
    pub const GlIndexPointer = glIndexPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glIndexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glIndexPointer(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlIndexPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glEnableClientState` instead
    ///
    pub const GlEnableClientState = glEnableClientState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEnableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn glEnableClientState(self: QOpenGLFunctions_4_4_Compatibility, array: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEnableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glEdgeFlagPointer` instead
    ///
    pub const GlEdgeFlagPointer = glEdgeFlagPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glEdgeFlagPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glEdgeFlagPointer(self: QOpenGLFunctions_4_4_Compatibility, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlEdgeFlagPointer(@ptrCast(self.ptr), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glDisableClientState` instead
    ///
    pub const GlDisableClientState = glDisableClientState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glDisableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn glDisableClientState(self: QOpenGLFunctions_4_4_Compatibility, array: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlDisableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glColorPointer` instead
    ///
    pub const GlColorPointer = glColorPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glColorPointer(self: QOpenGLFunctions_4_4_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glArrayElement` instead
    ///
    pub const GlArrayElement = glArrayElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glArrayElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` i: i32 `
    ///
    pub fn glArrayElement(self: QOpenGLFunctions_4_4_Compatibility, i: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlArrayElement(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `glColorTable` instead
    ///
    pub const GlColorTable = glColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glColorTable(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### DEPRECATED: Use `glColorTableParameterfv` instead
    ///
    pub const GlColorTableParameterfv = glColorTableParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glColorTableParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glColorTableParameteriv` instead
    ///
    pub const GlColorTableParameteriv = glColorTableParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glColorTableParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glCopyColorTable` instead
    ///
    pub const GlCopyColorTable = glCopyColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyColorTable(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glGetColorTable` instead
    ///
    pub const GlGetColorTable = glGetColorTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` table: ?*anyopaque `
    ///
    pub fn glGetColorTable(self: QOpenGLFunctions_4_4_Compatibility, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### DEPRECATED: Use `glGetColorTableParameterfv` instead
    ///
    pub const GlGetColorTableParameterfv = glGetColorTableParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetColorTableParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetColorTableParameteriv` instead
    ///
    pub const GlGetColorTableParameteriv = glGetColorTableParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetColorTableParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glColorSubTable` instead
    ///
    pub const GlColorSubTable = glColorSubTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glColorSubTable(self: QOpenGLFunctions_4_4_Compatibility, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(count), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCopyColorSubTable` instead
    ///
    pub const GlCopyColorSubTable = glCopyColorSubTable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyColorSubTable(self: QOpenGLFunctions_4_4_Compatibility, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glConvolutionFilter1D` instead
    ///
    pub const GlConvolutionFilter1D = glConvolutionFilter1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glConvolutionFilter1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### DEPRECATED: Use `glConvolutionFilter2D` instead
    ///
    pub const GlConvolutionFilter2D = glConvolutionFilter2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glConvolutionFilter2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### DEPRECATED: Use `glConvolutionParameterf` instead
    ///
    pub const GlConvolutionParameterf = glConvolutionParameterf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glConvolutionParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: f32 `
    ///
    pub fn glConvolutionParameterf(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlConvolutionParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### DEPRECATED: Use `glConvolutionParameterfv` instead
    ///
    pub const GlConvolutionParameterfv = glConvolutionParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn glConvolutionParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glConvolutionParameteri` instead
    ///
    pub const GlConvolutionParameteri = glConvolutionParameteri;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glConvolutionParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: i32 `
    ///
    pub fn glConvolutionParameteri(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlConvolutionParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### DEPRECATED: Use `glConvolutionParameteriv` instead
    ///
    pub const GlConvolutionParameteriv = glConvolutionParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn glConvolutionParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glCopyConvolutionFilter1D` instead
    ///
    pub const GlCopyConvolutionFilter1D = glCopyConvolutionFilter1D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyConvolutionFilter1D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glCopyConvolutionFilter2D` instead
    ///
    pub const GlCopyConvolutionFilter2D = glCopyConvolutionFilter2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glCopyConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glCopyConvolutionFilter2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlCopyConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glGetConvolutionFilter` instead
    ///
    pub const GlGetConvolutionFilter = glGetConvolutionFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetConvolutionFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*anyopaque `
    ///
    pub fn glGetConvolutionFilter(self: QOpenGLFunctions_4_4_Compatibility, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetConvolutionFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### DEPRECATED: Use `glGetConvolutionParameterfv` instead
    ///
    pub const GlGetConvolutionParameterfv = glGetConvolutionParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetConvolutionParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetConvolutionParameteriv` instead
    ///
    pub const GlGetConvolutionParameteriv = glGetConvolutionParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetConvolutionParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSeparableFilter` instead
    ///
    pub const GlGetSeparableFilter = glGetSeparableFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetSeparableFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetSeparableFilter(self: QOpenGLFunctions_4_4_Compatibility, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetSeparableFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    /// ### DEPRECATED: Use `glSeparableFilter2D` instead
    ///
    pub const GlSeparableFilter2D = glSeparableFilter2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSeparableFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glSeparableFilter2D(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*const anyopaque, column: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSeparableFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column));
    }

    /// ### DEPRECATED: Use `glGetHistogram` instead
    ///
    pub const GlGetHistogram = glGetHistogram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetHistogram(self: QOpenGLFunctions_4_4_Compatibility, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### DEPRECATED: Use `glGetHistogramParameterfv` instead
    ///
    pub const GlGetHistogramParameterfv = glGetHistogramParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetHistogramParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetHistogramParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetHistogramParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetHistogramParameteriv` instead
    ///
    pub const GlGetHistogramParameteriv = glGetHistogramParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetHistogramParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetHistogramParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetHistogramParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMinmax` instead
    ///
    pub const GlGetMinmax = glGetMinmax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glGetMinmax(self: QOpenGLFunctions_4_4_Compatibility, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### DEPRECATED: Use `glGetMinmaxParameterfv` instead
    ///
    pub const GlGetMinmaxParameterfv = glGetMinmaxParameterfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMinmaxParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn glGetMinmaxParameterfv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMinmaxParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetMinmaxParameteriv` instead
    ///
    pub const GlGetMinmaxParameteriv = glGetMinmaxParameteriv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glGetMinmaxParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn glGetMinmaxParameteriv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlGetMinmaxParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glHistogram` instead
    ///
    pub const GlHistogram = glHistogram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn glHistogram(self: QOpenGLFunctions_4_4_Compatibility, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(width), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### DEPRECATED: Use `glMinmax` instead
    ///
    pub const GlMinmax = glMinmax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn glMinmax(self: QOpenGLFunctions_4_4_Compatibility, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### DEPRECATED: Use `glResetHistogram` instead
    ///
    pub const GlResetHistogram = glResetHistogram;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glResetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn glResetHistogram(self: QOpenGLFunctions_4_4_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlResetHistogram(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glResetMinmax` instead
    ///
    pub const GlResetMinmax = glResetMinmax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glResetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn glResetMinmax(self: QOpenGLFunctions_4_4_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlResetMinmax(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glMultTransposeMatrixd` instead
    ///
    pub const GlMultTransposeMatrixd = glMultTransposeMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glMultTransposeMatrixd(self: QOpenGLFunctions_4_4_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultTransposeMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMultTransposeMatrixf` instead
    ///
    pub const GlMultTransposeMatrixf = glMultTransposeMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glMultTransposeMatrixf(self: QOpenGLFunctions_4_4_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultTransposeMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadTransposeMatrixd` instead
    ///
    pub const GlLoadTransposeMatrixd = glLoadTransposeMatrixd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLoadTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn glLoadTransposeMatrixd(self: QOpenGLFunctions_4_4_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLoadTransposeMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glLoadTransposeMatrixf` instead
    ///
    pub const GlLoadTransposeMatrixf = glLoadTransposeMatrixf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glLoadTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn glLoadTransposeMatrixf(self: QOpenGLFunctions_4_4_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlLoadTransposeMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4sv` instead
    ///
    pub const GlMultiTexCoord4sv = glMultiTexCoord4sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glMultiTexCoord4sv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4s` instead
    ///
    pub const GlMultiTexCoord4s = glMultiTexCoord4s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiTexCoord4s(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4iv` instead
    ///
    pub const GlMultiTexCoord4iv = glMultiTexCoord4iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glMultiTexCoord4iv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4i` instead
    ///
    pub const GlMultiTexCoord4i = glMultiTexCoord4i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiTexCoord4i(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4fv` instead
    ///
    pub const GlMultiTexCoord4fv = glMultiTexCoord4fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glMultiTexCoord4fv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4f` instead
    ///
    pub const GlMultiTexCoord4f = glMultiTexCoord4f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiTexCoord4f(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4dv` instead
    ///
    pub const GlMultiTexCoord4dv = glMultiTexCoord4dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glMultiTexCoord4dv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord4d` instead
    ///
    pub const GlMultiTexCoord4d = glMultiTexCoord4d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
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
    pub fn glMultiTexCoord4d(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord4d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3sv` instead
    ///
    pub const GlMultiTexCoord3sv = glMultiTexCoord3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glMultiTexCoord3sv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3s` instead
    ///
    pub const GlMultiTexCoord3s = glMultiTexCoord3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn glMultiTexCoord3s(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3iv` instead
    ///
    pub const GlMultiTexCoord3iv = glMultiTexCoord3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glMultiTexCoord3iv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3i` instead
    ///
    pub const GlMultiTexCoord3i = glMultiTexCoord3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn glMultiTexCoord3i(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3fv` instead
    ///
    pub const GlMultiTexCoord3fv = glMultiTexCoord3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glMultiTexCoord3fv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3f` instead
    ///
    pub const GlMultiTexCoord3f = glMultiTexCoord3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn glMultiTexCoord3f(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3dv` instead
    ///
    pub const GlMultiTexCoord3dv = glMultiTexCoord3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glMultiTexCoord3dv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord3d` instead
    ///
    pub const GlMultiTexCoord3d = glMultiTexCoord3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn glMultiTexCoord3d(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord3d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2sv` instead
    ///
    pub const GlMultiTexCoord2sv = glMultiTexCoord2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glMultiTexCoord2sv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2s` instead
    ///
    pub const GlMultiTexCoord2s = glMultiTexCoord2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn glMultiTexCoord2s(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2iv` instead
    ///
    pub const GlMultiTexCoord2iv = glMultiTexCoord2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glMultiTexCoord2iv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2i` instead
    ///
    pub const GlMultiTexCoord2i = glMultiTexCoord2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn glMultiTexCoord2i(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2fv` instead
    ///
    pub const GlMultiTexCoord2fv = glMultiTexCoord2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glMultiTexCoord2fv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2f` instead
    ///
    pub const GlMultiTexCoord2f = glMultiTexCoord2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn glMultiTexCoord2f(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2dv` instead
    ///
    pub const GlMultiTexCoord2dv = glMultiTexCoord2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glMultiTexCoord2dv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord2d` instead
    ///
    pub const GlMultiTexCoord2d = glMultiTexCoord2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn glMultiTexCoord2d(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1sv` instead
    ///
    pub const GlMultiTexCoord1sv = glMultiTexCoord1sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glMultiTexCoord1sv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1s` instead
    ///
    pub const GlMultiTexCoord1s = glMultiTexCoord1s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    pub fn glMultiTexCoord1s(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1iv` instead
    ///
    pub const GlMultiTexCoord1iv = glMultiTexCoord1iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glMultiTexCoord1iv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1i` instead
    ///
    pub const GlMultiTexCoord1i = glMultiTexCoord1i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    pub fn glMultiTexCoord1i(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1fv` instead
    ///
    pub const GlMultiTexCoord1fv = glMultiTexCoord1fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glMultiTexCoord1fv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1f` instead
    ///
    pub const GlMultiTexCoord1f = glMultiTexCoord1f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    pub fn glMultiTexCoord1f(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1dv` instead
    ///
    pub const GlMultiTexCoord1dv = glMultiTexCoord1dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glMultiTexCoord1dv(self: QOpenGLFunctions_4_4_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoord1d` instead
    ///
    pub const GlMultiTexCoord1d = glMultiTexCoord1d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    pub fn glMultiTexCoord1d(self: QOpenGLFunctions_4_4_Compatibility, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoord1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glClientActiveTexture` instead
    ///
    pub const GlClientActiveTexture = glClientActiveTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glClientActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    pub fn glClientActiveTexture(self: QOpenGLFunctions_4_4_Compatibility, texture: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlClientActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glWindowPos3sv` instead
    ///
    pub const GlWindowPos3sv = glWindowPos3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glWindowPos3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos3s` instead
    ///
    pub const GlWindowPos3s = glWindowPos3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn glWindowPos3s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glWindowPos3iv` instead
    ///
    pub const GlWindowPos3iv = glWindowPos3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glWindowPos3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos3i` instead
    ///
    pub const GlWindowPos3i = glWindowPos3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn glWindowPos3i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glWindowPos3fv` instead
    ///
    pub const GlWindowPos3fv = glWindowPos3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glWindowPos3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos3f` instead
    ///
    pub const GlWindowPos3f = glWindowPos3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn glWindowPos3f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glWindowPos3dv` instead
    ///
    pub const GlWindowPos3dv = glWindowPos3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glWindowPos3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos3d` instead
    ///
    pub const GlWindowPos3d = glWindowPos3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn glWindowPos3d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glWindowPos2sv` instead
    ///
    pub const GlWindowPos2sv = glWindowPos2sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glWindowPos2sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos2s` instead
    ///
    pub const GlWindowPos2s = glWindowPos2s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn glWindowPos2s(self: QOpenGLFunctions_4_4_Compatibility, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glWindowPos2iv` instead
    ///
    pub const GlWindowPos2iv = glWindowPos2iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glWindowPos2iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos2i` instead
    ///
    pub const GlWindowPos2i = glWindowPos2i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn glWindowPos2i(self: QOpenGLFunctions_4_4_Compatibility, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glWindowPos2fv` instead
    ///
    pub const GlWindowPos2fv = glWindowPos2fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glWindowPos2fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos2f` instead
    ///
    pub const GlWindowPos2f = glWindowPos2f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn glWindowPos2f(self: QOpenGLFunctions_4_4_Compatibility, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glWindowPos2dv` instead
    ///
    pub const GlWindowPos2dv = glWindowPos2dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glWindowPos2dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glWindowPos2d` instead
    ///
    pub const GlWindowPos2d = glWindowPos2d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glWindowPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn glWindowPos2d(self: QOpenGLFunctions_4_4_Compatibility, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlWindowPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glSecondaryColorPointer` instead
    ///
    pub const GlSecondaryColorPointer = glSecondaryColorPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glSecondaryColorPointer(self: QOpenGLFunctions_4_4_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3usv` instead
    ///
    pub const GlSecondaryColor3usv = glSecondaryColor3usv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u16 `
    ///
    pub fn glSecondaryColor3usv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3us` instead
    ///
    pub const GlSecondaryColor3us = glSecondaryColor3us;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn glSecondaryColor3us(self: QOpenGLFunctions_4_4_Compatibility, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3uiv` instead
    ///
    pub const GlSecondaryColor3uiv = glSecondaryColor3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u32 `
    ///
    pub fn glSecondaryColor3uiv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3ui` instead
    ///
    pub const GlSecondaryColor3ui = glSecondaryColor3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn glSecondaryColor3ui(self: QOpenGLFunctions_4_4_Compatibility, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3ubv` instead
    ///
    pub const GlSecondaryColor3ubv = glSecondaryColor3ubv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const u8 `
    ///
    pub fn glSecondaryColor3ubv(self: QOpenGLFunctions_4_4_Compatibility, v: []const u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3ub` instead
    ///
    pub const GlSecondaryColor3ub = glSecondaryColor3ub;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn glSecondaryColor3ub(self: QOpenGLFunctions_4_4_Compatibility, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3sv` instead
    ///
    pub const GlSecondaryColor3sv = glSecondaryColor3sv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn glSecondaryColor3sv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3s` instead
    ///
    pub const GlSecondaryColor3s = glSecondaryColor3s;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn glSecondaryColor3s(self: QOpenGLFunctions_4_4_Compatibility, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3iv` instead
    ///
    pub const GlSecondaryColor3iv = glSecondaryColor3iv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn glSecondaryColor3iv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3i` instead
    ///
    pub const GlSecondaryColor3i = glSecondaryColor3i;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn glSecondaryColor3i(self: QOpenGLFunctions_4_4_Compatibility, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3fv` instead
    ///
    pub const GlSecondaryColor3fv = glSecondaryColor3fv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn glSecondaryColor3fv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3f` instead
    ///
    pub const GlSecondaryColor3f = glSecondaryColor3f;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn glSecondaryColor3f(self: QOpenGLFunctions_4_4_Compatibility, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3dv` instead
    ///
    pub const GlSecondaryColor3dv = glSecondaryColor3dv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn glSecondaryColor3dv(self: QOpenGLFunctions_4_4_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3d` instead
    ///
    pub const GlSecondaryColor3d = glSecondaryColor3d;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn glSecondaryColor3d(self: QOpenGLFunctions_4_4_Compatibility, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glSecondaryColor3bv` instead
    ///
    pub const GlSecondaryColor3bv = glSecondaryColor3bv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn glSecondaryColor3bv(self: QOpenGLFunctions_4_4_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColor3b` instead
    ///
    pub const GlSecondaryColor3b = glSecondaryColor3b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn glSecondaryColor3b(self: QOpenGLFunctions_4_4_Compatibility, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### DEPRECATED: Use `glFogCoordPointer` instead
    ///
    pub const GlFogCoordPointer = glFogCoordPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn glFogCoordPointer(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogCoordPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glFogCoorddv` instead
    ///
    pub const GlFogCoorddv = glFogCoorddv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogCoorddv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: []const f64 `
    ///
    pub fn glFogCoorddv(self: QOpenGLFunctions_4_4_Compatibility, coord: []const f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogCoorddv(@ptrCast(self.ptr), coord.ptr);
    }

    /// ### DEPRECATED: Use `glFogCoordd` instead
    ///
    pub const GlFogCoordd = glFogCoordd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogCoordd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: f64 `
    ///
    pub fn glFogCoordd(self: QOpenGLFunctions_4_4_Compatibility, coord: f64) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogCoordd(@ptrCast(self.ptr), @bitCast(coord));
    }

    /// ### DEPRECATED: Use `glFogCoordfv` instead
    ///
    pub const GlFogCoordfv = glFogCoordfv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogCoordfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: []const f32 `
    ///
    pub fn glFogCoordfv(self: QOpenGLFunctions_4_4_Compatibility, coord: []const f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogCoordfv(@ptrCast(self.ptr), coord.ptr);
    }

    /// ### DEPRECATED: Use `glFogCoordf` instead
    ///
    pub const GlFogCoordf = glFogCoordf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glFogCoordf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` coord: f32 `
    ///
    pub fn glFogCoordf(self: QOpenGLFunctions_4_4_Compatibility, coord: f32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlFogCoordf(@ptrCast(self.ptr), @bitCast(coord));
    }

    /// ### DEPRECATED: Use `glSecondaryColorP3uiv` instead
    ///
    pub const GlSecondaryColorP3uiv = glSecondaryColorP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColorP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` color: []const u32 `
    ///
    pub fn glSecondaryColorP3uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, color: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColorP3uiv(@ptrCast(self.ptr), @bitCast(typeVal), color.ptr);
    }

    /// ### DEPRECATED: Use `glSecondaryColorP3ui` instead
    ///
    pub const GlSecondaryColorP3ui = glSecondaryColorP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glSecondaryColorP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` color: u32 `
    ///
    pub fn glSecondaryColorP3ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlSecondaryColorP3ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(color));
    }

    /// ### DEPRECATED: Use `glColorP4uiv` instead
    ///
    pub const GlColorP4uiv = glColorP4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` color: []const u32 `
    ///
    pub fn glColorP4uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, color: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorP4uiv(@ptrCast(self.ptr), @bitCast(typeVal), color.ptr);
    }

    /// ### DEPRECATED: Use `glColorP4ui` instead
    ///
    pub const GlColorP4ui = glColorP4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` color: u32 `
    ///
    pub fn glColorP4ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorP4ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(color));
    }

    /// ### DEPRECATED: Use `glColorP3uiv` instead
    ///
    pub const GlColorP3uiv = glColorP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` color: []const u32 `
    ///
    pub fn glColorP3uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, color: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorP3uiv(@ptrCast(self.ptr), @bitCast(typeVal), color.ptr);
    }

    /// ### DEPRECATED: Use `glColorP3ui` instead
    ///
    pub const GlColorP3ui = glColorP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glColorP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` color: u32 `
    ///
    pub fn glColorP3ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlColorP3ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(color));
    }

    /// ### DEPRECATED: Use `glNormalP3uiv` instead
    ///
    pub const GlNormalP3uiv = glNormalP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormalP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glNormalP3uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormalP3uiv(@ptrCast(self.ptr), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glNormalP3ui` instead
    ///
    pub const GlNormalP3ui = glNormalP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glNormalP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glNormalP3ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlNormalP3ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP4uiv` instead
    ///
    pub const GlMultiTexCoordP4uiv = glMultiTexCoordP4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glMultiTexCoordP4uiv(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP4uiv(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP4ui` instead
    ///
    pub const GlMultiTexCoordP4ui = glMultiTexCoordP4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glMultiTexCoordP4ui(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP4ui(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP3uiv` instead
    ///
    pub const GlMultiTexCoordP3uiv = glMultiTexCoordP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glMultiTexCoordP3uiv(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP3uiv(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP3ui` instead
    ///
    pub const GlMultiTexCoordP3ui = glMultiTexCoordP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glMultiTexCoordP3ui(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP3ui(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP2uiv` instead
    ///
    pub const GlMultiTexCoordP2uiv = glMultiTexCoordP2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glMultiTexCoordP2uiv(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP2uiv(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP2ui` instead
    ///
    pub const GlMultiTexCoordP2ui = glMultiTexCoordP2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glMultiTexCoordP2ui(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP2ui(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP1uiv` instead
    ///
    pub const GlMultiTexCoordP1uiv = glMultiTexCoordP1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glMultiTexCoordP1uiv(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP1uiv(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glMultiTexCoordP1ui` instead
    ///
    pub const GlMultiTexCoordP1ui = glMultiTexCoordP1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glMultiTexCoordP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glMultiTexCoordP1ui(self: QOpenGLFunctions_4_4_Compatibility, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlMultiTexCoordP1ui(@ptrCast(self.ptr), @bitCast(texture), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glTexCoordP4uiv` instead
    ///
    pub const GlTexCoordP4uiv = glTexCoordP4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glTexCoordP4uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP4uiv(@ptrCast(self.ptr), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoordP4ui` instead
    ///
    pub const GlTexCoordP4ui = glTexCoordP4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glTexCoordP4ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP4ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glTexCoordP3uiv` instead
    ///
    pub const GlTexCoordP3uiv = glTexCoordP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glTexCoordP3uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP3uiv(@ptrCast(self.ptr), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoordP3ui` instead
    ///
    pub const GlTexCoordP3ui = glTexCoordP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glTexCoordP3ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP3ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glTexCoordP2uiv` instead
    ///
    pub const GlTexCoordP2uiv = glTexCoordP2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glTexCoordP2uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP2uiv(@ptrCast(self.ptr), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoordP2ui` instead
    ///
    pub const GlTexCoordP2ui = glTexCoordP2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glTexCoordP2ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP2ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glTexCoordP1uiv` instead
    ///
    pub const GlTexCoordP1uiv = glTexCoordP1uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: []const u32 `
    ///
    pub fn glTexCoordP1uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP1uiv(@ptrCast(self.ptr), @bitCast(typeVal), coords.ptr);
    }

    /// ### DEPRECATED: Use `glTexCoordP1ui` instead
    ///
    pub const GlTexCoordP1ui = glTexCoordP1ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glTexCoordP1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` coords: u32 `
    ///
    pub fn glTexCoordP1ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlTexCoordP1ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(coords));
    }

    /// ### DEPRECATED: Use `glVertexP4uiv` instead
    ///
    pub const GlVertexP4uiv = glVertexP4uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexP4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexP4uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexP4uiv(@ptrCast(self.ptr), @bitCast(typeVal), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexP4ui` instead
    ///
    pub const GlVertexP4ui = glVertexP4ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexP4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexP4ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexP4ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexP3uiv` instead
    ///
    pub const GlVertexP3uiv = glVertexP3uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexP3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexP3uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexP3uiv(@ptrCast(self.ptr), @bitCast(typeVal), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexP3ui` instead
    ///
    pub const GlVertexP3ui = glVertexP3ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexP3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexP3ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexP3ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glVertexP2uiv` instead
    ///
    pub const GlVertexP2uiv = glVertexP2uiv;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexP2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn glVertexP2uiv(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, value: []const u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexP2uiv(@ptrCast(self.ptr), @bitCast(typeVal), value.ptr);
    }

    /// ### DEPRECATED: Use `glVertexP2ui` instead
    ///
    pub const GlVertexP2ui = glVertexP2ui;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#glVertexP2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` value: u32 `
    ///
    pub fn glVertexP2ui(self: QOpenGLFunctions_4_4_Compatibility, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_GlVertexP2ui(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(value));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn isInitialized(self: QOpenGLFunctions_4_4_Compatibility) bool {
        return qtc.QOpenGLFunctions_4_4_Compatibility_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn superIsInitialized(self: QOpenGLFunctions_4_4_Compatibility) bool {
        return qtc.QOpenGLFunctions_4_4_Compatibility_SuperIsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: QOpenGLFunctions_4_4_Compatibility, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn setOwningContext(self: QOpenGLFunctions_4_4_Compatibility, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_4_4_Compatibility_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn superSetOwningContext(self: QOpenGLFunctions_4_4_Compatibility, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_4_4_Compatibility_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_4_4_Compatibility, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn onSetOwningContext(self: QOpenGLFunctions_4_4_Compatibility, callback: *const fn (QOpenGLFunctions_4_4_Compatibility, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn owningContext(self: QOpenGLFunctions_4_4_Compatibility) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_4_4_Compatibility_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn superOwningContext(self: QOpenGLFunctions_4_4_Compatibility) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_4_4_Compatibility_SuperOwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_4_4_Compatibility`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn onOwningContext(self: QOpenGLFunctions_4_4_Compatibility, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-compatibility.html#dtor.QOpenGLFunctions_4_4_Compatibility)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_4_4_Compatibility `
    ///
    pub fn delete(self: QOpenGLFunctions_4_4_Compatibility) void {
        qtc.QOpenGLFunctions_4_4_Compatibility_Delete(@ptrCast(self.ptr));
    }
};
