const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html)
pub const QOpenGLFunctions_3_2_Compatibility = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFunctions_3_2_Compatibility,

    pub const _is_QOpenGLFunctions_3_2_Compatibility = {};
    pub const _is_QAbstractOpenGLFunctions = {};

    /// New constructs a new QOpenGLFunctions_3_2_Compatibility object.
    ///
    pub fn New() QOpenGLFunctions_3_2_Compatibility {
        return .{ .ptr = qtc.QOpenGLFunctions_3_2_Compatibility_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn InitializeOpenGLFunctions(self: QOpenGLFunctions_3_2_Compatibility) bool {
        return qtc.QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnInitializeOpenGLFunctions(self: QOpenGLFunctions_3_2_Compatibility, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_OnInitializeOpenGLFunctions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitializeOpenGLFunctions` instead
    ///
    pub const QBaseInitializeOpenGLFunctions = SuperInitializeOpenGLFunctions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn SuperInitializeOpenGLFunctions(self: QOpenGLFunctions_3_2_Compatibility) bool {
        return qtc.QOpenGLFunctions_3_2_Compatibility_SuperInitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlViewport(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDepthRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` nearVal: f64 `
    ///
    /// ` farVal: f64 `
    ///
    pub fn GlDepthRange(self: QOpenGLFunctions_3_2_Compatibility, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDepthRange(@ptrCast(self.ptr), @bitCast(nearVal), @bitCast(farVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: QOpenGLFunctions_3_2_Compatibility, cap: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexLevelParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexLevelParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetTexImage(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: QOpenGLFunctions_3_2_Compatibility, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_3_2_Compatibility_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetDoublev)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetDoublev(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetDoublev(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlReadPixels(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelStoref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelStoref(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelStoref(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: QOpenGLFunctions_3_2_Compatibility, func: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: QOpenGLFunctions_3_2_Compatibility, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: QOpenGLFunctions_3_2_Compatibility, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLogicOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` opcode: u32 `
    ///
    pub fn GlLogicOp(self: QOpenGLFunctions_3_2_Compatibility, opcode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLogicOp(@ptrCast(self.ptr), @bitCast(opcode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: QOpenGLFunctions_3_2_Compatibility, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlFlush(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFlush(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlFinish(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFinish(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: QOpenGLFunctions_3_2_Compatibility, cap: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: QOpenGLFunctions_3_2_Compatibility, cap: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: QOpenGLFunctions_3_2_Compatibility, flag: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColorMask(self: QOpenGLFunctions_3_2_Compatibility, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: QOpenGLFunctions_3_2_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` depth: f64 `
    ///
    pub fn GlClearDepth(self: QOpenGLFunctions_3_2_Compatibility, depth: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: QOpenGLFunctions_3_2_Compatibility, s: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearColor(self: QOpenGLFunctions_3_2_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: QOpenGLFunctions_3_2_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlDrawBuffer(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexImage2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexImage1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlScissor(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPolygonMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlPolygonMode(self: QOpenGLFunctions_3_2_Compatibility, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPolygonMode(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: f32 `
    ///
    pub fn GlPointSize(self: QOpenGLFunctions_3_2_Compatibility, size: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: QOpenGLFunctions_3_2_Compatibility, width: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: QOpenGLFunctions_3_2_Compatibility, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: []const u8 `
    ///
    pub fn GlIndexubv(self: QOpenGLFunctions_3_2_Compatibility, c: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexubv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: u8 `
    ///
    pub fn GlIndexub(self: QOpenGLFunctions_3_2_Compatibility, c: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexub(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: QOpenGLFunctions_3_2_Compatibility, texture: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: QOpenGLFunctions_3_2_Compatibility, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: QOpenGLFunctions_3_2_Compatibility, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: QOpenGLFunctions_3_2_Compatibility, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexSubImage2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexSubImage1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyTexSubImage2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyTexSubImage1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyTexImage2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyTexImage1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: QOpenGLFunctions_3_2_Compatibility, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetPointerv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetPointerv(@ptrCast(self.ptr), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn GlDrawElements(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyTexSubImage3D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexSubImage3D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexImage3D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlDrawRangeElements(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlBlendColor(self: QOpenGLFunctions_3_2_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBlendColor(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetCompressedTexImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` img: ?*anyopaque `
    ///
    pub fn GlGetCompressedTexImage(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, img: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetCompressedTexImage(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @ptrCast(img));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompressedTexSubImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCompressedTexSubImage1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompressedTexSubImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(width), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCompressedTexSubImage2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCompressedTexSubImage3D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompressedTexImage1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCompressedTexImage1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompressedTexImage1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCompressedTexImage2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCompressedTexImage3D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: QOpenGLFunctions_3_2_Compatibility, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSampleCoverage(@ptrCast(self.ptr), @bitCast(value), @bitCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: QOpenGLFunctions_3_2_Compatibility, texture: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPointParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlPointParameteriv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPointParameteriv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPointParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPointParameteri(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPointParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPointParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlPointParameterfv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPointParameterfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPointParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPointParameterf(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPointParameterf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMultiDrawElements(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiDrawElements(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: []const i32 `
    ///
    /// ` count: []const i32 `
    ///
    /// ` drawcount: i32 `
    ///
    pub fn GlMultiDrawArrays(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, first: []const i32, count: []const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiDrawArrays(@ptrCast(self.ptr), @bitCast(mode), first.ptr, count.ptr, @bitCast(drawcount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` sfactorRGB: u32 `
    ///
    /// ` dfactorRGB: u32 `
    ///
    /// ` sfactorAlpha: u32 `
    ///
    /// ` dfactorAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparate(self: QOpenGLFunctions_3_2_Compatibility, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(sfactorRGB), @bitCast(dfactorRGB), @bitCast(sfactorAlpha), @bitCast(dfactorAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetBufferPointerv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlMapBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn GlGetBufferSubData(self: QOpenGLFunctions_3_2_Compatibility, target: u32, offset: isize, size: isize, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlBufferSubData(self: QOpenGLFunctions_3_2_Compatibility, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn GlBufferData(self: QOpenGLFunctions_3_2_Compatibility, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: QOpenGLFunctions_3_2_Compatibility, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: QOpenGLFunctions_3_2_Compatibility, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: QOpenGLFunctions_3_2_Compatibility, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: QOpenGLFunctions_3_2_Compatibility, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetQueryObjectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryObjectiv(self: QOpenGLFunctions_3_2_Compatibility, id: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetQueryObjectiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: QOpenGLFunctions_3_2_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: QOpenGLFunctions_3_2_Compatibility, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: QOpenGLFunctions_3_2_Compatibility, id: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: QOpenGLFunctions_3_2_Compatibility, n: i32, ids: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: QOpenGLFunctions_3_2_Compatibility, n: i32, ids: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttribPointer(self: QOpenGLFunctions_3_2_Compatibility, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: QOpenGLFunctions_3_2_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform4iv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform3iv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform2iv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlUniform1iv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform4fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform3fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform2fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniform1fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlUniform4i(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn GlUniform3i(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlUniform2i(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlUniform1i(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlUniform4f(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn GlUniform3f(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlUniform2f(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlUniform1f(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: QOpenGLFunctions_3_2_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlShaderSource(self: QOpenGLFunctions_3_2_Compatibility, allocator: std.mem.Allocator, shader: u32, count: i32, stringVal: []const [:0]const u8, length: []const i32) void {
        const stringVal_chararr = allocator.alloc([*c]const u8, stringVal.len) catch @panic("qopenglfunctions_3_2_compatibility.GlShaderSource: Memory allocation failed");
        defer allocator.free(stringVal_chararr);
        for (stringVal, 0..stringVal.len) |str, i|
            stringVal_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_3_2_Compatibility_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), stringVal_chararr.ptr, length.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: QOpenGLFunctions_3_2_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: QOpenGLFunctions_3_2_Compatibility, shader: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: QOpenGLFunctions_3_2_Compatibility, program: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn GlGetVertexAttribPointerv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetVertexAttribdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetVertexAttribdv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribdv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: QOpenGLFunctions_3_2_Compatibility, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: QOpenGLFunctions_3_2_Compatibility, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: QOpenGLFunctions_3_2_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn GlGetShaderSource(self: QOpenGLFunctions_3_2_Compatibility, shader: u32, bufSize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetShaderInfoLog(self: QOpenGLFunctions_3_2_Compatibility, shader: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: QOpenGLFunctions_3_2_Compatibility, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetProgramInfoLog(self: QOpenGLFunctions_3_2_Compatibility, program: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: QOpenGLFunctions_3_2_Compatibility, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: QOpenGLFunctions_3_2_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` maxCount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` obj: []u32 `
    ///
    pub fn GlGetAttachedShaders(self: QOpenGLFunctions_3_2_Compatibility, program: u32, maxCount: i32, count: []i32, obj: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxCount), count.ptr, obj.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: QOpenGLFunctions_3_2_Compatibility, index: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: QOpenGLFunctions_3_2_Compatibility, index: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: QOpenGLFunctions_3_2_Compatibility, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: QOpenGLFunctions_3_2_Compatibility, shader: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: QOpenGLFunctions_3_2_Compatibility, program: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: QOpenGLFunctions_3_2_Compatibility, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlCreateProgram(self: QOpenGLFunctions_3_2_Compatibility) u32 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: QOpenGLFunctions_3_2_Compatibility, shader: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: QOpenGLFunctions_3_2_Compatibility, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: QOpenGLFunctions_3_2_Compatibility, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: QOpenGLFunctions_3_2_Compatibility, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFuncSeparate(self: QOpenGLFunctions_3_2_Compatibility, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` sfail: u32 `
    ///
    /// ` dpfail: u32 `
    ///
    /// ` dppass: u32 `
    ///
    pub fn GlStencilOpSeparate(self: QOpenGLFunctions_3_2_Compatibility, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(sfail), @bitCast(dpfail), @bitCast(dppass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: QOpenGLFunctions_3_2_Compatibility, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x3fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x4fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x2fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x4fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x2fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x3fv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn GlIsVertexArray(self: QOpenGLFunctions_3_2_Compatibility, array: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn GlGenVertexArrays(self: QOpenGLFunctions_3_2_Compatibility, n: i32, arrays: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn GlDeleteVertexArrays(self: QOpenGLFunctions_3_2_Compatibility, n: i32, arrays: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn GlBindVertexArray(self: QOpenGLFunctions_3_2_Compatibility, array: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlFlushMappedBufferRange(self: QOpenGLFunctions_3_2_Compatibility, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBufferRange(self: QOpenGLFunctions_3_2_Compatibility, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlFramebufferTextureLayer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlRenderbufferStorageMultisample(self: QOpenGLFunctions_3_2_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlBlitFramebuffer(self: QOpenGLFunctions_3_2_Compatibility, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: QOpenGLFunctions_3_2_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetFramebufferAttachmentParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlFramebufferRenderbuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFramebufferTexture3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlFramebufferTexture3D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level), @bitCast(zoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlFramebufferTexture2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFramebufferTexture1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlFramebufferTexture1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: QOpenGLFunctions_3_2_Compatibility, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: QOpenGLFunctions_3_2_Compatibility, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: QOpenGLFunctions_3_2_Compatibility, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlRenderbufferStorage(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: QOpenGLFunctions_3_2_Compatibility, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: QOpenGLFunctions_3_2_Compatibility, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: QOpenGLFunctions_3_2_Compatibility, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlGetStringi(self: QOpenGLFunctions_3_2_Compatibility, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_3_2_Compatibility_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn GlClearBufferfi(self: QOpenGLFunctions_3_2_Compatibility, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlClearBufferfv(self: QOpenGLFunctions_3_2_Compatibility, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlClearBufferuiv(self: QOpenGLFunctions_3_2_Compatibility, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlClearBufferiv(self: QOpenGLFunctions_3_2_Compatibility, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetTexParameterIuiv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameterIiv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn GlTexParameterIuiv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameterIiv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform4uiv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform3uiv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform2uiv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform1uiv(self: QOpenGLFunctions_3_2_Compatibility, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlUniform4ui(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn GlUniform3ui(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlUniform2ui(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlUniform1ui(self: QOpenGLFunctions_3_2_Compatibility, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataLocation(self: QOpenGLFunctions_3_2_Compatibility, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` color: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindFragDataLocation(self: QOpenGLFunctions_3_2_Compatibility, program: u32, color: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindFragDataLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(color), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformuiv(self: QOpenGLFunctions_3_2_Compatibility, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetVertexAttribIuiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribIiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttribIPointer(self: QOpenGLFunctions_3_2_Compatibility, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEndConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlEndConditionalRender(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEndConditionalRender(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBeginConditionalRender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` id: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBeginConditionalRender(self: QOpenGLFunctions_3_2_Compatibility, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBeginConditionalRender(@ptrCast(self.ptr), @bitCast(id), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClampColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` clamp: u32 `
    ///
    pub fn GlClampColor(self: QOpenGLFunctions_3_2_Compatibility, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClampColor(@ptrCast(self.ptr), @bitCast(target), @bitCast(clamp));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTransformFeedbackVaryings(self: QOpenGLFunctions_3_2_Compatibility, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*c]const u8, varyings.len) catch @panic("qopenglfunctions_3_2_compatibility.GlTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), varyings_chararr.ptr, @bitCast(bufferMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBufferBase(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlBindBufferRange(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlEndTransformFeedback(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn GlBeginTransformFeedback(self: QOpenGLFunctions_3_2_Compatibility, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlIsEnabledi(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisablei(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnablei(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn GlGetIntegeriV(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn GlGetBooleaniV(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlColorMaski(self: QOpenGLFunctions_3_2_Compatibility, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyBufferSubData(self: QOpenGLFunctions_3_2_Compatibility, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn GlUniformBlockBinding(self: QOpenGLFunctions_3_2_Compatibility, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetActiveUniformBlockName(self: QOpenGLFunctions_3_2_Compatibility, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetActiveUniformBlockiv(self: QOpenGLFunctions_3_2_Compatibility, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn GlGetUniformBlockIndex(self: QOpenGLFunctions_3_2_Compatibility, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetActiveUniformName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetActiveUniformName(self: QOpenGLFunctions_3_2_Compatibility, program: u32, uniformIndex: u32, bufSize: i32, length: []i32, uniformName: [:0]u8) void {
        const uniformName_Cstring = uniformName.ptr;
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformIndex), @bitCast(bufSize), length.ptr, uniformName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetActiveUniformsiv(self: QOpenGLFunctions_3_2_Compatibility, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetUniformIndices(self: QOpenGLFunctions_3_2_Compatibility, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*c]const u8, uniformNames.len) catch @panic("qopenglfunctions_3_2_compatibility.GlGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformNames_chararr.ptr, uniformIndices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPrimitiveRestartIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    pub fn GlPrimitiveRestartIndex(self: QOpenGLFunctions_3_2_Compatibility, index: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPrimitiveRestartIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlTexBuffer(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlDrawElementsInstanced(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawArraysInstanced(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlSampleMaski(self: QOpenGLFunctions_3_2_Compatibility, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSampleMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn GlGetMultisamplefv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMultisamplefv(@ptrCast(self.ptr), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexImage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexImage3DMultisample(self: QOpenGLFunctions_3_2_Compatibility, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexImage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexImage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlTexImage2DMultisample(self: QOpenGLFunctions_3_2_Compatibility, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexImage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetInteger64v(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetInteger64v(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glProvokingVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlProvokingVertex(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlProvokingVertex(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMultiDrawElementsBaseVertex(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, count: []const i32, typeVal: u32, indices: *?*const anyopaque, drawcount: i32, basevertex: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), count.ptr, @bitCast(typeVal), @ptrCast(indices), @bitCast(drawcount), basevertex.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlDrawElementsInstancedBaseVertex(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawElementsInstancedBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlDrawRangeElementsBaseVertex(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawRangeElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlDrawElementsBaseVertex(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn GlFramebufferTexture(self: QOpenGLFunctions_3_2_Compatibility, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetBufferParameteri64v(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetBufferParameteri64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn GlGetInteger64iV(self: QOpenGLFunctions_3_2_Compatibility, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetInteger64iV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTranslatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlTranslatef(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTranslatef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTranslated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlTranslated(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTranslated(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glScalef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlScalef(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlScalef(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glScaled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlScaled(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlScaled(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRotatef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` angle: f32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRotatef(self: QOpenGLFunctions_3_2_Compatibility, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRotatef(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRotated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` angle: f64 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRotated(self: QOpenGLFunctions_3_2_Compatibility, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRotated(@ptrCast(self.ptr), @bitCast(angle), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPushMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlPushMatrix(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPushMatrix(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPopMatrix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlPopMatrix(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPopMatrix(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glOrtho)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlOrtho(self: QOpenGLFunctions_3_2_Compatibility, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlOrtho(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultMatrixd(self: QOpenGLFunctions_3_2_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultMatrixf(self: QOpenGLFunctions_3_2_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMatrixMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlMatrixMode(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMatrixMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLoadMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadMatrixd(self: QOpenGLFunctions_3_2_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLoadMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLoadMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadMatrixf(self: QOpenGLFunctions_3_2_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLoadMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLoadIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlLoadIdentity(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLoadIdentity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFrustum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlFrustum(self: QOpenGLFunctions_3_2_Compatibility, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFrustum(@ptrCast(self.ptr), @bitCast(left), @bitCast(right), @bitCast(bottom), @bitCast(top), @bitCast(zNear), @bitCast(zFar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIsList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` list: u32 `
    ///
    pub fn GlIsList(self: QOpenGLFunctions_3_2_Compatibility, list: u32) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlIsList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexGeniv(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexGenfv(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f64 `
    ///
    pub fn GlGetTexGendv(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, params: []f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexEnviv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexEnvfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: []u8 `
    ///
    pub fn GlGetPolygonStipple(self: QOpenGLFunctions_3_2_Compatibility, mask: []u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u16 `
    ///
    pub fn GlGetPixelMapusv(self: QOpenGLFunctions_3_2_Compatibility, mapVal: u32, values: []u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetPixelMapusv(@ptrCast(self.ptr), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []u32 `
    ///
    pub fn GlGetPixelMapuiv(self: QOpenGLFunctions_3_2_Compatibility, mapVal: u32, values: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetPixelMapuiv(@ptrCast(self.ptr), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` values: []f32 `
    ///
    pub fn GlGetPixelMapfv(self: QOpenGLFunctions_3_2_Compatibility, mapVal: u32, values: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetPixelMapfv(@ptrCast(self.ptr), @bitCast(mapVal), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMaterialiv(self: QOpenGLFunctions_3_2_Compatibility, face: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMaterialfv(self: QOpenGLFunctions_3_2_Compatibility, face: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMapiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []i32 `
    ///
    pub fn GlGetMapiv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, query: u32, v: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMapiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f32 `
    ///
    pub fn GlGetMapfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, query: u32, v: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMapfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMapdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` query: u32 `
    ///
    /// ` v: []f64 `
    ///
    pub fn GlGetMapdv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, query: u32, v: []f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMapdv(@ptrCast(self.ptr), @bitCast(target), @bitCast(query), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetLightiv(self: QOpenGLFunctions_3_2_Compatibility, light: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetLightfv(self: QOpenGLFunctions_3_2_Compatibility, light: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []f64 `
    ///
    pub fn GlGetClipPlane(self: QOpenGLFunctions_3_2_Compatibility, plane: u32, equation: []f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDrawPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlDrawPixels(self: QOpenGLFunctions_3_2_Compatibility, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDrawPixels(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyPixels(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelMapusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u16 `
    ///
    pub fn GlPixelMapusv(self: QOpenGLFunctions_3_2_Compatibility, mapVal: u32, mapsize: i32, values: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelMapusv(@ptrCast(self.ptr), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelMapuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const u32 `
    ///
    pub fn GlPixelMapuiv(self: QOpenGLFunctions_3_2_Compatibility, mapVal: u32, mapsize: i32, values: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelMapuiv(@ptrCast(self.ptr), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelMapfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mapVal: u32 `
    ///
    /// ` mapsize: i32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlPixelMapfv(self: QOpenGLFunctions_3_2_Compatibility, mapVal: u32, mapsize: i32, values: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelMapfv(@ptrCast(self.ptr), @bitCast(mapVal), @bitCast(mapsize), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelTransferi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelTransferi(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelTransferi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelTransferf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlPixelTransferf(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelTransferf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPixelZoom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` xfactor: f32 `
    ///
    /// ` yfactor: f32 `
    ///
    pub fn GlPixelZoom(self: QOpenGLFunctions_3_2_Compatibility, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPixelZoom(@ptrCast(self.ptr), @bitCast(xfactor), @bitCast(yfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glAlphaFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: f32 `
    ///
    pub fn GlAlphaFunc(self: QOpenGLFunctions_3_2_Compatibility, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlAlphaFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalPoint2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` i: i32 `
    ///
    /// ` j: i32 `
    ///
    pub fn GlEvalPoint2(self: QOpenGLFunctions_3_2_Compatibility, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalPoint2(@ptrCast(self.ptr), @bitCast(i), @bitCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalMesh2)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlEvalMesh2(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalMesh2(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val), @bitCast(j1), @bitCast(j2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalPoint1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` i: i32 `
    ///
    pub fn GlEvalPoint1(self: QOpenGLFunctions_3_2_Compatibility, i: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalPoint1(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalMesh1)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    /// ` i1Val: i32 `
    ///
    /// ` i2Val: i32 `
    ///
    pub fn GlEvalMesh1(self: QOpenGLFunctions_3_2_Compatibility, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalMesh1(@ptrCast(self.ptr), @bitCast(mode), @bitCast(i1Val), @bitCast(i2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord2fv(self: QOpenGLFunctions_3_2_Compatibility, u: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: f32 `
    ///
    /// ` v: f32 `
    ///
    pub fn GlEvalCoord2f(self: QOpenGLFunctions_3_2_Compatibility, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2f(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord2dv(self: QOpenGLFunctions_3_2_Compatibility, u: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: f64 `
    ///
    /// ` v: f64 `
    ///
    pub fn GlEvalCoord2d(self: QOpenGLFunctions_3_2_Compatibility, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2d(@ptrCast(self.ptr), @bitCast(u), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: []const f32 `
    ///
    pub fn GlEvalCoord1fv(self: QOpenGLFunctions_3_2_Compatibility, u: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1fv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: f32 `
    ///
    pub fn GlEvalCoord1f(self: QOpenGLFunctions_3_2_Compatibility, u: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1f(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: []const f64 `
    ///
    pub fn GlEvalCoord1dv(self: QOpenGLFunctions_3_2_Compatibility, u: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1dv(@ptrCast(self.ptr), u.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEvalCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` u: f64 `
    ///
    pub fn GlEvalCoord1d(self: QOpenGLFunctions_3_2_Compatibility, u: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1d(@ptrCast(self.ptr), @bitCast(u));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMapGrid2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMapGrid2f(self: QOpenGLFunctions_3_2_Compatibility, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMapGrid2f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMapGrid2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMapGrid2d(self: QOpenGLFunctions_3_2_Compatibility, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMapGrid2d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val), @bitCast(vn), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMapGrid1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f32 `
    ///
    /// ` u2Val: f32 `
    ///
    pub fn GlMapGrid1f(self: QOpenGLFunctions_3_2_Compatibility, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMapGrid1f(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMapGrid1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` un: i32 `
    ///
    /// ` u1Val: f64 `
    ///
    /// ` u2Val: f64 `
    ///
    pub fn GlMapGrid1d(self: QOpenGLFunctions_3_2_Compatibility, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMapGrid1d(@ptrCast(self.ptr), @bitCast(un), @bitCast(u1Val), @bitCast(u2Val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMap2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMap2f(self: QOpenGLFunctions_3_2_Compatibility, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMap2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMap2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMap2d(self: QOpenGLFunctions_3_2_Compatibility, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMap2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(ustride), @bitCast(uorder), @bitCast(v1), @bitCast(v2), @bitCast(vstride), @bitCast(vorder), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMap1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMap1f(self: QOpenGLFunctions_3_2_Compatibility, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMap1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMap1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMap1d(self: QOpenGLFunctions_3_2_Compatibility, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMap1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(u1Val), @bitCast(u2Val), @bitCast(stride), @bitCast(order), points.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPushAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushAttrib(self: QOpenGLFunctions_3_2_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPushAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPopAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlPopAttrib(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPopAttrib(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` op: u32 `
    ///
    /// ` value: f32 `
    ///
    pub fn GlAccum(self: QOpenGLFunctions_3_2_Compatibility, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlAccum(@ptrCast(self.ptr), @bitCast(op), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlIndexMask(self: QOpenGLFunctions_3_2_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: f32 `
    ///
    pub fn GlClearIndex(self: QOpenGLFunctions_3_2_Compatibility, c: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearIndex(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClearAccum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearAccum(self: QOpenGLFunctions_3_2_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClearAccum(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPushName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` name: u32 `
    ///
    pub fn GlPushName(self: QOpenGLFunctions_3_2_Compatibility, name: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPushName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPopName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlPopName(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPopName(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPassThrough)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` token: f32 `
    ///
    pub fn GlPassThrough(self: QOpenGLFunctions_3_2_Compatibility, token: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPassThrough(@ptrCast(self.ptr), @bitCast(token));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLoadName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` name: u32 `
    ///
    pub fn GlLoadName(self: QOpenGLFunctions_3_2_Compatibility, name: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLoadName(@ptrCast(self.ptr), @bitCast(name));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glInitNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlInitNames(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlInitNames(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRenderMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlRenderMode(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) i32 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlRenderMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSelectBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` buffer: []u32 `
    ///
    pub fn GlSelectBuffer(self: QOpenGLFunctions_3_2_Compatibility, size: i32, buffer: []u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSelectBuffer(@ptrCast(self.ptr), @bitCast(size), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFeedbackBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` buffer: []f32 `
    ///
    pub fn GlFeedbackBuffer(self: QOpenGLFunctions_3_2_Compatibility, size: i32, typeVal: u32, buffer: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFeedbackBuffer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), buffer.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexGeniv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexGeniv(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexGeniv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexGeni)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexGeni(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexGeni(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexGenfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexGenfv(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexGenfv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexGenf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexGenf(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexGenf(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexGendv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f64 `
    ///
    pub fn GlTexGendv(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, params: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexGendv(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexGend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f64 `
    ///
    pub fn GlTexGend(self: QOpenGLFunctions_3_2_Compatibility, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexGend(@ptrCast(self.ptr), @bitCast(coord), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexEnviv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexEnviv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexEnviv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexEnvi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexEnvi(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexEnvi(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexEnvfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexEnvfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexEnvfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexEnvf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexEnvf(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexEnvf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glShadeModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlShadeModel(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlShadeModel(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPolygonStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: []const u8 `
    ///
    pub fn GlPolygonStipple(self: QOpenGLFunctions_3_2_Compatibility, mask: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPolygonStipple(@ptrCast(self.ptr), mask.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMaterialiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlMaterialiv(self: QOpenGLFunctions_3_2_Compatibility, face: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMaterialiv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMateriali)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlMateriali(self: QOpenGLFunctions_3_2_Compatibility, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMateriali(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMaterialfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlMaterialfv(self: QOpenGLFunctions_3_2_Compatibility, face: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMaterialfv(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMaterialf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlMaterialf(self: QOpenGLFunctions_3_2_Compatibility, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMaterialf(@ptrCast(self.ptr), @bitCast(face), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLineStipple)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` factor: i32 `
    ///
    /// ` pattern: u16 `
    ///
    pub fn GlLineStipple(self: QOpenGLFunctions_3_2_Compatibility, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLineStipple(@ptrCast(self.ptr), @bitCast(factor), @bitCast(pattern));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightModeliv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightModeliv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightModeliv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightModeli)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLightModeli(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightModeli(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightModelfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightModelfv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightModelfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightModelf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightModelf(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightModelf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlLightiv(self: QOpenGLFunctions_3_2_Compatibility, light: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightiv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLighti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlLighti(self: QOpenGLFunctions_3_2_Compatibility, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLighti(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlLightfv(self: QOpenGLFunctions_3_2_Compatibility, light: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightfv(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLightf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` light: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlLightf(self: QOpenGLFunctions_3_2_Compatibility, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLightf(@ptrCast(self.ptr), @bitCast(light), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlFogiv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogiv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFogi(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogi(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlFogfv(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogfv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlFogf(self: QOpenGLFunctions_3_2_Compatibility, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogf(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorMaterial)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` face: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlColorMaterial(self: QOpenGLFunctions_3_2_Compatibility, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorMaterial(@ptrCast(self.ptr), @bitCast(face), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClipPlane)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` plane: u32 `
    ///
    /// ` equation: []const f64 `
    ///
    pub fn GlClipPlane(self: QOpenGLFunctions_3_2_Compatibility, plane: u32, equation: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClipPlane(@ptrCast(self.ptr), @bitCast(plane), equation.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex4sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlVertex4s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex4iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlVertex4i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex4fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlVertex4f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex4dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlVertex4d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertex3s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertex3i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertex3f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertex3d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertex2sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertex2s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertex2iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertex2i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertex2fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertex2f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertex2dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertex2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertex2d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertex2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord4sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    /// ` q: i16 `
    ///
    pub fn GlTexCoord4s(self: QOpenGLFunctions_3_2_Compatibility, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord4iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    /// ` q: i32 `
    ///
    pub fn GlTexCoord4i(self: QOpenGLFunctions_3_2_Compatibility, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord4fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    /// ` q: f32 `
    ///
    pub fn GlTexCoord4f(self: QOpenGLFunctions_3_2_Compatibility, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord4dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    /// ` q: f64 `
    ///
    pub fn GlTexCoord4d(self: QOpenGLFunctions_3_2_Compatibility, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord4d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlTexCoord3s(self: QOpenGLFunctions_3_2_Compatibility, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlTexCoord3i(self: QOpenGLFunctions_3_2_Compatibility, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlTexCoord3f(self: QOpenGLFunctions_3_2_Compatibility, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlTexCoord3d(self: QOpenGLFunctions_3_2_Compatibility, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord3d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord2sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlTexCoord2s(self: QOpenGLFunctions_3_2_Compatibility, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2s(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord2iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlTexCoord2i(self: QOpenGLFunctions_3_2_Compatibility, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2i(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord2fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlTexCoord2f(self: QOpenGLFunctions_3_2_Compatibility, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2f(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord2dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlTexCoord2d(self: QOpenGLFunctions_3_2_Compatibility, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord2d(@ptrCast(self.ptr), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlTexCoord1sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i16 `
    ///
    pub fn GlTexCoord1s(self: QOpenGLFunctions_3_2_Compatibility, s: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1s(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlTexCoord1iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: i32 `
    ///
    pub fn GlTexCoord1i(self: QOpenGLFunctions_3_2_Compatibility, s: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1i(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlTexCoord1fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f32 `
    ///
    pub fn GlTexCoord1f(self: QOpenGLFunctions_3_2_Compatibility, s: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1f(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlTexCoord1dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` s: f64 `
    ///
    pub fn GlTexCoord1d(self: QOpenGLFunctions_3_2_Compatibility, s: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoord1d(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRectsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v1: []const i16 `
    ///
    /// ` v2: []const i16 `
    ///
    pub fn GlRectsv(self: QOpenGLFunctions_3_2_Compatibility, v1: []const i16, v2: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRectsv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x1: i16 `
    ///
    /// ` y1: i16 `
    ///
    /// ` x2: i16 `
    ///
    /// ` y2: i16 `
    ///
    pub fn GlRects(self: QOpenGLFunctions_3_2_Compatibility, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRects(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRectiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v1: []const i32 `
    ///
    /// ` v2: []const i32 `
    ///
    pub fn GlRectiv(self: QOpenGLFunctions_3_2_Compatibility, v1: []const i32, v2: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRectiv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRecti)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    pub fn GlRecti(self: QOpenGLFunctions_3_2_Compatibility, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRecti(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRectfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v1: []const f32 `
    ///
    /// ` v2: []const f32 `
    ///
    pub fn GlRectfv(self: QOpenGLFunctions_3_2_Compatibility, v1: []const f32, v2: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRectfv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRectf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x1: f32 `
    ///
    /// ` y1: f32 `
    ///
    /// ` x2: f32 `
    ///
    /// ` y2: f32 `
    ///
    pub fn GlRectf(self: QOpenGLFunctions_3_2_Compatibility, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRectf(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRectdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v1: []const f64 `
    ///
    /// ` v2: []const f64 `
    ///
    pub fn GlRectdv(self: QOpenGLFunctions_3_2_Compatibility, v1: []const f64, v2: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRectdv(@ptrCast(self.ptr), v1.ptr, v2.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRectd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x1: f64 `
    ///
    /// ` y1: f64 `
    ///
    /// ` x2: f64 `
    ///
    /// ` y2: f64 `
    ///
    pub fn GlRectd(self: QOpenGLFunctions_3_2_Compatibility, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRectd(@ptrCast(self.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos4sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    /// ` w: i16 `
    ///
    pub fn GlRasterPos4s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos4iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlRasterPos4i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos4fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlRasterPos4f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos4dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    /// ` w: f64 `
    ///
    pub fn GlRasterPos4d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos4d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlRasterPos3s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlRasterPos3i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlRasterPos3f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlRasterPos3d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlRasterPos2sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlRasterPos2s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlRasterPos2iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlRasterPos2i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlRasterPos2fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlRasterPos2f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlRasterPos2dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glRasterPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlRasterPos2d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlRasterPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlNormal3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` nx: i16 `
    ///
    /// ` ny: i16 `
    ///
    /// ` nz: i16 `
    ///
    pub fn GlNormal3s(self: QOpenGLFunctions_3_2_Compatibility, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3s(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlNormal3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` nx: i32 `
    ///
    /// ` ny: i32 `
    ///
    /// ` nz: i32 `
    ///
    pub fn GlNormal3i(self: QOpenGLFunctions_3_2_Compatibility, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3i(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlNormal3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nz: f32 `
    ///
    pub fn GlNormal3f(self: QOpenGLFunctions_3_2_Compatibility, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3f(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlNormal3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` nx: f64 `
    ///
    /// ` ny: f64 `
    ///
    /// ` nz: f64 `
    ///
    pub fn GlNormal3d(self: QOpenGLFunctions_3_2_Compatibility, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3d(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlNormal3bv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormal3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` nx: i8 `
    ///
    /// ` ny: i8 `
    ///
    /// ` nz: i8 `
    ///
    pub fn GlNormal3b(self: QOpenGLFunctions_3_2_Compatibility, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormal3b(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: []const i16 `
    ///
    pub fn GlIndexsv(self: QOpenGLFunctions_3_2_Compatibility, c: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexsv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: i16 `
    ///
    pub fn GlIndexs(self: QOpenGLFunctions_3_2_Compatibility, c: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexs(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: []const i32 `
    ///
    pub fn GlIndexiv(self: QOpenGLFunctions_3_2_Compatibility, c: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexiv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: i32 `
    ///
    pub fn GlIndexi(self: QOpenGLFunctions_3_2_Compatibility, c: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexi(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: []const f32 `
    ///
    pub fn GlIndexfv(self: QOpenGLFunctions_3_2_Compatibility, c: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexfv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: f32 `
    ///
    pub fn GlIndexf(self: QOpenGLFunctions_3_2_Compatibility, c: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexf(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexdv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: []const f64 `
    ///
    pub fn GlIndexdv(self: QOpenGLFunctions_3_2_Compatibility, c: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexdv(@ptrCast(self.ptr), c.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` c: f64 `
    ///
    pub fn GlIndexd(self: QOpenGLFunctions_3_2_Compatibility, c: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexd(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlEnd(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEdgeFlagv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` flag: []const u8 `
    ///
    pub fn GlEdgeFlagv(self: QOpenGLFunctions_3_2_Compatibility, flag: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEdgeFlagv(@ptrCast(self.ptr), flag.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEdgeFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlEdgeFlag(self: QOpenGLFunctions_3_2_Compatibility, flag: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEdgeFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor4usv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    /// ` alpha: u16 `
    ///
    pub fn GlColor4us(self: QOpenGLFunctions_3_2_Compatibility, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor4uiv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    /// ` alpha: u32 `
    ///
    pub fn GlColor4ui(self: QOpenGLFunctions_3_2_Compatibility, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor4ubv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColor4ub(self: QOpenGLFunctions_3_2_Compatibility, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor4sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    /// ` alpha: i16 `
    ///
    pub fn GlColor4s(self: QOpenGLFunctions_3_2_Compatibility, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor4iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    /// ` alpha: i32 `
    ///
    pub fn GlColor4i(self: QOpenGLFunctions_3_2_Compatibility, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor4fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlColor4f(self: QOpenGLFunctions_3_2_Compatibility, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor4dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    /// ` alpha: f64 `
    ///
    pub fn GlColor4d(self: QOpenGLFunctions_3_2_Compatibility, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor4bv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor4b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    /// ` alpha: i8 `
    ///
    pub fn GlColor4b(self: QOpenGLFunctions_3_2_Compatibility, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor4b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlColor3usv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlColor3us(self: QOpenGLFunctions_3_2_Compatibility, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlColor3uiv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlColor3ui(self: QOpenGLFunctions_3_2_Compatibility, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlColor3ubv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlColor3ub(self: QOpenGLFunctions_3_2_Compatibility, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlColor3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlColor3s(self: QOpenGLFunctions_3_2_Compatibility, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlColor3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlColor3i(self: QOpenGLFunctions_3_2_Compatibility, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlColor3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlColor3f(self: QOpenGLFunctions_3_2_Compatibility, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlColor3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlColor3d(self: QOpenGLFunctions_3_2_Compatibility, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlColor3bv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlColor3b(self: QOpenGLFunctions_3_2_Compatibility, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBitmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlBitmap(self: QOpenGLFunctions_3_2_Compatibility, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBitmap(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(xorig), @bitCast(yorig), @bitCast(xmove), @bitCast(ymove), bitmap.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBegin(self: QOpenGLFunctions_3_2_Compatibility, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlBegin(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glListBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` base: u32 `
    ///
    pub fn GlListBase(self: QOpenGLFunctions_3_2_Compatibility, base: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlListBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGenLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` range: i32 `
    ///
    pub fn GlGenLists(self: QOpenGLFunctions_3_2_Compatibility, range: i32) u32 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlGenLists(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDeleteLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` list: u32 `
    ///
    /// ` range: i32 `
    ///
    pub fn GlDeleteLists(self: QOpenGLFunctions_3_2_Compatibility, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDeleteLists(@ptrCast(self.ptr), @bitCast(list), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCallLists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` lists: ?*const anyopaque `
    ///
    pub fn GlCallLists(self: QOpenGLFunctions_3_2_Compatibility, n: i32, typeVal: u32, lists: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCallLists(@ptrCast(self.ptr), @bitCast(n), @bitCast(typeVal), @ptrCast(lists));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCallList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` list: u32 `
    ///
    pub fn GlCallList(self: QOpenGLFunctions_3_2_Compatibility, list: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCallList(@ptrCast(self.ptr), @bitCast(list));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEndList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlEndList(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEndList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNewList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` list: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlNewList(self: QOpenGLFunctions_3_2_Compatibility, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNewList(@ptrCast(self.ptr), @bitCast(list), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPushClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlPushClientAttrib(self: QOpenGLFunctions_3_2_Compatibility, mask: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPushClientAttrib(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPopClientAttrib)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn GlPopClientAttrib(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPopClientAttrib(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glPrioritizeTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` priorities: []const f32 `
    ///
    pub fn GlPrioritizeTextures(self: QOpenGLFunctions_3_2_Compatibility, n: i32, textures: []const u32, priorities: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlPrioritizeTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr, priorities.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glAreTexturesResident)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    /// ` residences: []u8 `
    ///
    pub fn GlAreTexturesResident(self: QOpenGLFunctions_3_2_Compatibility, n: i32, textures: []const u32, residences: []u8) u8 {
        return qtc.QOpenGLFunctions_3_2_Compatibility_GlAreTexturesResident(@ptrCast(self.ptr), @bitCast(n), textures.ptr, residences.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlVertexPointer(self: QOpenGLFunctions_3_2_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glTexCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlTexCoordPointer(self: QOpenGLFunctions_3_2_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlTexCoordPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glNormalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlNormalPointer(self: QOpenGLFunctions_3_2_Compatibility, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlNormalPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glInterleavedArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` format: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlInterleavedArrays(self: QOpenGLFunctions_3_2_Compatibility, format: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlInterleavedArrays(@ptrCast(self.ptr), @bitCast(format), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glIndexPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlIndexPointer(self: QOpenGLFunctions_3_2_Compatibility, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlIndexPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEnableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn GlEnableClientState(self: QOpenGLFunctions_3_2_Compatibility, array: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEnableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glEdgeFlagPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlEdgeFlagPointer(self: QOpenGLFunctions_3_2_Compatibility, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlEdgeFlagPointer(@ptrCast(self.ptr), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glDisableClientState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` array: u32 `
    ///
    pub fn GlDisableClientState(self: QOpenGLFunctions_3_2_Compatibility, array: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlDisableClientState(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlColorPointer(self: QOpenGLFunctions_3_2_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glArrayElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` i: i32 `
    ///
    pub fn GlArrayElement(self: QOpenGLFunctions_3_2_Compatibility, i: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlArrayElement(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glResetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetMinmax(self: QOpenGLFunctions_3_2_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlResetMinmax(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glResetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    pub fn GlResetHistogram(self: QOpenGLFunctions_3_2_Compatibility, target: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlResetHistogram(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlMinmax(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` sink: u8 `
    ///
    pub fn GlHistogram(self: QOpenGLFunctions_3_2_Compatibility, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(width), @bitCast(internalformat), @bitCast(sink));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMinmaxParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetMinmaxParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMinmaxParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMinmaxParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetMinmaxParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMinmaxParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetMinmax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetMinmax(self: QOpenGLFunctions_3_2_Compatibility, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetMinmax(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetHistogramParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetHistogramParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetHistogramParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetHistogramParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetHistogramParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetHistogramParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetHistogram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetHistogram(self: QOpenGLFunctions_3_2_Compatibility, target: u32, reset: u8, format: u32, typeVal: u32, values: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetHistogram(@ptrCast(self.ptr), @bitCast(target), @bitCast(reset), @bitCast(format), @bitCast(typeVal), @ptrCast(values));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSeparableFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlSeparableFilter2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: ?*const anyopaque, column: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSeparableFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetSeparableFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlGetSeparableFilter(self: QOpenGLFunctions_3_2_Compatibility, target: u32, format: u32, typeVal: u32, row: ?*anyopaque, column: ?*anyopaque, span: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetSeparableFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(row), @ptrCast(column), @ptrCast(span));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetConvolutionParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetConvolutionParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetConvolutionFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` image: ?*anyopaque `
    ///
    pub fn GlGetConvolutionFilter(self: QOpenGLFunctions_3_2_Compatibility, target: u32, format: u32, typeVal: u32, image: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetConvolutionFilter(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyConvolutionFilter2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyConvolutionFilter1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glConvolutionParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlConvolutionParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glConvolutionParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: i32 `
    ///
    pub fn GlConvolutionParameteri(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glConvolutionParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlConvolutionParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glConvolutionParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: f32 `
    ///
    pub fn GlConvolutionParameterf(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glConvolutionFilter2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlConvolutionFilter2D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlConvolutionFilter2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glConvolutionFilter1D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlConvolutionFilter1D(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlConvolutionFilter1D(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(image));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyColorSubTable(self: QOpenGLFunctions_3_2_Compatibility, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorSubTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlColorSubTable(self: QOpenGLFunctions_3_2_Compatibility, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorSubTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(start), @bitCast(count), @bitCast(format), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetColorTableParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetColorTableParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glGetColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` table: ?*anyopaque `
    ///
    pub fn GlGetColorTable(self: QOpenGLFunctions_3_2_Compatibility, target: u32, format: u32, typeVal: u32, table: ?*anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlGetColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glCopyColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlCopyColorTable(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlCopyColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorTableParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlColorTableParameteriv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorTableParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorTableParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlColorTableParameterfv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorTableParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glColorTable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlColorTable(self: QOpenGLFunctions_3_2_Compatibility, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlColorTable(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(format), @bitCast(typeVal), @ptrCast(table));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlMultTransposeMatrixd(self: QOpenGLFunctions_3_2_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultTransposeMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlMultTransposeMatrixf(self: QOpenGLFunctions_3_2_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultTransposeMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLoadTransposeMatrixd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f64 `
    ///
    pub fn GlLoadTransposeMatrixd(self: QOpenGLFunctions_3_2_Compatibility, m: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLoadTransposeMatrixd(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glLoadTransposeMatrixf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` m: []const f32 `
    ///
    pub fn GlLoadTransposeMatrixf(self: QOpenGLFunctions_3_2_Compatibility, m: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlLoadTransposeMatrixf(@ptrCast(self.ptr), m.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord4sv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMultiTexCoord4s(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord4iv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMultiTexCoord4i(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord4fv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMultiTexCoord4f(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord4dv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlMultiTexCoord4d(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r), @bitCast(q));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord3sv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    /// ` r: i16 `
    ///
    pub fn GlMultiTexCoord3s(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord3iv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    /// ` r: i32 `
    ///
    pub fn GlMultiTexCoord3i(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord3fv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    /// ` r: f32 `
    ///
    pub fn GlMultiTexCoord3f(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord3dv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    /// ` r: f64 `
    ///
    pub fn GlMultiTexCoord3d(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord2sv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    /// ` t: i16 `
    ///
    pub fn GlMultiTexCoord2s(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord2iv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    /// ` t: i32 `
    ///
    pub fn GlMultiTexCoord2i(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord2fv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    /// ` t: f32 `
    ///
    pub fn GlMultiTexCoord2f(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord2dv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    /// ` t: f64 `
    ///
    pub fn GlMultiTexCoord2d(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlMultiTexCoord1sv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1sv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i16 `
    ///
    pub fn GlMultiTexCoord1s(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1s(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlMultiTexCoord1iv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1iv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: i32 `
    ///
    pub fn GlMultiTexCoord1i(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1i(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlMultiTexCoord1fv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1fv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f32 `
    ///
    pub fn GlMultiTexCoord1f(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1f(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlMultiTexCoord1dv(self: QOpenGLFunctions_3_2_Compatibility, target: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1dv(@ptrCast(self.ptr), @bitCast(target), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glMultiTexCoord1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` target: u32 `
    ///
    /// ` s: f64 `
    ///
    pub fn GlMultiTexCoord1d(self: QOpenGLFunctions_3_2_Compatibility, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1d(@ptrCast(self.ptr), @bitCast(target), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glClientActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlClientActiveTexture(self: QOpenGLFunctions_3_2_Compatibility, texture: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlClientActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlWindowPos3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlWindowPos3s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlWindowPos3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlWindowPos3i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlWindowPos3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlWindowPos3f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlWindowPos3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlWindowPos3d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos3d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlWindowPos2sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlWindowPos2s(self: QOpenGLFunctions_3_2_Compatibility, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2s(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlWindowPos2iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlWindowPos2i(self: QOpenGLFunctions_3_2_Compatibility, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2i(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlWindowPos2fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlWindowPos2f(self: QOpenGLFunctions_3_2_Compatibility, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2f(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlWindowPos2dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glWindowPos2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlWindowPos2d(self: QOpenGLFunctions_3_2_Compatibility, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlWindowPos2d(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColorPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlSecondaryColorPointer(self: QOpenGLFunctions_3_2_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColorPointer(@ptrCast(self.ptr), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlSecondaryColor3usv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3usv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3us)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u16 `
    ///
    /// ` green: u16 `
    ///
    /// ` blue: u16 `
    ///
    pub fn GlSecondaryColor3us(self: QOpenGLFunctions_3_2_Compatibility, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3us(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlSecondaryColor3uiv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3uiv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u32 `
    ///
    /// ` green: u32 `
    ///
    /// ` blue: u32 `
    ///
    pub fn GlSecondaryColor3ui(self: QOpenGLFunctions_3_2_Compatibility, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3ui(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlSecondaryColor3ubv(self: QOpenGLFunctions_3_2_Compatibility, v: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3ubv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3ub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    pub fn GlSecondaryColor3ub(self: QOpenGLFunctions_3_2_Compatibility, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3ub(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlSecondaryColor3sv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3sv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i16 `
    ///
    /// ` green: i16 `
    ///
    /// ` blue: i16 `
    ///
    pub fn GlSecondaryColor3s(self: QOpenGLFunctions_3_2_Compatibility, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3s(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlSecondaryColor3iv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3iv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i32 `
    ///
    /// ` green: i32 `
    ///
    /// ` blue: i32 `
    ///
    pub fn GlSecondaryColor3i(self: QOpenGLFunctions_3_2_Compatibility, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3i(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlSecondaryColor3fv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3fv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    pub fn GlSecondaryColor3f(self: QOpenGLFunctions_3_2_Compatibility, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3f(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlSecondaryColor3dv(self: QOpenGLFunctions_3_2_Compatibility, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3dv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: f64 `
    ///
    /// ` green: f64 `
    ///
    /// ` blue: f64 `
    ///
    pub fn GlSecondaryColor3d(self: QOpenGLFunctions_3_2_Compatibility, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3d(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlSecondaryColor3bv(self: QOpenGLFunctions_3_2_Compatibility, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3bv(@ptrCast(self.ptr), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glSecondaryColor3b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` red: i8 `
    ///
    /// ` green: i8 `
    ///
    /// ` blue: i8 `
    ///
    pub fn GlSecondaryColor3b(self: QOpenGLFunctions_3_2_Compatibility, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3b(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogCoordPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlFogCoordPointer(self: QOpenGLFunctions_3_2_Compatibility, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogCoordPointer(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogCoorddv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: []const f64 `
    ///
    pub fn GlFogCoorddv(self: QOpenGLFunctions_3_2_Compatibility, coord: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogCoorddv(@ptrCast(self.ptr), coord.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogCoordd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: f64 `
    ///
    pub fn GlFogCoordd(self: QOpenGLFunctions_3_2_Compatibility, coord: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogCoordd(@ptrCast(self.ptr), @bitCast(coord));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogCoordfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: []const f32 `
    ///
    pub fn GlFogCoordfv(self: QOpenGLFunctions_3_2_Compatibility, coord: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogCoordfv(@ptrCast(self.ptr), coord.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glFogCoordf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` coord: f32 `
    ///
    pub fn GlFogCoordf(self: QOpenGLFunctions_3_2_Compatibility, coord: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlFogCoordf(@ptrCast(self.ptr), @bitCast(coord));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlVertexAttrib4usv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4usv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttrib4uiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlVertexAttrib4ubv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4ubv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib4sv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttrib4s(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttrib4iv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib4fv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttrib4f(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib4dv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttrib4d(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlVertexAttrib4bv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4bv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Nusv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlVertexAttrib4Nusv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nusv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Nuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttrib4Nuiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nuiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Nubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlVertexAttrib4Nubv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nubv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Nub)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttrib4Nub(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nub(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Nsv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib4Nsv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nsv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Niv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttrib4Niv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Niv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib4Nbv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlVertexAttrib4Nbv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nbv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib3sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib3sv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib3s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    /// ` z: i16 `
    ///
    pub fn GlVertexAttrib3s(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib3fv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertexAttrib3f(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib3dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib3dv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib3d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` z: f64 `
    ///
    pub fn GlVertexAttrib3d(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib2sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib2sv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib2s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    /// ` y: i16 `
    ///
    pub fn GlVertexAttrib2s(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib2fv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertexAttrib2f(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib2dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib2dv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib2d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn GlVertexAttrib2d(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib1sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttrib1sv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib1s)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i16 `
    ///
    pub fn GlVertexAttrib1s(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1s(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlVertexAttrib1fv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1fv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f32 `
    ///
    pub fn GlVertexAttrib1f(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1f(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib1dv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const f64 `
    ///
    pub fn GlVertexAttrib1dv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1dv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttrib1d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: f64 `
    ///
    pub fn GlVertexAttrib1d(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1d(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4usv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u16 `
    ///
    pub fn GlVertexAttribI4usv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4usv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4ubv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u8 `
    ///
    pub fn GlVertexAttribI4ubv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4ubv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4sv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i16 `
    ///
    pub fn GlVertexAttribI4sv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i16) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4sv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4bv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i8 `
    ///
    pub fn GlVertexAttribI4bv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i8) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4bv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI4uiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI3uiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI2uiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI1uiv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI4iv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI3iv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI2iv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI1iv(self: QOpenGLFunctions_3_2_Compatibility, index: u32, v: []const i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttribI4ui(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    /// ` z: u32 `
    ///
    pub fn GlVertexAttribI3ui(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: u32, y: u32, z: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    pub fn GlVertexAttribI2ui(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: u32, y: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    pub fn GlVertexAttribI1ui(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: u32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
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
    pub fn GlVertexAttribI4i(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlVertexAttribI3i(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlVertexAttribI2i(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#glVertexAttribI1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    pub fn GlVertexAttribI1i(self: QOpenGLFunctions_3_2_Compatibility, index: u32, x: i32) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn IsInitialized(self: QOpenGLFunctions_3_2_Compatibility) bool {
        return qtc.QOpenGLFunctions_3_2_Compatibility_IsInitialized(@ptrCast(self.ptr));
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
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn SuperIsInitialized(self: QOpenGLFunctions_3_2_Compatibility) bool {
        return qtc.QOpenGLFunctions_3_2_Compatibility_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: QOpenGLFunctions_3_2_Compatibility, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SetOwningContext(self: QOpenGLFunctions_3_2_Compatibility, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_3_2_Compatibility_SetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
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
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn SuperSetOwningContext(self: QOpenGLFunctions_3_2_Compatibility, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        qtc.QOpenGLFunctions_3_2_Compatibility_SuperSetOwningContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility`
    ///
    /// ` callback: *const fn (self: QOpenGLFunctions_3_2_Compatibility, context: QOpenGLContext) callconv(.c) void `
    ///
    pub fn OnSetOwningContext(self: QOpenGLFunctions_3_2_Compatibility, callback: *const fn (QOpenGLFunctions_3_2_Compatibility, QOpenGLContext) callconv(.c) void) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_OnSetOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn OwningContext(self: QOpenGLFunctions_3_2_Compatibility) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_3_2_Compatibility_OwningContext(@ptrCast(self.ptr)) };
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
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn SuperOwningContext(self: QOpenGLFunctions_3_2_Compatibility) QOpenGLContext {
        return .{ .ptr = qtc.QOpenGLFunctions_3_2_Compatibility_SuperOwningContext(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility`
    ///
    /// ` callback: *const fn () callconv(.c) QOpenGLContext `
    ///
    pub fn OnOwningContext(self: QOpenGLFunctions_3_2_Compatibility, callback: *const fn () callconv(.c) QOpenGLContext) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_OnOwningContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-compatibility.html#dtor.QOpenGLFunctions_3_2_Compatibility)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFunctions_3_2_Compatibility `
    ///
    pub fn Delete(self: QOpenGLFunctions_3_2_Compatibility) void {
        qtc.QOpenGLFunctions_3_2_Compatibility_Delete(@ptrCast(self.ptr));
    }
};
