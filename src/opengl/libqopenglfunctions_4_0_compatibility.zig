const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html
pub const qopenglfunctions_4_0_compatibility = struct {
    /// New constructs a new QOpenGLFunctions_4_0_Compatibility object.
    ///
    ///
    pub fn New() QtC.QOpenGLFunctions_4_0_Compatibility {
        return qtc.QOpenGLFunctions_4_0_Compatibility_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_0_Compatibility_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, callback: *const fn () callconv(.c) bool ```
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_0_Compatibility_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glViewport)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDepthRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, nearVal: f64, farVal: f64 ```
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDepthRange(@ptrCast(self), @intCast(nearVal), @intCast(farVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsEnabled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, cap: u32 ```
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexLevelParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, pname: u32, params: *i32 ```
    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexLevelParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, pname: u32, params: *f32 ```
    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexImage(@ptrCast(self), @intCast(target), @intCast(level), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetString)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, name: u32 ```
    pub fn GlGetString(self: ?*anyopaque, name: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_0_Compatibility_GlGetString(@ptrCast(self), @intCast(name)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetIntegerv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *i32 ```
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetIntegerv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetFloatv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *f32 ```
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetFloatv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetDoublev)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *f64 ```
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetDoublev(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetBooleanv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *u8 ```
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetBooleanv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glReadPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glReadBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelStorei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: i32 ```
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelStoref)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: f32 ```
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelStoref(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDepthFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, func: u32 ```
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glStencilOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glStencilFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLogicOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, opcode: u32 ```
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLogicOp(@ptrCast(self), @intCast(opcode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sfactor: u32, dfactor: u32 ```
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFlush)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFlush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFinish)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFinish(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEnable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, cap: u32 ```
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDisable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, cap: u32 ```
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDepthMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, flag: u8 ```
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glStencilMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: u32 ```
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearDepth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, depth: f64 ```
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearStencil)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i32 ```
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClear)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: u32 ```
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, param: i32 ```
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, param: f32 ```
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glScissor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPolygonMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, mode: u32 ```
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPolygonMode(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPointSize)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: f32 ```
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPointSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLineWidth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, width: f32 ```
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLineWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glHint)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, mode: u32 ```
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFrontFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCullFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: *const u8 ```
    pub fn GlIndexubv(self: ?*anyopaque, c: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexubv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: u8 ```
    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexub(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32 ```
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, textures: *u32 ```
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, textures: *const u32 ```
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, texture: u32 ```
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32 ```
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32 ```
    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPolygonOffset)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, factor: f32, units: f32 ```
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPolygonOffset(@ptrCast(self), @intCast(factor), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, first: i32, count: i32 ```
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawRangeElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawRangeElements(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendEquation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetCompressedTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, img: *void ```
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetCompressedTexImage(@ptrCast(self), @intCast(target), @intCast(level), img);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompressedTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompressedTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompressedTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompressedTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompressedTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompressedTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompressedTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompressedTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompressedTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompressedTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSampleCoverage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, value: f32, invert: u8 ```
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSampleCoverage(@ptrCast(self), @intCast(value), @intCast(invert));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32 ```
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPointParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *const i32 ```
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPointParameteriv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPointParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: i32 ```
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPointParameteri(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPointParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *const f32 ```
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPointParameterfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPointParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: f32 ```
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPointParameterf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, first: *const i32, count: *const i32, drawcount: i32 ```
    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiDrawArrays(@ptrCast(self), @intCast(mode), @ptrCast(first), @ptrCast(count), @intCast(drawcount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32 ```
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendFuncSeparate(@ptrCast(self), @intCast(sfactorRGB), @intCast(dfactorRGB), @intCast(sfactorAlpha), @intCast(dfactorAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetBufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUnmapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32 ```
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlUnmapBuffer(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, access: u32 ```
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlMapBuffer(@ptrCast(self), @intCast(target), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBufferData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, size: i64, data: *void, usage: u32 ```
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: *const void, usage: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), data, @intCast(usage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buffer: u32 ```
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, buffers: *u32 ```
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, buffers: *const u32 ```
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, buffer: u32 ```
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetQueryObjectuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32, pname: u32, params: *u32 ```
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetQueryObjectuiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetQueryObjectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetQueryObjectiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetQueryiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetQueryiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEndQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32 ```
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEndQuery(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBeginQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, id: u32 ```
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBeginQuery(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32 ```
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsQuery(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, ids: *const u32 ```
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, ids: *u32 ```
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: *void ```
    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glValidateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32 ```
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlValidateProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: i32, v1: i32, v2: i32, v3: i32 ```
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: i32, v1: i32, v2: i32 ```
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: i32, v1: i32 ```
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: i32 ```
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1i(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: f32, v1: f32, v2: f32, v3: f32 ```
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: f32, v1: f32, v2: f32 ```
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: f32, v1: f32 ```
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: f32 ```
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1f(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUseProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32 ```
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUseProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLinkProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32 ```
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLinkProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shader: u32 ```
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32 ```
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetVertexAttribiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetVertexAttribiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetVertexAttribfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, pname: u32, params: *f32 ```
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetVertexAttribfv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetVertexAttribdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, pname: u32, params: *f64 ```
    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetVertexAttribdv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, location: i32, params: *i32 ```
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, location: i32, params: *f32 ```
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformfv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, name: *const i8 ```
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetShaderSource)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shader: u32, bufSize: i32, length: *i32, source: *i8 ```
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetShaderSource(@ptrCast(self), @intCast(shader), @intCast(bufSize), @ptrCast(length), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetShaderInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shader: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetShaderInfoLog(@ptrCast(self), @intCast(shader), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetShaderiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shader: u32, pname: u32, params: *i32 ```
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetShaderiv(@ptrCast(self), @intCast(shader), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetProgramInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetProgramInfoLog(@ptrCast(self), @intCast(program), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetProgramiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetProgramiv(@ptrCast(self), @intCast(program), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, name: *const i8 ```
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetAttribLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetAttachedShaders)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, maxCount: i32, count: *i32, obj: *u32 ```
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetAttachedShaders(@ptrCast(self), @intCast(program), @intCast(maxCount), @ptrCast(count), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEnableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32 ```
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEnableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDisableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32 ```
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDisableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDetachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shader: u32 ```
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDetachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shader: u32 ```
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32 ```
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCreateShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32 ```
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlCreateShader(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCreateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlCreateProgram(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCompileShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shader: u32 ```
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCompileShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, index: u32, name: *const i8 ```
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindAttribLocation(@ptrCast(self), @intCast(program), @intCast(index), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glAttachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shader: u32 ```
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlAttachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glStencilMaskSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, mask: u32 ```
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlStencilMaskSeparate(@ptrCast(self), @intCast(face), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glStencilFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlStencilFuncSeparate(@ptrCast(self), @intCast(face), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glStencilOpSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, sfail: u32, dpfail: u32, dppass: u32 ```
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlStencilOpSeparate(@ptrCast(self), @intCast(face), @intCast(sfail), @intCast(dpfail), @intCast(dppass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendEquationSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendEquationSeparate(@ptrCast(self), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix4x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix4x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix3x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix3x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix4x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix4x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix2x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix2x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix3x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix3x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix2x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix2x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsVertexArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, array: u32 ```
    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsVertexArray(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenVertexArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, arrays: *u32 ```
    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenVertexArrays(@ptrCast(self), @intCast(n), @ptrCast(arrays));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteVertexArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, arrays: *const u32 ```
    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteVertexArrays(@ptrCast(self), @intCast(n), @ptrCast(arrays));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindVertexArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, array: u32 ```
    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindVertexArray(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFlushMappedBufferRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, offset: i64, length: i64 ```
    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFlushMappedBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMapBufferRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, offset: i64, length: i64, access: u32 ```
    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlMapBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFramebufferTextureLayer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, texture: u32, level: i32, layer: i32 ```
    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFramebufferTextureLayer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level), @intCast(layer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRenderbufferStorageMultisample)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, samples: i32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRenderbufferStorageMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlitFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32 ```
    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlitFramebuffer(@ptrCast(self), @intCast(srcX0), @intCast(srcY0), @intCast(srcX1), @intCast(srcY1), @intCast(dstX0), @intCast(dstY0), @intCast(dstX1), @intCast(dstY1), @intCast(mask), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenerateMipmap)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32 ```
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenerateMipmap(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, pname: u32, params: *i32 ```
    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFramebufferRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32 ```
    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFramebufferRenderbuffer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(renderbuffertarget), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFramebufferTexture3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32 ```
    pub fn GlFramebufferTexture3D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFramebufferTexture3D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level), @intCast(zoffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFramebufferTexture2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFramebufferTexture2D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFramebufferTexture1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture1D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFramebufferTexture1D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, framebuffers: *u32 ```
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, framebuffers: *const u32 ```
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, framebuffer: u32 ```
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindFramebuffer(@ptrCast(self), @intCast(target), @intCast(framebuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, framebuffer: u32 ```
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsFramebuffer(@ptrCast(self), @intCast(framebuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetRenderbufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetRenderbufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRenderbufferStorage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRenderbufferStorage(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, renderbuffers: *u32 ```
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, renderbuffers: *const u32 ```
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, renderbuffer: u32 ```
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindRenderbuffer(@ptrCast(self), @intCast(target), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, renderbuffer: u32 ```
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsRenderbuffer(@ptrCast(self), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetStringi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, name: u32, index: u32 ```
    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_0_Compatibility_GlGetStringi(@ptrCast(self), @intCast(name), @intCast(index)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearBufferfi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32 ```
    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearBufferfi(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @intCast(depth), @intCast(stencil));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearBufferfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buffer: u32, drawbuffer: i32, value: *const f32 ```
    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearBufferfv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearBufferuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buffer: u32, drawbuffer: i32, value: *const u32 ```
    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearBufferuiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearBufferiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buffer: u32, drawbuffer: i32, value: *const i32 ```
    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearBufferiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *u32 ```
    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const u32 ```
    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: u32, v1: u32, v2: u32, v3: u32 ```
    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: u32, v1: u32, v2: u32 ```
    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: u32, v1: u32 ```
    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, v0: u32 ```
    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1ui(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetFragDataLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, name: *const i8 ```
    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetFragDataLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindFragDataLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, color: u32, name: *const i8 ```
    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindFragDataLocation(@ptrCast(self), @intCast(program), @intCast(color), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, location: i32, params: *u32 ```
    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformuiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetVertexAttribIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, pname: u32, params: *u32 ```
    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetVertexAttribIuiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetVertexAttribIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetVertexAttribIiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribIPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribIPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEndConditionalRender)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlEndConditionalRender(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEndConditionalRender(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBeginConditionalRender)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32, mode: u32 ```
    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBeginConditionalRender(@ptrCast(self), @intCast(id), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClampColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, clamp: u32 ```
    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClampColor(@ptrCast(self), @intCast(target), @intCast(clamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindBufferBase)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, buffer: u32 ```
    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindBufferBase(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindBufferRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, buffer: u32, offset: i64, size: i64 ```
    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindBufferRange(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer), @intCast(offset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEndTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlEndTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEndTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBeginTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, primitiveMode: u32 ```
    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBeginTransformFeedback(@ptrCast(self), @intCast(primitiveMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsEnabledi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32 ```
    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsEnabledi(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDisablei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32 ```
    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDisablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEnablei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32 ```
    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEnablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetIntegeri_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, data: *i32 ```
    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetIntegeriV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetBooleani_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, data: *u8 ```
    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: *u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetBooleaniV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorMaski)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, r: u8, g: u8, b: u8, a: u8 ```
    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorMaski(@ptrCast(self), @intCast(index), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64 ```
    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyBufferSubData(@ptrCast(self), @intCast(readTarget), @intCast(writeTarget), @intCast(readOffset), @intCast(writeOffset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformBlockBinding)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32 ```
    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformBlockBinding(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(uniformBlockBinding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveUniformBlockName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8 ```
    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveUniformBlockName(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(bufSize), @ptrCast(length), @ptrCast(uniformBlockName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveUniformBlockiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32 ```
    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveUniformBlockiv(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformBlockIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, uniformBlockName: *const i8 ```
    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformBlockIndex(@ptrCast(self), @intCast(program), @ptrCast(uniformBlockName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveUniformName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8 ```
    pub fn GlGetActiveUniformName(self: ?*anyopaque, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveUniformName(@ptrCast(self), @intCast(program), @intCast(uniformIndex), @intCast(bufSize), @ptrCast(length), @ptrCast(uniformName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveUniformsiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32 ```
    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveUniformsiv(@ptrCast(self), @intCast(program), @intCast(uniformCount), @ptrCast(uniformIndices), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPrimitiveRestartIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32 ```
    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPrimitiveRestartIndex(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, buffer: u32 ```
    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexBuffer(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawElementsInstanced)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, count: i32, typeVal: u32, indices: *void, instancecount: i32 ```
    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawElementsInstanced(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(instancecount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawArraysInstanced)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, first: i32, count: i32, instancecount: i32 ```
    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawArraysInstanced(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count), @intCast(instancecount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSampleMaski)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, mask: u32 ```
    pub fn GlSampleMaski(self: ?*anyopaque, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSampleMaski(@ptrCast(self), @intCast(index), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMultisamplefv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, index: u32, val: *f32 ```
    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMultisamplefv(@ptrCast(self), @intCast(pname), @intCast(index), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexImage3DMultisample)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8 ```
    pub fn GlTexImage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexImage3DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(fixedsamplelocations));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexImage2DMultisample)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8 ```
    pub fn GlTexImage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexImage2DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(fixedsamplelocations));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetInteger64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *i64 ```
    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetInteger64v(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glProvokingVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlProvokingVertex(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlProvokingVertex(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, count: i32, typeVal: u32, indices: *void, instancecount: i32, basevertex: i32 ```
    pub fn GlDrawElementsInstancedBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawElementsInstancedBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(instancecount), @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawRangeElementsBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *void, basevertex: i32 ```
    pub fn GlDrawRangeElementsBaseVertex(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *const void, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawRangeElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices, @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawElementsBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, count: i32, typeVal: u32, indices: *void, basevertex: i32 ```
    pub fn GlDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFramebufferTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, attachment: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFramebufferTexture(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetBufferParameteri64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i64 ```
    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetBufferParameteri64v(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetInteger64i_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, data: *i64 ```
    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: *i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetInteger64iV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP4uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP4uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP4ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP4ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP3uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP3uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP3ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP3ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP2uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP2uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP2ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP2ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP1uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP1uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribP1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP1ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribP1ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColorP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, color: *const u32 ```
    pub fn GlSecondaryColorP3uiv(self: ?*anyopaque, typeVal: u32, color: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColorP3uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColorP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, color: u32 ```
    pub fn GlSecondaryColorP3ui(self: ?*anyopaque, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColorP3ui(@ptrCast(self), @intCast(typeVal), @intCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorP4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, color: *const u32 ```
    pub fn GlColorP4uiv(self: ?*anyopaque, typeVal: u32, color: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorP4uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorP4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, color: u32 ```
    pub fn GlColorP4ui(self: ?*anyopaque, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorP4ui(@ptrCast(self), @intCast(typeVal), @intCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, color: *const u32 ```
    pub fn GlColorP3uiv(self: ?*anyopaque, typeVal: u32, color: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorP3uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, color: u32 ```
    pub fn GlColorP3ui(self: ?*anyopaque, typeVal: u32, color: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorP3ui(@ptrCast(self), @intCast(typeVal), @intCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormalP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: *const u32 ```
    pub fn GlNormalP3uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormalP3uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormalP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: u32 ```
    pub fn GlNormalP3ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormalP3ui(@ptrCast(self), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: *const u32 ```
    pub fn GlMultiTexCoordP4uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP4uiv(@ptrCast(self), @intCast(texture), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: u32 ```
    pub fn GlMultiTexCoordP4ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP4ui(@ptrCast(self), @intCast(texture), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: *const u32 ```
    pub fn GlMultiTexCoordP3uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP3uiv(@ptrCast(self), @intCast(texture), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: u32 ```
    pub fn GlMultiTexCoordP3ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP3ui(@ptrCast(self), @intCast(texture), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: *const u32 ```
    pub fn GlMultiTexCoordP2uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP2uiv(@ptrCast(self), @intCast(texture), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: u32 ```
    pub fn GlMultiTexCoordP2ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP2ui(@ptrCast(self), @intCast(texture), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: *const u32 ```
    pub fn GlMultiTexCoordP1uiv(self: ?*anyopaque, texture: u32, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP1uiv(@ptrCast(self), @intCast(texture), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoordP1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32, typeVal: u32, coords: u32 ```
    pub fn GlMultiTexCoordP1ui(self: ?*anyopaque, texture: u32, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoordP1ui(@ptrCast(self), @intCast(texture), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: *const u32 ```
    pub fn GlTexCoordP4uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP4uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: u32 ```
    pub fn GlTexCoordP4ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP4ui(@ptrCast(self), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: *const u32 ```
    pub fn GlTexCoordP3uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP3uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: u32 ```
    pub fn GlTexCoordP3ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP3ui(@ptrCast(self), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: *const u32 ```
    pub fn GlTexCoordP2uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP2uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: u32 ```
    pub fn GlTexCoordP2ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP2ui(@ptrCast(self), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: *const u32 ```
    pub fn GlTexCoordP1uiv(self: ?*anyopaque, typeVal: u32, coords: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP1uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordP1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, coords: u32 ```
    pub fn GlTexCoordP1ui(self: ?*anyopaque, typeVal: u32, coords: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordP1ui(@ptrCast(self), @intCast(typeVal), @intCast(coords));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexP4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, value: *const u32 ```
    pub fn GlVertexP4uiv(self: ?*anyopaque, typeVal: u32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexP4uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexP4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, value: u32 ```
    pub fn GlVertexP4ui(self: ?*anyopaque, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexP4ui(@ptrCast(self), @intCast(typeVal), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, value: *const u32 ```
    pub fn GlVertexP3uiv(self: ?*anyopaque, typeVal: u32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexP3uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, value: u32 ```
    pub fn GlVertexP3ui(self: ?*anyopaque, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexP3ui(@ptrCast(self), @intCast(typeVal), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexP2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, value: *const u32 ```
    pub fn GlVertexP2uiv(self: ?*anyopaque, typeVal: u32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexP2uiv(@ptrCast(self), @intCast(typeVal), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexP2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, value: u32 ```
    pub fn GlVertexP2ui(self: ?*anyopaque, typeVal: u32, value: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexP2ui(@ptrCast(self), @intCast(typeVal), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetQueryObjectui64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32, pname: u32, params: *u64 ```
    pub fn GlGetQueryObjectui64v(self: ?*anyopaque, id: u32, pname: u32, params: *u64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetQueryObjectui64v(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetQueryObjecti64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32, pname: u32, params: *i64 ```
    pub fn GlGetQueryObjecti64v(self: ?*anyopaque, id: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetQueryObjecti64v(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glQueryCounter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32, target: u32 ```
    pub fn GlQueryCounter(self: ?*anyopaque, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlQueryCounter(@ptrCast(self), @intCast(id), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSamplerParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, params: *u32 ```
    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSamplerParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, params: *f32 ```
    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSamplerParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, params: *i32 ```
    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSamplerParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, params: *i32 ```
    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSamplerParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, param: *const u32 ```
    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSamplerParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, param: *const i32 ```
    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSamplerParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, param: *const f32 ```
    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSamplerParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, param: f32 ```
    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSamplerParameterf(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSamplerParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, param: *const i32 ```
    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSamplerParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32, pname: u32, param: i32 ```
    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSamplerParameteri(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindSampler)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, unit: u32, sampler: u32 ```
    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindSampler(@ptrCast(self), @intCast(unit), @intCast(sampler));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsSampler)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, sampler: u32 ```
    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsSampler(@ptrCast(self), @intCast(sampler));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteSamplers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, count: i32, samplers: *const u32 ```
    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteSamplers(@ptrCast(self), @intCast(count), @ptrCast(samplers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenSamplers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, count: i32, samplers: *u32 ```
    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenSamplers(@ptrCast(self), @intCast(count), @ptrCast(samplers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetFragDataIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, name: *const i8 ```
    pub fn GlGetFragDataIndex(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetFragDataIndex(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindFragDataLocationIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, colorNumber: u32, index: u32, name: *const i8 ```
    pub fn GlBindFragDataLocationIndexed(self: ?*anyopaque, program: u32, colorNumber: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindFragDataLocationIndexed(@ptrCast(self), @intCast(program), @intCast(colorNumber), @intCast(index), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribDivisor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, divisor: u32 ```
    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribDivisor(@ptrCast(self), @intCast(index), @intCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetQueryIndexediv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryIndexediv(self: ?*anyopaque, target: u32, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetQueryIndexediv(@ptrCast(self), @intCast(target), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEndQueryIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32 ```
    pub fn GlEndQueryIndexed(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEndQueryIndexed(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBeginQueryIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, index: u32, id: u32 ```
    pub fn GlBeginQueryIndexed(self: ?*anyopaque, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBeginQueryIndexed(@ptrCast(self), @intCast(target), @intCast(index), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawTransformFeedbackStream)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, id: u32, stream: u32 ```
    pub fn GlDrawTransformFeedbackStream(self: ?*anyopaque, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawTransformFeedbackStream(@ptrCast(self), @intCast(mode), @intCast(id), @intCast(stream));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, id: u32 ```
    pub fn GlDrawTransformFeedback(self: ?*anyopaque, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawTransformFeedback(@ptrCast(self), @intCast(mode), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glResumeTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlResumeTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlResumeTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPauseTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlPauseTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPauseTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, id: u32 ```
    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsTransformFeedback(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenTransformFeedbacks)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, ids: *u32 ```
    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGenTransformFeedbacks(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteTransformFeedbacks)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, ids: *const u32 ```
    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteTransformFeedbacks(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBindTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, id: u32 ```
    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBindTransformFeedback(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPatchParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, values: *const f32 ```
    pub fn GlPatchParameterfv(self: ?*anyopaque, pname: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPatchParameterfv(@ptrCast(self), @intCast(pname), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPatchParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, value: i32 ```
    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPatchParameteri(@ptrCast(self), @intCast(pname), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetProgramStageiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shadertype: u32, pname: u32, values: *i32 ```
    pub fn GlGetProgramStageiv(self: ?*anyopaque, program: u32, shadertype: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetProgramStageiv(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(pname), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformSubroutineuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shadertype: u32, location: i32, params: *u32 ```
    pub fn GlGetUniformSubroutineuiv(self: ?*anyopaque, shadertype: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformSubroutineuiv(@ptrCast(self), @intCast(shadertype), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformSubroutinesuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, shadertype: u32, count: i32, indices: *const u32 ```
    pub fn GlUniformSubroutinesuiv(self: ?*anyopaque, shadertype: u32, count: i32, indices: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformSubroutinesuiv(@ptrCast(self), @intCast(shadertype), @intCast(count), @ptrCast(indices));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveSubroutineName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8 ```
    pub fn GlGetActiveSubroutineName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveSubroutineName(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(bufsize), @ptrCast(length), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveSubroutineUniformName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8 ```
    pub fn GlGetActiveSubroutineUniformName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveSubroutineUniformName(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(bufsize), @ptrCast(length), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetActiveSubroutineUniformiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shadertype: u32, index: u32, pname: u32, values: *i32 ```
    pub fn GlGetActiveSubroutineUniformiv(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetActiveSubroutineUniformiv(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(pname), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSubroutineIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shadertype: u32, name: *const i8 ```
    pub fn GlGetSubroutineIndex(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSubroutineIndex(@ptrCast(self), @intCast(program), @intCast(shadertype), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSubroutineUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, shadertype: u32, name: *const i8 ```
    pub fn GlGetSubroutineUniformLocation(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSubroutineUniformLocation(@ptrCast(self), @intCast(program), @intCast(shadertype), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetUniformdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, program: u32, location: i32, params: *f64 ```
    pub fn GlGetUniformdv(self: ?*anyopaque, program: u32, location: i32, params: *f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetUniformdv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix4x3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix4x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix4x3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix4x2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix4x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix4x2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix3x4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix3x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix3x4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix3x2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix3x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix3x2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix2x4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix2x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix2x4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix2x3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix2x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix2x3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniformMatrix2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniformMatrix2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform4dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform3dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform2dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform1dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlUniform4d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform4d(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, x: f64, y: f64, z: f64 ```
    pub fn GlUniform3d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform3d(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, x: f64, y: f64 ```
    pub fn GlUniform2d(self: ?*anyopaque, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform2d(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glUniform1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, location: i32, x: f64 ```
    pub fn GlUniform1d(self: ?*anyopaque, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlUniform1d(@ptrCast(self), @intCast(location), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawElementsIndirect)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, typeVal: u32, indirect: *void ```
    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawElementsIndirect(@ptrCast(self), @intCast(mode), @intCast(typeVal), indirect);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawArraysIndirect)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, indirect: *void ```
    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawArraysIndirect(@ptrCast(self), @intCast(mode), indirect);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendFuncSeparatei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32 ```
    pub fn GlBlendFuncSeparatei(self: ?*anyopaque, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendFuncSeparatei(@ptrCast(self), @intCast(buf), @intCast(srcRGB), @intCast(dstRGB), @intCast(srcAlpha), @intCast(dstAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendFunci)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buf: u32, src: u32, dst: u32 ```
    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendFunci(@ptrCast(self), @intCast(buf), @intCast(src), @intCast(dst));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendEquationSeparatei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buf: u32, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendEquationSeparatei(@ptrCast(self), @intCast(buf), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBlendEquationi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, buf: u32, mode: u32 ```
    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBlendEquationi(@ptrCast(self), @intCast(buf), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMinSampleShading)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, value: f32 ```
    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMinSampleShading(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTranslatef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32 ```
    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTranslatef(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTranslated)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64 ```
    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTranslated(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glScalef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32 ```
    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlScalef(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glScaled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64 ```
    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlScaled(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRotatef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, angle: f32, x: f32, y: f32, z: f32 ```
    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRotatef(@ptrCast(self), @intCast(angle), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRotated)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, angle: f64, x: f64, y: f64, z: f64 ```
    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRotated(@ptrCast(self), @intCast(angle), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPushMatrix)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlPushMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPushMatrix(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPopMatrix)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlPopMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPopMatrix(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glOrtho)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64 ```
    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlOrtho(@ptrCast(self), @intCast(left), @intCast(right), @intCast(bottom), @intCast(top), @intCast(zNear), @intCast(zFar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f64 ```
    pub fn GlMultMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f32 ```
    pub fn GlMultMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMatrixMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMatrixMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLoadMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f64 ```
    pub fn GlLoadMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLoadMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLoadMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f32 ```
    pub fn GlLoadMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLoadMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLoadIdentity)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlLoadIdentity(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLoadIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFrustum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64 ```
    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFrustum(@ptrCast(self), @intCast(left), @intCast(right), @intCast(bottom), @intCast(top), @intCast(zNear), @intCast(zFar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIsList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, list: u32 ```
    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlIsList(@ptrCast(self), @intCast(list));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexGeniv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexGenfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexGendv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, params: *f64 ```
    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexEnviv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetTexEnvfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetPolygonStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: *u8 ```
    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: *u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetPixelMapusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mapVal: u32, values: *u16 ```
    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: *u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetPixelMapusv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetPixelMapuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mapVal: u32, values: *u32 ```
    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetPixelMapuiv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetPixelMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mapVal: u32, values: *f32 ```
    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetPixelMapfv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMaterialiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, pname: u32, params: *i32 ```
    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMaterialfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, pname: u32, params: *f32 ```
    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMapiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, query: u32, v: *i32 ```
    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMapiv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, query: u32, v: *f32 ```
    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMapfv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMapdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, query: u32, v: *f64 ```
    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: *f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMapdv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetLightiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, light: u32, pname: u32, params: *i32 ```
    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetLightiv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetLightfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, light: u32, pname: u32, params: *f32 ```
    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetLightfv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetClipPlane)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, plane: u32, equation: *f64 ```
    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: *f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetClipPlane(@ptrCast(self), @intCast(plane), @ptrCast(equation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDrawPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDrawPixels(@ptrCast(self), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, width: i32, height: i32, typeVal: u32 ```
    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelMapusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mapVal: u32, mapsize: i32, values: *const u16 ```
    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelMapusv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelMapuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mapVal: u32, mapsize: i32, values: *const u32 ```
    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelMapuiv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mapVal: u32, mapsize: i32, values: *const f32 ```
    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelMapfv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelTransferi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: i32 ```
    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelTransferi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelTransferf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: f32 ```
    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelTransferf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPixelZoom)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, xfactor: f32, yfactor: f32 ```
    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPixelZoom(@ptrCast(self), @intCast(xfactor), @intCast(yfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glAlphaFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, func: u32, ref: f32 ```
    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlAlphaFunc(@ptrCast(self), @intCast(func), @intCast(ref));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalPoint2)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, i: i32, j: i32 ```
    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalPoint2(@ptrCast(self), @intCast(i), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalMesh2)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32 ```
    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalMesh2(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val), @intCast(j1), @intCast(j2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalPoint1)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, i: i32 ```
    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalPoint1(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalMesh1)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32, i1Val: i32, i2Val: i32 ```
    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalMesh1(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: *const f32 ```
    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord2fv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: f32, v: f32 ```
    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord2f(@ptrCast(self), @intCast(u), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: *const f64 ```
    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord2dv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: f64, v: f64 ```
    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord2d(@ptrCast(self), @intCast(u), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: *const f32 ```
    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord1fv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: f32 ```
    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord1f(@ptrCast(self), @intCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: *const f64 ```
    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord1dv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEvalCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, u: f64 ```
    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEvalCoord1d(@ptrCast(self), @intCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMapGrid2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32 ```
    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMapGrid2f(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val), @intCast(vn), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMapGrid2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64 ```
    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMapGrid2d(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val), @intCast(vn), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMapGrid1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, un: i32, u1Val: f32, u2Val: f32 ```
    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMapGrid1f(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMapGrid1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, un: i32, u1Val: f64, u2Val: f64 ```
    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMapGrid1d(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMap2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32 ```
    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMap2f(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(ustride), @intCast(uorder), @intCast(v1), @intCast(v2), @intCast(vstride), @intCast(vorder), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMap2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64 ```
    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMap2d(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(ustride), @intCast(uorder), @intCast(v1), @intCast(v2), @intCast(vstride), @intCast(vorder), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMap1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32 ```
    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMap1f(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(stride), @intCast(order), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMap1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64 ```
    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMap1d(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(stride), @intCast(order), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPushAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: u32 ```
    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPushAttrib(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPopAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlPopAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPopAttrib(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glAccum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, op: u32, value: f32 ```
    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlAccum(@ptrCast(self), @intCast(op), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: u32 ```
    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: f32 ```
    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearIndex(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClearAccum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClearAccum(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPushName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, name: u32 ```
    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPushName(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPopName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlPopName(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPopName(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPassThrough)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, token: f32 ```
    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPassThrough(@ptrCast(self), @intCast(token));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLoadName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, name: u32 ```
    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLoadName(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glInitNames)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlInitNames(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlInitNames(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRenderMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlRenderMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSelectBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: i32, buffer: *u32 ```
    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: *u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSelectBuffer(@ptrCast(self), @intCast(size), @ptrCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFeedbackBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: i32, typeVal: u32, buffer: *f32 ```
    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFeedbackBuffer(@ptrCast(self), @intCast(size), @intCast(typeVal), @ptrCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexGeniv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, params: *const i32 ```
    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexGeni)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, param: i32 ```
    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexGeni(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexGenfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, params: *const f32 ```
    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexGenf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, param: f32 ```
    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexGenf(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexGendv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, params: *const f64 ```
    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexGend)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: u32, pname: u32, param: f64 ```
    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexGend(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexEnviv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexEnvi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, param: i32 ```
    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexEnvi(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexEnvfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexEnvf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, param: f32 ```
    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexEnvf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glShadeModel)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlShadeModel(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPolygonStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: *const u8 ```
    pub fn GlPolygonStipple(self: ?*anyopaque, mask: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMaterialiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, pname: u32, params: *const i32 ```
    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMateriali)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, pname: u32, param: i32 ```
    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMateriali(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMaterialfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, pname: u32, params: *const f32 ```
    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMaterialf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, pname: u32, param: f32 ```
    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMaterialf(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLineStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, factor: i32, pattern: u16 ```
    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLineStipple(@ptrCast(self), @intCast(factor), @intCast(pattern));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightModeliv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *const i32 ```
    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightModeliv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightModeli)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: i32 ```
    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightModeli(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightModelfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *const f32 ```
    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightModelfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightModelf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: f32 ```
    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightModelf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, light: u32, pname: u32, params: *const i32 ```
    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightiv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLighti)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, light: u32, pname: u32, param: i32 ```
    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLighti(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, light: u32, pname: u32, params: *const f32 ```
    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightfv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLightf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, light: u32, pname: u32, param: f32 ```
    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLightf(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *const i32 ```
    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogiv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: i32 ```
    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, params: *const f32 ```
    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, pname: u32, param: f32 ```
    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorMaterial)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, face: u32, mode: u32 ```
    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorMaterial(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClipPlane)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, plane: u32, equation: *const f64 ```
    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClipPlane(@ptrCast(self), @intCast(plane), @ptrCast(equation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlVertex4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlVertex4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlVertex4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlVertex4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex4d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlVertex3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16, z: i16 ```
    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlVertex3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, z: i32 ```
    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlVertex3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32 ```
    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlVertex3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64 ```
    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlVertex2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16 ```
    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlVertex2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32 ```
    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlVertex2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32 ```
    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlVertex2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertex2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64 ```
    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertex2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlTexCoord4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i16, t: i16, r: i16, q: i16 ```
    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlTexCoord4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i32, t: i32, r: i32, q: i32 ```
    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlTexCoord4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f32, t: f32, r: f32, q: f32 ```
    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4f(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlTexCoord4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f64, t: f64, r: f64, q: f64 ```
    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord4d(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlTexCoord3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i16, t: i16, r: i16 ```
    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlTexCoord3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i32, t: i32, r: i32 ```
    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlTexCoord3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f32, t: f32, r: f32 ```
    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3f(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlTexCoord3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f64, t: f64, r: f64 ```
    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord3d(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlTexCoord2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i16, t: i16 ```
    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2s(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlTexCoord2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i32, t: i32 ```
    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2i(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlTexCoord2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f32, t: f32 ```
    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2f(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlTexCoord2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f64, t: f64 ```
    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord2d(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlTexCoord1sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i16 ```
    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1s(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlTexCoord1iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: i32 ```
    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1i(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlTexCoord1fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f32 ```
    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1f(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlTexCoord1dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, s: f64 ```
    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoord1d(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRectsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v1: *const i16, v2: *const i16 ```
    pub fn GlRectsv(self: ?*anyopaque, v1: *const i16, v2: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRectsv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRects)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x1: i16, y1: i16, x2: i16, y2: i16 ```
    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRects(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v1: *const i32, v2: *const i32 ```
    pub fn GlRectiv(self: ?*anyopaque, v1: *const i32, v2: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRectiv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRecti)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRecti(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRectfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v1: *const f32, v2: *const f32 ```
    pub fn GlRectfv(self: ?*anyopaque, v1: *const f32, v2: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRectfv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRectf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x1: f32, y1: f32, x2: f32, y2: f32 ```
    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRectf(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRectdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v1: *const f64, v2: *const f64 ```
    pub fn GlRectdv(self: ?*anyopaque, v1: *const f64, v2: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRectdv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRectd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRectd(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlRasterPos4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlRasterPos4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlRasterPos4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlRasterPos4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos4d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlRasterPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16, z: i16 ```
    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlRasterPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, z: i32 ```
    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlRasterPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32 ```
    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlRasterPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64 ```
    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlRasterPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16 ```
    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlRasterPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32 ```
    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlRasterPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32 ```
    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlRasterPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glRasterPos2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64 ```
    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlRasterPos2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlNormal3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, nx: i16, ny: i16, nz: i16 ```
    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3s(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlNormal3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, nx: i32, ny: i32, nz: i32 ```
    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3i(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlNormal3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, nx: f32, ny: f32, nz: f32 ```
    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3f(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlNormal3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, nx: f64, ny: f64, nz: f64 ```
    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3d(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i8 ```
    pub fn GlNormal3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormal3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, nx: i8, ny: i8, nz: i8 ```
    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormal3b(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: *const i16 ```
    pub fn GlIndexsv(self: ?*anyopaque, c: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexsv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexs)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: i16 ```
    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexs(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: *const i32 ```
    pub fn GlIndexiv(self: ?*anyopaque, c: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexiv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: i32 ```
    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexi(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: *const f32 ```
    pub fn GlIndexfv(self: ?*anyopaque, c: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexfv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: f32 ```
    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexf(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: *const f64 ```
    pub fn GlIndexdv(self: ?*anyopaque, c: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexdv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, c: f64 ```
    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexd(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEnd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlEnd(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEdgeFlagv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, flag: *const u8 ```
    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEdgeFlagv(@ptrCast(self), @ptrCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEdgeFlag)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, flag: u8 ```
    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEdgeFlag(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u16 ```
    pub fn GlColor4usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u16, green: u16, blue: u16, alpha: u16 ```
    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u32 ```
    pub fn GlColor4uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u32, green: u32, blue: u32, alpha: u32 ```
    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u8 ```
    pub fn GlColor4ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlColor4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i16, green: i16, blue: i16, alpha: i16 ```
    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlColor4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i32, green: i32, blue: i32, alpha: i32 ```
    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlColor4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlColor4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f64, green: f64, blue: f64, alpha: f64 ```
    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i8 ```
    pub fn GlColor4bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor4b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i8, green: i8, blue: i8, alpha: i8 ```
    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor4b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u16 ```
    pub fn GlColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u16, green: u16, blue: u16 ```
    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u32 ```
    pub fn GlColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u32, green: u32, blue: u32 ```
    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u8 ```
    pub fn GlColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u8, green: u8, blue: u8 ```
    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i16, green: i16, blue: i16 ```
    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i32, green: i32, blue: i32 ```
    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f32, green: f32, blue: f32 ```
    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f64, green: f64, blue: f64 ```
    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i8 ```
    pub fn GlColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColor3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i8, green: i8, blue: i8 ```
    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBitmap)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8 ```
    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBitmap(@ptrCast(self), @intCast(width), @intCast(height), @intCast(xorig), @intCast(yorig), @intCast(xmove), @intCast(ymove), @ptrCast(bitmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glBegin)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mode: u32 ```
    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlBegin(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glListBase)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, base: u32 ```
    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlListBase(@ptrCast(self), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGenLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, range: i32 ```
    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlGenLists(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDeleteLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, list: u32, range: i32 ```
    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDeleteLists(@ptrCast(self), @intCast(list), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCallLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, typeVal: u32, lists: *void ```
    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCallLists(@ptrCast(self), @intCast(n), @intCast(typeVal), lists);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCallList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, list: u32 ```
    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCallList(@ptrCast(self), @intCast(list));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEndList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlEndList(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEndList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNewList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, list: u32, mode: u32 ```
    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNewList(@ptrCast(self), @intCast(list), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPushClientAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, mask: u32 ```
    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPushClientAttrib(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPopClientAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn GlPopClientAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPopClientAttrib(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glPrioritizeTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, textures: *const u32, priorities: *const f32 ```
    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: *const u32, priorities: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlPrioritizeTextures(@ptrCast(self), @intCast(n), @ptrCast(textures), @ptrCast(priorities));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glAreTexturesResident)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, n: i32, textures: *const u32, residences: *u8 ```
    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: *const u32, residences: *u8) u8 {
        return qtc.QOpenGLFunctions_4_0_Compatibility_GlAreTexturesResident(@ptrCast(self), @intCast(n), @ptrCast(textures), @ptrCast(residences));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glTexCoordPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlTexCoordPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glNormalPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlNormalPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glInterleavedArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, format: u32, stride: i32, pointer: *void ```
    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlInterleavedArrays(@ptrCast(self), @intCast(format), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glIndexPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlIndexPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEnableClientState)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, array: u32 ```
    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEnableClientState(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glEdgeFlagPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, stride: i32, pointer: *void ```
    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlEdgeFlagPointer(@ptrCast(self), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glDisableClientState)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, array: u32 ```
    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlDisableClientState(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glArrayElement)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, i: i32 ```
    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlArrayElement(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glResetMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32 ```
    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlResetMinmax(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glResetHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32 ```
    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlResetHistogram(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, sink: u8 ```
    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMinmax(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, width: i32, internalformat: u32, sink: u8 ```
    pub fn GlHistogram(self: ?*anyopaque, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlHistogram(@ptrCast(self), @intCast(target), @intCast(width), @intCast(internalformat), @intCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMinmaxParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMinmaxParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMinmaxParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMinmaxParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, reset: u8, format: u32, typeVal: u32, values: *void ```
    pub fn GlGetMinmax(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetMinmax(@ptrCast(self), @intCast(target), @intCast(reset), @intCast(format), @intCast(typeVal), values);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetHistogramParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetHistogramParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetHistogramParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetHistogramParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, reset: u8, format: u32, typeVal: u32, values: *void ```
    pub fn GlGetHistogram(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetHistogram(@ptrCast(self), @intCast(target), @intCast(reset), @intCast(format), @intCast(typeVal), values);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSeparableFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: *void, column: *void ```
    pub fn GlSeparableFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: *const void, column: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSeparableFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), row, column);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetSeparableFilter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, format: u32, typeVal: u32, row: *void, column: *void, span: *void ```
    pub fn GlGetSeparableFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, row: *void, column: *void, span: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetSeparableFilter(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), row, column, span);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetConvolutionParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetConvolutionParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetConvolutionParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetConvolutionParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetConvolutionFilter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, format: u32, typeVal: u32, image: *void ```
    pub fn GlGetConvolutionFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, image: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetConvolutionFilter(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyConvolutionFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyConvolutionFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyConvolutionFilter1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyConvolutionFilter1D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glConvolutionParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const i32 ```
    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlConvolutionParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glConvolutionParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: i32 ```
    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlConvolutionParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glConvolutionParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const f32 ```
    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlConvolutionParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glConvolutionParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: f32 ```
    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlConvolutionParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glConvolutionFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: *void ```
    pub fn GlConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlConvolutionFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glConvolutionFilter1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: *void ```
    pub fn GlConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlConvolutionFilter1D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyColorSubTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, start: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyColorSubTable(self: ?*anyopaque, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyColorSubTable(@ptrCast(self), @intCast(target), @intCast(start), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorSubTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: *void ```
    pub fn GlColorSubTable(self: ?*anyopaque, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorSubTable(@ptrCast(self), @intCast(target), @intCast(start), @intCast(count), @intCast(format), @intCast(typeVal), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetColorTableParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetColorTableParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetColorTableParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetColorTableParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glGetColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, format: u32, typeVal: u32, table: *void ```
    pub fn GlGetColorTable(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, table: *void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlGetColorTable(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), table);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glCopyColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyColorTable(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlCopyColorTable(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorTableParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const i32 ```
    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorTableParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorTableParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, pname: u32, params: *const f32 ```
    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorTableParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: *void ```
    pub fn GlColorTable(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlColorTable(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(format), @intCast(typeVal), table);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultTransposeMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f64 ```
    pub fn GlMultTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultTransposeMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f32 ```
    pub fn GlMultTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLoadTransposeMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f64 ```
    pub fn GlLoadTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLoadTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glLoadTransposeMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, m: *const f32 ```
    pub fn GlLoadTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlLoadTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord4sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i16, t: i16, r: i16, q: i16 ```
    pub fn GlMultiTexCoord4s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord4iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i32, t: i32, r: i32, q: i32 ```
    pub fn GlMultiTexCoord4i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord4fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f32, t: f32, r: f32, q: f32 ```
    pub fn GlMultiTexCoord4f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord4dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f64, t: f64, r: f64, q: f64 ```
    pub fn GlMultiTexCoord4d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord4d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord3sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i16, t: i16, r: i16 ```
    pub fn GlMultiTexCoord3s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord3iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i32, t: i32, r: i32 ```
    pub fn GlMultiTexCoord3i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord3fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f32, t: f32, r: f32 ```
    pub fn GlMultiTexCoord3f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord3dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f64, t: f64, r: f64 ```
    pub fn GlMultiTexCoord3d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord3d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord2sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i16, t: i16 ```
    pub fn GlMultiTexCoord2s(self: ?*anyopaque, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord2iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i32, t: i32 ```
    pub fn GlMultiTexCoord2i(self: ?*anyopaque, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord2fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f32, t: f32 ```
    pub fn GlMultiTexCoord2f(self: ?*anyopaque, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord2dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f64, t: f64 ```
    pub fn GlMultiTexCoord2d(self: ?*anyopaque, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord2d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord1sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i16 ```
    pub fn GlMultiTexCoord1s(self: ?*anyopaque, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1s(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord1iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: i32 ```
    pub fn GlMultiTexCoord1i(self: ?*anyopaque, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1i(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord1fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f32 ```
    pub fn GlMultiTexCoord1f(self: ?*anyopaque, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1f(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord1dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glMultiTexCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, target: u32, s: f64 ```
    pub fn GlMultiTexCoord1d(self: ?*anyopaque, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlMultiTexCoord1d(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glClientActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, texture: u32 ```
    pub fn GlClientActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlClientActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlWindowPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16, z: i16 ```
    pub fn GlWindowPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlWindowPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32, z: i32 ```
    pub fn GlWindowPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlWindowPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32, z: f32 ```
    pub fn GlWindowPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlWindowPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64, z: f64 ```
    pub fn GlWindowPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlWindowPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i16, y: i16 ```
    pub fn GlWindowPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlWindowPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: i32, y: i32 ```
    pub fn GlWindowPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlWindowPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f32, y: f32 ```
    pub fn GlWindowPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlWindowPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glWindowPos2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, x: f64, y: f64 ```
    pub fn GlWindowPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlWindowPos2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColorPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlSecondaryColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColorPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u16 ```
    pub fn GlSecondaryColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u16, green: u16, blue: u16 ```
    pub fn GlSecondaryColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u32 ```
    pub fn GlSecondaryColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u32, green: u32, blue: u32 ```
    pub fn GlSecondaryColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const u8 ```
    pub fn GlSecondaryColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: u8, green: u8, blue: u8 ```
    pub fn GlSecondaryColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i16 ```
    pub fn GlSecondaryColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i16, green: i16, blue: i16 ```
    pub fn GlSecondaryColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i32 ```
    pub fn GlSecondaryColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i32, green: i32, blue: i32 ```
    pub fn GlSecondaryColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f32 ```
    pub fn GlSecondaryColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f32, green: f32, blue: f32 ```
    pub fn GlSecondaryColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const f64 ```
    pub fn GlSecondaryColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: f64, green: f64, blue: f64 ```
    pub fn GlSecondaryColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, v: *const i8 ```
    pub fn GlSecondaryColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glSecondaryColor3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, red: i8, green: i8, blue: i8 ```
    pub fn GlSecondaryColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlSecondaryColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogCoordPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlFogCoordPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogCoordPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogCoorddv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: *const f64 ```
    pub fn GlFogCoorddv(self: ?*anyopaque, coord: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogCoorddv(@ptrCast(self), @ptrCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogCoordd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: f64 ```
    pub fn GlFogCoordd(self: ?*anyopaque, coord: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogCoordd(@ptrCast(self), @intCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogCoordfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: *const f32 ```
    pub fn GlFogCoordfv(self: ?*anyopaque, coord: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogCoordfv(@ptrCast(self), @ptrCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glFogCoordf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, coord: f32 ```
    pub fn GlFogCoordf(self: ?*anyopaque, coord: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlFogCoordf(@ptrCast(self), @intCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u16 ```
    pub fn GlVertexAttrib4usv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4usv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u32 ```
    pub fn GlVertexAttrib4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u8 ```
    pub fn GlVertexAttrib4ubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4ubv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib4sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlVertexAttrib4s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4s(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i32 ```
    pub fn GlVertexAttrib4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib4fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertexAttrib4f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4f(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlVertexAttrib4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i8 ```
    pub fn GlVertexAttrib4bv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4bv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Nusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u16 ```
    pub fn GlVertexAttrib4Nusv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Nusv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Nuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u32 ```
    pub fn GlVertexAttrib4Nuiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Nuiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Nubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u8 ```
    pub fn GlVertexAttrib4Nubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Nubv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Nub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: u8, y: u8, z: u8, w: u8 ```
    pub fn GlVertexAttrib4Nub(self: ?*anyopaque, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Nub(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Nsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib4Nsv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Nsv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Niv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i32 ```
    pub fn GlVertexAttrib4Niv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Niv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib4Nbv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i8 ```
    pub fn GlVertexAttrib4Nbv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib4Nbv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib3sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib3sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i16, y: i16, z: i16 ```
    pub fn GlVertexAttrib3s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib3s(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib3fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib3fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f32, y: f32, z: f32 ```
    pub fn GlVertexAttrib3f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib3f(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib3dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f64, y: f64, z: f64 ```
    pub fn GlVertexAttrib3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib3d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib2sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib2sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i16, y: i16 ```
    pub fn GlVertexAttrib2s(self: ?*anyopaque, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib2s(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib2fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib2fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f32, y: f32 ```
    pub fn GlVertexAttrib2f(self: ?*anyopaque, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib2f(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib2dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f64, y: f64 ```
    pub fn GlVertexAttrib2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib2d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib1sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib1sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i16 ```
    pub fn GlVertexAttrib1s(self: ?*anyopaque, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib1s(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib1fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib1fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f32 ```
    pub fn GlVertexAttrib1f(self: ?*anyopaque, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib1f(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib1dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttrib1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: f64 ```
    pub fn GlVertexAttrib1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttrib1d(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u16 ```
    pub fn GlVertexAttribI4usv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4usv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u8 ```
    pub fn GlVertexAttribI4ubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4ubv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i16 ```
    pub fn GlVertexAttribI4sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i8 ```
    pub fn GlVertexAttribI4bv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4bv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u32 ```
    pub fn GlVertexAttribI4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u32 ```
    pub fn GlVertexAttribI3uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI3uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u32 ```
    pub fn GlVertexAttribI2uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI2uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const u32 ```
    pub fn GlVertexAttribI1uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI1uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i32 ```
    pub fn GlVertexAttribI4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i32 ```
    pub fn GlVertexAttribI3iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI3iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i32 ```
    pub fn GlVertexAttribI2iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI2iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, v: *const i32 ```
    pub fn GlVertexAttribI1iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI1iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: u32, y: u32, z: u32, w: u32 ```
    pub fn GlVertexAttribI4ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4ui(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: u32, y: u32, z: u32 ```
    pub fn GlVertexAttribI3ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI3ui(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: u32, y: u32 ```
    pub fn GlVertexAttribI2ui(self: ?*anyopaque, index: u32, x: u32, y: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI2ui(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: u32 ```
    pub fn GlVertexAttribI1ui(self: ?*anyopaque, index: u32, x: u32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI1ui(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlVertexAttribI4i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI4i(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i32, y: i32, z: i32 ```
    pub fn GlVertexAttribI3i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI3i(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i32, y: i32 ```
    pub fn GlVertexAttribI2i(self: ?*anyopaque, index: u32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI2i(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#glVertexAttribI1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, index: u32, x: i32 ```
    pub fn GlVertexAttribI1i(self: ?*anyopaque, index: u32, x: i32) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_GlVertexAttribI1i(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_0_Compatibility_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_0_Compatibility_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, context: QtC.QOpenGLContext ```
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, context: QtC.QOpenGLContext ```
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, callback: *const fn (self: QtC.QOpenGLFunctions_4_0_Compatibility, context: QtC.QOpenGLContext) callconv(.c) void ```
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_0_Compatibility_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_0_Compatibility_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility, callback: *const fn () callconv(.c) QtC.QOpenGLContext ```
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-compatibility.html#dtor.QOpenGLFunctions_4_0_Compatibility)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_Compatibility ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_0_Compatibility_Delete(@ptrCast(self));
    }
};
