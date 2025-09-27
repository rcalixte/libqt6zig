const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html
pub const qopenglfunctions_4_1_core = struct {
    /// New constructs a new QOpenGLFunctions_4_1_Core object.
    ///
    ///
    pub fn New() QtC.QOpenGLFunctions_4_1_Core {
        return qtc.QOpenGLFunctions_4_1_Core_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_1_Core_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, callback: *const fn () callconv(.c) bool ```
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_1_Core_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_1_Core_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glViewport)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDepthRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, nearVal: f64, farVal: f64 ```
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDepthRange(@ptrCast(self), @intCast(nearVal), @intCast(farVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsEnabled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, cap: u32 ```
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexLevelParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, pname: u32, params: *i32 ```
    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexLevelParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, pname: u32, params: *f32 ```
    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexImage(@ptrCast(self), @intCast(target), @intCast(level), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetString)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, name: u32 ```
    pub fn GlGetString(self: ?*anyopaque, name: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_1_Core_GlGetString(@ptrCast(self), @intCast(name)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetIntegerv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *i32 ```
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetIntegerv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetFloatv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *f32 ```
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetFloatv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetDoublev)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *f64 ```
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetDoublev(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetBooleanv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *u8 ```
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetBooleanv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glReadPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glReadBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32 ```
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPixelStorei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, param: i32 ```
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPixelStoref)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, param: f32 ```
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPixelStoref(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDepthFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, func: u32 ```
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glStencilOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glStencilFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glLogicOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, opcode: u32 ```
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlLogicOp(@ptrCast(self), @intCast(opcode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sfactor: u32, dfactor: u32 ```
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFlush)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFlush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFinish)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFinish(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEnable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, cap: u32 ```
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDisable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, cap: u32 ```
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDepthMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, flag: u8 ```
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glColorMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glStencilMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mask: u32 ```
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearDepth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, depth: f64 ```
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearStencil)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, s: i32 ```
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClear)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mask: u32 ```
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32 ```
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, param: i32 ```
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, param: f32 ```
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glScissor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPolygonMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, face: u32, mode: u32 ```
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPolygonMode(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPointSize)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, size: f32 ```
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPointSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glLineWidth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, width: f32 ```
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlLineWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glHint)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, mode: u32 ```
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFrontFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32 ```
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCullFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32 ```
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, texture: u32 ```
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, textures: *u32 ```
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, textures: *const u32 ```
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, texture: u32 ```
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCopyTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCopyTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCopyTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCopyTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32 ```
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCopyTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32 ```
    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCopyTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPolygonOffset)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, factor: f32, units: f32 ```
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPolygonOffset(@ptrCast(self), @intCast(factor), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, first: i32, count: i32 ```
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCopyTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCopyTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawRangeElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawRangeElements(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendEquation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32 ```
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetCompressedTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, img: *void ```
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: *void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetCompressedTexImage(@ptrCast(self), @intCast(target), @intCast(level), img);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompressedTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompressedTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompressedTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompressedTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompressedTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompressedTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompressedTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompressedTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompressedTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompressedTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSampleCoverage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, value: f32, invert: u8 ```
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSampleCoverage(@ptrCast(self), @intCast(value), @intCast(invert));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, texture: u32 ```
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPointParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *const i32 ```
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPointParameteriv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPointParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, param: i32 ```
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPointParameteri(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPointParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *const f32 ```
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPointParameterfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPointParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, param: f32 ```
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPointParameterf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glMultiDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, first: *const i32, count: *const i32, drawcount: i32 ```
    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlMultiDrawArrays(@ptrCast(self), @intCast(mode), @ptrCast(first), @ptrCast(count), @intCast(drawcount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32 ```
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendFuncSeparate(@ptrCast(self), @intCast(sfactorRGB), @intCast(dfactorRGB), @intCast(sfactorAlpha), @intCast(dfactorAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetBufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUnmapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32 ```
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlUnmapBuffer(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glMapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, access: u32 ```
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_1_Core_GlMapBuffer(@ptrCast(self), @intCast(target), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBufferData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, size: i64, data: *void, usage: u32 ```
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: *const void, usage: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), data, @intCast(usage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buffer: u32 ```
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, buffers: *u32 ```
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, buffers: *const u32 ```
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, buffer: u32 ```
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetQueryObjectuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32, pname: u32, params: *u32 ```
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetQueryObjectuiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetQueryObjectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetQueryObjectiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetQueryiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetQueryiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEndQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32 ```
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEndQuery(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBeginQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, id: u32 ```
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBeginQuery(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32 ```
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsQuery(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, ids: *const u32 ```
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, ids: *u32 ```
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: *void ```
    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glValidateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32 ```
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlValidateProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: i32, v1: i32, v2: i32, v3: i32 ```
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: i32, v1: i32, v2: i32 ```
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: i32, v1: i32 ```
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: i32 ```
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1i(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: f32, v1: f32, v2: f32, v3: f32 ```
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: f32, v1: f32, v2: f32 ```
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: f32, v1: f32 ```
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: f32 ```
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1f(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUseProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32 ```
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUseProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glLinkProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32 ```
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlLinkProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shader: u32 ```
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32 ```
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetVertexAttribiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetVertexAttribiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetVertexAttribfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, pname: u32, params: *f32 ```
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetVertexAttribfv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetVertexAttribdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, pname: u32, params: *f64 ```
    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetVertexAttribdv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, params: *i32 ```
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetUniformiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, params: *f32 ```
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetUniformfv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, name: *const i8 ```
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetUniformLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetShaderSource)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shader: u32, bufSize: i32, length: *i32, source: *i8 ```
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetShaderSource(@ptrCast(self), @intCast(shader), @intCast(bufSize), @ptrCast(length), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetShaderInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shader: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetShaderInfoLog(@ptrCast(self), @intCast(shader), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetShaderiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shader: u32, pname: u32, params: *i32 ```
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetShaderiv(@ptrCast(self), @intCast(shader), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetProgramInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetProgramInfoLog(@ptrCast(self), @intCast(program), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetProgramiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetProgramiv(@ptrCast(self), @intCast(program), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, name: *const i8 ```
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetAttribLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetAttachedShaders)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, maxCount: i32, count: *i32, obj: *u32 ```
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetAttachedShaders(@ptrCast(self), @intCast(program), @intCast(maxCount), @ptrCast(count), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEnableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32 ```
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEnableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDisableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32 ```
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDisableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDetachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shader: u32 ```
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDetachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shader: u32 ```
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32 ```
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCreateShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, typeVal: u32 ```
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlCreateShader(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCreateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlCreateProgram(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCompileShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shader: u32 ```
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCompileShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, index: u32, name: *const i8 ```
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindAttribLocation(@ptrCast(self), @intCast(program), @intCast(index), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glAttachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shader: u32 ```
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlAttachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glStencilMaskSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, face: u32, mask: u32 ```
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlStencilMaskSeparate(@ptrCast(self), @intCast(face), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glStencilFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, face: u32, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlStencilFuncSeparate(@ptrCast(self), @intCast(face), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glStencilOpSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, face: u32, sfail: u32, dpfail: u32, dppass: u32 ```
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlStencilOpSeparate(@ptrCast(self), @intCast(face), @intCast(sfail), @intCast(dpfail), @intCast(dppass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendEquationSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendEquationSeparate(@ptrCast(self), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix4x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix4x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix3x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix3x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix4x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix4x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix2x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix2x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix3x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix3x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix2x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix2x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsVertexArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, array: u32 ```
    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsVertexArray(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenVertexArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, arrays: *u32 ```
    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenVertexArrays(@ptrCast(self), @intCast(n), @ptrCast(arrays));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteVertexArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, arrays: *const u32 ```
    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteVertexArrays(@ptrCast(self), @intCast(n), @ptrCast(arrays));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindVertexArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, array: u32 ```
    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindVertexArray(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFlushMappedBufferRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, offset: i64, length: i64 ```
    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFlushMappedBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glMapBufferRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, offset: i64, length: i64, access: u32 ```
    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_4_1_Core_GlMapBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFramebufferTextureLayer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, texture: u32, level: i32, layer: i32 ```
    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFramebufferTextureLayer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level), @intCast(layer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glRenderbufferStorageMultisample)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, samples: i32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlRenderbufferStorageMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlitFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32 ```
    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlitFramebuffer(@ptrCast(self), @intCast(srcX0), @intCast(srcY0), @intCast(srcX1), @intCast(srcY1), @intCast(dstX0), @intCast(dstY0), @intCast(dstX1), @intCast(dstY1), @intCast(mask), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenerateMipmap)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32 ```
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenerateMipmap(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, pname: u32, params: *i32 ```
    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFramebufferRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32 ```
    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFramebufferRenderbuffer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(renderbuffertarget), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFramebufferTexture3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32 ```
    pub fn GlFramebufferTexture3D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32, zoffset: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFramebufferTexture3D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level), @intCast(zoffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFramebufferTexture2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFramebufferTexture2D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFramebufferTexture1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture1D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFramebufferTexture1D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, framebuffers: *u32 ```
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, framebuffers: *const u32 ```
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, framebuffer: u32 ```
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindFramebuffer(@ptrCast(self), @intCast(target), @intCast(framebuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, framebuffer: u32 ```
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsFramebuffer(@ptrCast(self), @intCast(framebuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetRenderbufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetRenderbufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glRenderbufferStorage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlRenderbufferStorage(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, renderbuffers: *u32 ```
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, renderbuffers: *const u32 ```
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, renderbuffer: u32 ```
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindRenderbuffer(@ptrCast(self), @intCast(target), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, renderbuffer: u32 ```
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsRenderbuffer(@ptrCast(self), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetStringi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, name: u32, index: u32 ```
    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_4_1_Core_GlGetStringi(@ptrCast(self), @intCast(name), @intCast(index)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearBufferfi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32 ```
    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearBufferfi(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @intCast(depth), @intCast(stencil));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearBufferfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buffer: u32, drawbuffer: i32, value: *const f32 ```
    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearBufferfv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearBufferuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buffer: u32, drawbuffer: i32, value: *const u32 ```
    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearBufferuiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearBufferiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buffer: u32, drawbuffer: i32, value: *const i32 ```
    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearBufferiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *u32 ```
    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetTexParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *const u32 ```
    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: u32, v1: u32, v2: u32, v3: u32 ```
    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: u32, v1: u32, v2: u32 ```
    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: u32, v1: u32 ```
    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, v0: u32 ```
    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1ui(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetFragDataLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, name: *const i8 ```
    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetFragDataLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindFragDataLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, color: u32, name: *const i8 ```
    pub fn GlBindFragDataLocation(self: ?*anyopaque, program: u32, color: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindFragDataLocation(@ptrCast(self), @intCast(program), @intCast(color), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, params: *u32 ```
    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetUniformuiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetVertexAttribIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, pname: u32, params: *u32 ```
    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetVertexAttribIuiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetVertexAttribIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetVertexAttribIiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribIPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribIPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEndConditionalRender)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlEndConditionalRender(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEndConditionalRender(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBeginConditionalRender)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32, mode: u32 ```
    pub fn GlBeginConditionalRender(self: ?*anyopaque, id: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBeginConditionalRender(@ptrCast(self), @intCast(id), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClampColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, clamp: u32 ```
    pub fn GlClampColor(self: ?*anyopaque, target: u32, clamp: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClampColor(@ptrCast(self), @intCast(target), @intCast(clamp));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindBufferBase)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, buffer: u32 ```
    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindBufferBase(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindBufferRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, buffer: u32, offset: i64, size: i64 ```
    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindBufferRange(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer), @intCast(offset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEndTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlEndTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEndTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBeginTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, primitiveMode: u32 ```
    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBeginTransformFeedback(@ptrCast(self), @intCast(primitiveMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsEnabledi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32 ```
    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsEnabledi(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDisablei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32 ```
    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDisablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEnablei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32 ```
    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEnablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetIntegeri_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, data: *i32 ```
    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetIntegeriV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetBooleani_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, data: *u8 ```
    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: *u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetBooleaniV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glColorMaski)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, r: u8, g: u8, b: u8, a: u8 ```
    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlColorMaski(@ptrCast(self), @intCast(index), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glCopyBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64 ```
    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlCopyBufferSubData(@ptrCast(self), @intCast(readTarget), @intCast(writeTarget), @intCast(readOffset), @intCast(writeOffset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformBlockBinding)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32 ```
    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformBlockBinding(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(uniformBlockBinding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveUniformBlockName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8 ```
    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveUniformBlockName(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(bufSize), @ptrCast(length), @ptrCast(uniformBlockName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveUniformBlockiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32 ```
    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveUniformBlockiv(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformBlockIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, uniformBlockName: *const i8 ```
    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetUniformBlockIndex(@ptrCast(self), @intCast(program), @ptrCast(uniformBlockName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveUniformName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8 ```
    pub fn GlGetActiveUniformName(self: ?*anyopaque, program: u32, uniformIndex: u32, bufSize: i32, length: *i32, uniformName: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveUniformName(@ptrCast(self), @intCast(program), @intCast(uniformIndex), @intCast(bufSize), @ptrCast(length), @ptrCast(uniformName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveUniformsiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32 ```
    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveUniformsiv(@ptrCast(self), @intCast(program), @intCast(uniformCount), @ptrCast(uniformIndices), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPrimitiveRestartIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32 ```
    pub fn GlPrimitiveRestartIndex(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPrimitiveRestartIndex(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, internalformat: u32, buffer: u32 ```
    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexBuffer(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawElementsInstanced)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, count: i32, typeVal: u32, indices: *void, instancecount: i32 ```
    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawElementsInstanced(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(instancecount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawArraysInstanced)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, first: i32, count: i32, instancecount: i32 ```
    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawArraysInstanced(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count), @intCast(instancecount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSampleMaski)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, mask: u32 ```
    pub fn GlSampleMaski(self: ?*anyopaque, index: u32, mask: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSampleMaski(@ptrCast(self), @intCast(index), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetMultisamplefv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, index: u32, val: *f32 ```
    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetMultisamplefv(@ptrCast(self), @intCast(pname), @intCast(index), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexImage3DMultisample)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8 ```
    pub fn GlTexImage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexImage3DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(fixedsamplelocations));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glTexImage2DMultisample)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8 ```
    pub fn GlTexImage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: i32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlTexImage2DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(fixedsamplelocations));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetInteger64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, params: *i64 ```
    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetInteger64v(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProvokingVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32 ```
    pub fn GlProvokingVertex(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProvokingVertex(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, count: i32, typeVal: u32, indices: *void, instancecount: i32, basevertex: i32 ```
    pub fn GlDrawElementsInstancedBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawElementsInstancedBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(instancecount), @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawRangeElementsBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *void, basevertex: i32 ```
    pub fn GlDrawRangeElementsBaseVertex(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *const void, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawRangeElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices, @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawElementsBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, count: i32, typeVal: u32, indices: *void, basevertex: i32 ```
    pub fn GlDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void, basevertex: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glFramebufferTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, attachment: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlFramebufferTexture(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetBufferParameteri64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, pname: u32, params: *i64 ```
    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetBufferParameteri64v(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetInteger64i_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, data: *i64 ```
    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: *i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetInteger64iV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP4uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP4uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP4ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP4ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP3uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP3uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP3ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP3ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP2uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP2uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP2ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP2ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: *const u32 ```
    pub fn GlVertexAttribP1uiv(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP1uiv(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribP1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, typeVal: u32, normalized: u8, value: u32 ```
    pub fn GlVertexAttribP1ui(self: ?*anyopaque, index: u32, typeVal: u32, normalized: u8, value: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribP1ui(@ptrCast(self), @intCast(index), @intCast(typeVal), @intCast(normalized), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetQueryObjectui64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32, pname: u32, params: *u64 ```
    pub fn GlGetQueryObjectui64v(self: ?*anyopaque, id: u32, pname: u32, params: *u64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetQueryObjectui64v(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetQueryObjecti64v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32, pname: u32, params: *i64 ```
    pub fn GlGetQueryObjecti64v(self: ?*anyopaque, id: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetQueryObjecti64v(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glQueryCounter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32, target: u32 ```
    pub fn GlQueryCounter(self: ?*anyopaque, id: u32, target: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlQueryCounter(@ptrCast(self), @intCast(id), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetSamplerParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, params: *u32 ```
    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetSamplerParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, params: *f32 ```
    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetSamplerParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, params: *i32 ```
    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetSamplerParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, params: *i32 ```
    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSamplerParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, param: *const u32 ```
    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSamplerParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, param: *const i32 ```
    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSamplerParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, param: *const f32 ```
    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSamplerParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, param: f32 ```
    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSamplerParameterf(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSamplerParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, param: *const i32 ```
    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glSamplerParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32, pname: u32, param: i32 ```
    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlSamplerParameteri(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindSampler)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, unit: u32, sampler: u32 ```
    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindSampler(@ptrCast(self), @intCast(unit), @intCast(sampler));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsSampler)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, sampler: u32 ```
    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsSampler(@ptrCast(self), @intCast(sampler));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteSamplers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, count: i32, samplers: *const u32 ```
    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteSamplers(@ptrCast(self), @intCast(count), @ptrCast(samplers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenSamplers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, count: i32, samplers: *u32 ```
    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenSamplers(@ptrCast(self), @intCast(count), @ptrCast(samplers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetFragDataIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, name: *const i8 ```
    pub fn GlGetFragDataIndex(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetFragDataIndex(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindFragDataLocationIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, colorNumber: u32, index: u32, name: *const i8 ```
    pub fn GlBindFragDataLocationIndexed(self: ?*anyopaque, program: u32, colorNumber: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindFragDataLocationIndexed(@ptrCast(self), @intCast(program), @intCast(colorNumber), @intCast(index), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribDivisor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, divisor: u32 ```
    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribDivisor(@ptrCast(self), @intCast(index), @intCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetQueryIndexediv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryIndexediv(self: ?*anyopaque, target: u32, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetQueryIndexediv(@ptrCast(self), @intCast(target), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glEndQueryIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32 ```
    pub fn GlEndQueryIndexed(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlEndQueryIndexed(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBeginQueryIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, id: u32 ```
    pub fn GlBeginQueryIndexed(self: ?*anyopaque, target: u32, index: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBeginQueryIndexed(@ptrCast(self), @intCast(target), @intCast(index), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawTransformFeedbackStream)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, id: u32, stream: u32 ```
    pub fn GlDrawTransformFeedbackStream(self: ?*anyopaque, mode: u32, id: u32, stream: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawTransformFeedbackStream(@ptrCast(self), @intCast(mode), @intCast(id), @intCast(stream));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, id: u32 ```
    pub fn GlDrawTransformFeedback(self: ?*anyopaque, mode: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawTransformFeedback(@ptrCast(self), @intCast(mode), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glResumeTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlResumeTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlResumeTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPauseTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlPauseTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPauseTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, id: u32 ```
    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsTransformFeedback(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenTransformFeedbacks)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, ids: *u32 ```
    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenTransformFeedbacks(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteTransformFeedbacks)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, ids: *const u32 ```
    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteTransformFeedbacks(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, id: u32 ```
    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindTransformFeedback(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPatchParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, values: *const f32 ```
    pub fn GlPatchParameterfv(self: ?*anyopaque, pname: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPatchParameterfv(@ptrCast(self), @intCast(pname), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glPatchParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pname: u32, value: i32 ```
    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlPatchParameteri(@ptrCast(self), @intCast(pname), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetProgramStageiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shadertype: u32, pname: u32, values: *i32 ```
    pub fn GlGetProgramStageiv(self: ?*anyopaque, program: u32, shadertype: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetProgramStageiv(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(pname), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformSubroutineuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shadertype: u32, location: i32, params: *u32 ```
    pub fn GlGetUniformSubroutineuiv(self: ?*anyopaque, shadertype: u32, location: i32, params: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetUniformSubroutineuiv(@ptrCast(self), @intCast(shadertype), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformSubroutinesuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shadertype: u32, count: i32, indices: *const u32 ```
    pub fn GlUniformSubroutinesuiv(self: ?*anyopaque, shadertype: u32, count: i32, indices: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformSubroutinesuiv(@ptrCast(self), @intCast(shadertype), @intCast(count), @ptrCast(indices));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveSubroutineName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8 ```
    pub fn GlGetActiveSubroutineName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveSubroutineName(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(bufsize), @ptrCast(length), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveSubroutineUniformName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8 ```
    pub fn GlGetActiveSubroutineUniformName(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, bufsize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveSubroutineUniformName(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(bufsize), @ptrCast(length), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetActiveSubroutineUniformiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shadertype: u32, index: u32, pname: u32, values: *i32 ```
    pub fn GlGetActiveSubroutineUniformiv(self: ?*anyopaque, program: u32, shadertype: u32, index: u32, pname: u32, values: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetActiveSubroutineUniformiv(@ptrCast(self), @intCast(program), @intCast(shadertype), @intCast(index), @intCast(pname), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetSubroutineIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shadertype: u32, name: *const i8 ```
    pub fn GlGetSubroutineIndex(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) u32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetSubroutineIndex(@ptrCast(self), @intCast(program), @intCast(shadertype), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetSubroutineUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, shadertype: u32, name: *const i8 ```
    pub fn GlGetSubroutineUniformLocation(self: ?*anyopaque, program: u32, shadertype: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_4_1_Core_GlGetSubroutineUniformLocation(@ptrCast(self), @intCast(program), @intCast(shadertype), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetUniformdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, params: *f64 ```
    pub fn GlGetUniformdv(self: ?*anyopaque, program: u32, location: i32, params: *f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetUniformdv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix4x3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix4x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix4x3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix4x2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix4x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix4x2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix3x4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix3x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix3x4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix3x2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix3x2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix3x2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix2x4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix2x4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix2x4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix2x3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix2x3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix2x3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix4dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix4dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix3dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix3dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniformMatrix2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlUniformMatrix2dv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniformMatrix2dv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform4dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform3dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform2dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, count: i32, value: *const f64 ```
    pub fn GlUniform1dv(self: ?*anyopaque, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1dv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlUniform4d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform4d(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, x: f64, y: f64, z: f64 ```
    pub fn GlUniform3d(self: ?*anyopaque, location: i32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform3d(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, x: f64, y: f64 ```
    pub fn GlUniform2d(self: ?*anyopaque, location: i32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform2d(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUniform1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, location: i32, x: f64 ```
    pub fn GlUniform1d(self: ?*anyopaque, location: i32, x: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUniform1d(@ptrCast(self), @intCast(location), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawElementsIndirect)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, typeVal: u32, indirect: *void ```
    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawElementsIndirect(@ptrCast(self), @intCast(mode), @intCast(typeVal), indirect);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDrawArraysIndirect)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, mode: u32, indirect: *void ```
    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDrawArraysIndirect(@ptrCast(self), @intCast(mode), indirect);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendFuncSeparatei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32 ```
    pub fn GlBlendFuncSeparatei(self: ?*anyopaque, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendFuncSeparatei(@ptrCast(self), @intCast(buf), @intCast(srcRGB), @intCast(dstRGB), @intCast(srcAlpha), @intCast(dstAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendFunci)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buf: u32, src: u32, dst: u32 ```
    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendFunci(@ptrCast(self), @intCast(buf), @intCast(src), @intCast(dst));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendEquationSeparatei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buf: u32, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendEquationSeparatei(@ptrCast(self), @intCast(buf), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBlendEquationi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, buf: u32, mode: u32 ```
    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBlendEquationi(@ptrCast(self), @intCast(buf), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glMinSampleShading)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, value: f32 ```
    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlMinSampleShading(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetDoublei_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, data: *f64 ```
    pub fn GlGetDoubleiV(self: ?*anyopaque, target: u32, index: u32, data: *f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetDoubleiV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetFloati_v)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, target: u32, index: u32, data: *f32 ```
    pub fn GlGetFloatiV(self: ?*anyopaque, target: u32, index: u32, data: *f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetFloatiV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDepthRangeIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, n: f64, f: f64 ```
    pub fn GlDepthRangeIndexed(self: ?*anyopaque, index: u32, n: f64, f: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDepthRangeIndexed(@ptrCast(self), @intCast(index), @intCast(n), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDepthRangeArrayv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, first: u32, count: i32, v: *const f64 ```
    pub fn GlDepthRangeArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDepthRangeArrayv(@ptrCast(self), @intCast(first), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glScissorIndexedv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, v: *const i32 ```
    pub fn GlScissorIndexedv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlScissorIndexedv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glScissorIndexed)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, left: i32, bottom: i32, width: i32, height: i32 ```
    pub fn GlScissorIndexed(self: ?*anyopaque, index: u32, left: i32, bottom: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlScissorIndexed(@ptrCast(self), @intCast(index), @intCast(left), @intCast(bottom), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glScissorArrayv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, first: u32, count: i32, v: *const i32 ```
    pub fn GlScissorArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlScissorArrayv(@ptrCast(self), @intCast(first), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glViewportIndexedfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, v: *const f32 ```
    pub fn GlViewportIndexedfv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlViewportIndexedfv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glViewportIndexedf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, x: f32, y: f32, w: f32, h: f32 ```
    pub fn GlViewportIndexedf(self: ?*anyopaque, index: u32, x: f32, y: f32, w: f32, h: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlViewportIndexedf(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glViewportArrayv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, first: u32, count: i32, v: *const f32 ```
    pub fn GlViewportArrayv(self: ?*anyopaque, first: u32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlViewportArrayv(@ptrCast(self), @intCast(first), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetVertexAttribLdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, pname: u32, params: *f64 ```
    pub fn GlGetVertexAttribLdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetVertexAttribLdv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribLPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlVertexAttribLPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribLPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, v: *const f64 ```
    pub fn GlVertexAttribL4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL4dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, v: *const f64 ```
    pub fn GlVertexAttribL3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL3dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, v: *const f64 ```
    pub fn GlVertexAttribL2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL2dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, v: *const f64 ```
    pub fn GlVertexAttribL1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL1dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlVertexAttribL4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL4d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, x: f64, y: f64, z: f64 ```
    pub fn GlVertexAttribL3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL3d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, x: f64, y: f64 ```
    pub fn GlVertexAttribL2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL2d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glVertexAttribL1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, index: u32, x: f64 ```
    pub fn GlVertexAttribL1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlVertexAttribL1d(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetProgramPipelineInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetProgramPipelineInfoLog(self: ?*anyopaque, pipeline: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetProgramPipelineInfoLog(@ptrCast(self), @intCast(pipeline), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glValidateProgramPipeline)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32 ```
    pub fn GlValidateProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlValidateProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix4x3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix4x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix4x3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix3x4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix3x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix3x4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix4x2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix4x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix4x2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix2x4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix2x4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix2x4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix3x2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix3x2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix3x2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix2x3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix2x3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix2x3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix4x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix4x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix4x3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix3x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix3x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix3x4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix4x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix4x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix4x2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix2x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix2x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix2x4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix3x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix3x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix3x2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix2x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix2x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix2x3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f64 ```
    pub fn GlProgramUniformMatrix2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniformMatrix2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform4uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32 ```
    pub fn GlProgramUniform4ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f64 ```
    pub fn GlProgramUniform4dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64 ```
    pub fn GlProgramUniform4d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64, v3: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4d(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32 ```
    pub fn GlProgramUniform4f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform4iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32 ```
    pub fn GlProgramUniform4i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform4i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform3uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: u32, v1: u32, v2: u32 ```
    pub fn GlProgramUniform3ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f64 ```
    pub fn GlProgramUniform3dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f64, v1: f64, v2: f64 ```
    pub fn GlProgramUniform3d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3d(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f32, v1: f32, v2: f32 ```
    pub fn GlProgramUniform3f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform3iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: i32, v1: i32, v2: i32 ```
    pub fn GlProgramUniform3i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform3i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform2uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: u32, v1: u32 ```
    pub fn GlProgramUniform2ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f64 ```
    pub fn GlProgramUniform2dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f64, v1: f64 ```
    pub fn GlProgramUniform2d(self: ?*anyopaque, program: u32, location: i32, v0: f64, v1: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2d(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f32, v1: f32 ```
    pub fn GlProgramUniform2f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform2iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: i32, v1: i32 ```
    pub fn GlProgramUniform2i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform2i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform1uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: u32 ```
    pub fn GlProgramUniform1ui(self: ?*anyopaque, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f64 ```
    pub fn GlProgramUniform1dv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1dv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f64 ```
    pub fn GlProgramUniform1d(self: ?*anyopaque, program: u32, location: i32, v0: f64) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1d(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform1fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: f32 ```
    pub fn GlProgramUniform1f(self: ?*anyopaque, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform1iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramUniform1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, location: i32, v0: i32 ```
    pub fn GlProgramUniform1i(self: ?*anyopaque, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramUniform1i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetProgramPipelineiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramPipelineiv(self: ?*anyopaque, pipeline: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetProgramPipelineiv(@ptrCast(self), @intCast(pipeline), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glIsProgramPipeline)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32 ```
    pub fn GlIsProgramPipeline(self: ?*anyopaque, pipeline: u32) u8 {
        return qtc.QOpenGLFunctions_4_1_Core_GlIsProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGenProgramPipelines)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, pipelines: *u32 ```
    pub fn GlGenProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGenProgramPipelines(@ptrCast(self), @intCast(n), @ptrCast(pipelines));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDeleteProgramPipelines)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: i32, pipelines: *const u32 ```
    pub fn GlDeleteProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *const u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDeleteProgramPipelines(@ptrCast(self), @intCast(n), @ptrCast(pipelines));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glBindProgramPipeline)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32 ```
    pub fn GlBindProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlBindProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glActiveShaderProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32, program: u32 ```
    pub fn GlActiveShaderProgram(self: ?*anyopaque, pipeline: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlActiveShaderProgram(@ptrCast(self), @intCast(pipeline), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glUseProgramStages)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, pipeline: u32, stages: u32, program: u32 ```
    pub fn GlUseProgramStages(self: ?*anyopaque, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlUseProgramStages(@ptrCast(self), @intCast(pipeline), @intCast(stages), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, pname: u32, value: i32 ```
    pub fn GlProgramParameteri(self: ?*anyopaque, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramParameteri(@ptrCast(self), @intCast(program), @intCast(pname), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glProgramBinary)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, program: u32, binaryFormat: u32, binary: *void, length: i32 ```
    pub fn GlProgramBinary(self: ?*anyopaque, program: u32, binaryFormat: u32, binary: *const void, length: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlProgramBinary(@ptrCast(self), @intCast(program), @intCast(binaryFormat), binary, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glClearDepthf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, dd: f32 ```
    pub fn GlClearDepthf(self: ?*anyopaque, dd: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlClearDepthf(@ptrCast(self), @intCast(dd));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glDepthRangef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, n: f32, f: f32 ```
    pub fn GlDepthRangef(self: ?*anyopaque, n: f32, f: f32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlDepthRangef(@ptrCast(self), @intCast(n), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glGetShaderPrecisionFormat)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32 ```
    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlGetShaderPrecisionFormat(@ptrCast(self), @intCast(shadertype), @intCast(precisiontype), @ptrCast(range), @ptrCast(precision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glShaderBinary)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, count: i32, shaders: *const u32, binaryformat: u32, binary: *void, length: i32 ```
    pub fn GlShaderBinary(self: ?*anyopaque, count: i32, shaders: *const u32, binaryformat: u32, binary: *const void, length: i32) void {
        qtc.QOpenGLFunctions_4_1_Core_GlShaderBinary(@ptrCast(self), @intCast(count), @ptrCast(shaders), @intCast(binaryformat), binary, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#glReleaseShaderCompiler)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn GlReleaseShaderCompiler(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_GlReleaseShaderCompiler(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_1_Core_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_4_1_Core_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_4_1_Core_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, context: QtC.QOpenGLContext ```
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, context: QtC.QOpenGLContext ```
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, callback: *const fn (self: QtC.QOpenGLFunctions_4_1_Core, context: QtC.QOpenGLContext) callconv(.c) void ```
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_4_1_Core_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_1_Core_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_4_1_Core_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core, callback: *const fn () callconv(.c) QtC.QOpenGLContext ```
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_4_1_Core_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-1-core.html#dtor.QOpenGLFunctions_4_1_Core)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_Core ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_4_1_Core_Delete(@ptrCast(self));
    }
};
