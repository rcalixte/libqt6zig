const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qopenglfunctions-1-5.html
pub const qopenglfunctions_1_5 = struct {
    /// New constructs a new QOpenGLFunctions_1_5 object.
    ///
    ///
    pub fn New() QtC.QOpenGLFunctions_1_5 {
        return qtc.QOpenGLFunctions_1_5_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_5_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, callback: *const fn () callconv(.c) bool ```
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_5_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_5_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glViewport)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDepthRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, nearVal: f64, farVal: f64 ```
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_1_5_GlDepthRange(@ptrCast(self), @intCast(nearVal), @intCast(farVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsEnabled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, cap: u32 ```
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexLevelParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, pname: u32, params: *i32 ```
    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexLevelParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, pname: u32, params: *f32 ```
    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexImage(@ptrCast(self), @intCast(target), @intCast(level), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetString)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, name: u32 ```
    pub fn GlGetString(self: ?*anyopaque, name: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_1_5_GlGetString(@ptrCast(self), @intCast(name)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetIntegerv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *i32 ```
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetIntegerv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetFloatv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *f32 ```
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetFloatv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetDoublev)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *f64 ```
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetDoublev(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBooleanv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *u8 ```
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_1_5_GlGetBooleanv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glReadPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_1_5_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glReadBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelStorei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: i32 ```
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelStoref)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: f32 ```
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelStoref(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDepthFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, func: u32 ```
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glStencilOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_1_5_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glStencilFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLogicOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, opcode: u32 ```
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlLogicOp(@ptrCast(self), @intCast(opcode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, sfactor: u32, dfactor: u32 ```
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFlush)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlFlush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFinish)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlFinish(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEnable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, cap: u32 ```
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_5_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDisable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, cap: u32 ```
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDepthMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, flag: u8 ```
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_5_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_5_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glStencilMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: u32 ```
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearDepth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, depth: f64 ```
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_1_5_GlClearDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearStencil)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i32 ```
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_5_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlClearColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClear)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: u32 ```
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDrawBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, param: i32 ```
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, param: f32 ```
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glScissor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPolygonMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, mode: u32 ```
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPolygonMode(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointSize)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: f32 ```
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPointSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLineWidth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, width: f32 ```
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_1_5_GlLineWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glHint)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, mode: u32 ```
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFrontFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCullFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: *const u8 ```
    pub fn GlIndexubv(self: ?*anyopaque, c: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlIndexubv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: u8 ```
    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_1_5_GlIndexub(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, texture: u32 ```
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, textures: *u32 ```
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_1_5_GlGenTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, textures: *const u32 ```
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBindTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, texture: u32 ```
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32 ```
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32 ```
    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPolygonOffset)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, factor: f32, units: f32 ```
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPolygonOffset(@ptrCast(self), @intCast(factor), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32, first: i32, count: i32 ```
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_1_5_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawRangeElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlDrawRangeElements(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendEquation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetCompressedTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, img: *void ```
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetCompressedTexImage(@ptrCast(self), @intCast(target), @intCast(level), img);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCompressedTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCompressedTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSampleCoverage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, value: f32, invert: u8 ```
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_1_5_GlSampleCoverage(@ptrCast(self), @intCast(value), @intCast(invert));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, texture: u32 ```
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_1_5_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *const i32 ```
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameteriv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: i32 ```
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameteri(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *const f32 ```
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameterfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPointParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: f32 ```
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPointParameterf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32, first: *const i32, count: *const i32, drawcount: i32 ```
    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiDrawArrays(@ptrCast(self), @intCast(mode), @ptrCast(first), @ptrCast(count), @intCast(drawcount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBlendFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32 ```
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBlendFuncSeparate(@ptrCast(self), @intCast(sfactorRGB), @intCast(dfactorRGB), @intCast(sfactorAlpha), @intCast(dfactorAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glUnmapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32 ```
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlUnmapBuffer(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, access: u32 ```
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_1_5_GlMapBuffer(@ptrCast(self), @intCast(target), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBufferData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, size: i64, data: *void, usage: u32 ```
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: *const void, usage: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), data, @intCast(usage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, buffer: u32 ```
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, buffers: *u32 ```
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_1_5_GlGenBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, buffers: *const u32 ```
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBindBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, buffer: u32 ```
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetQueryObjectuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, id: u32, pname: u32, params: *u32 ```
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_1_5_GlGetQueryObjectuiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetQueryObjectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, id: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetQueryObjectiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetQueryiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetQueryiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEndQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32 ```
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_1_5_GlEndQuery(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBeginQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, id: u32 ```
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBeginQuery(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, id: u32 ```
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsQuery(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, ids: *const u32 ```
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, ids: *u32 ```
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_1_5_GlGenQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTranslatef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32 ```
    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTranslatef(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTranslated)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64 ```
    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTranslated(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glScalef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32 ```
    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlScalef(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glScaled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64 ```
    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlScaled(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRotatef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, angle: f32, x: f32, y: f32, z: f32 ```
    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRotatef(@ptrCast(self), @intCast(angle), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRotated)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, angle: f64, x: f64, y: f64, z: f64 ```
    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRotated(@ptrCast(self), @intCast(angle), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushMatrix)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlPushMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlPushMatrix(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopMatrix)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlPopMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlPopMatrix(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glOrtho)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64 ```
    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_5_GlOrtho(@ptrCast(self), @intCast(left), @intCast(right), @intCast(bottom), @intCast(top), @intCast(zNear), @intCast(zFar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f64 ```
    pub fn GlMultMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f32 ```
    pub fn GlMultMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMatrixMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlMatrixMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f64 ```
    pub fn GlLoadMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlLoadMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f32 ```
    pub fn GlLoadMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLoadMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadIdentity)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlLoadIdentity(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlLoadIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFrustum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64 ```
    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_1_5_GlFrustum(@ptrCast(self), @intCast(left), @intCast(right), @intCast(bottom), @intCast(top), @intCast(zNear), @intCast(zFar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIsList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, list: u32 ```
    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_1_5_GlIsList(@ptrCast(self), @intCast(list));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexGeniv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexGenfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexGendv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, params: *f64 ```
    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexEnviv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetTexEnvfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPolygonStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: *u8 ```
    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: *u8) void {
        qtc.QOpenGLFunctions_1_5_GlGetPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPixelMapusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mapVal: u32, values: *u16 ```
    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: *u16) void {
        qtc.QOpenGLFunctions_1_5_GlGetPixelMapusv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPixelMapuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mapVal: u32, values: *u32 ```
    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: *u32) void {
        qtc.QOpenGLFunctions_1_5_GlGetPixelMapuiv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetPixelMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mapVal: u32, values: *f32 ```
    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetPixelMapfv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMaterialiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, pname: u32, params: *i32 ```
    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMaterialfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, pname: u32, params: *f32 ```
    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMapiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, query: u32, v: *i32 ```
    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMapiv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, query: u32, v: *f32 ```
    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMapfv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMapdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, query: u32, v: *f64 ```
    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: *f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetMapdv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetLightiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, light: u32, pname: u32, params: *i32 ```
    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetLightiv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetLightfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, light: u32, pname: u32, params: *f32 ```
    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetLightfv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetClipPlane)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, plane: u32, equation: *f64 ```
    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: *f64) void {
        qtc.QOpenGLFunctions_1_5_GlGetClipPlane(@ptrCast(self), @intCast(plane), @ptrCast(equation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDrawPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlDrawPixels(@ptrCast(self), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, width: i32, height: i32, typeVal: u32 ```
    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelMapusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mapVal: u32, mapsize: i32, values: *const u16 ```
    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u16) void {
        qtc.QOpenGLFunctions_1_5_GlPixelMapusv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelMapuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mapVal: u32, mapsize: i32, values: *const u32 ```
    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelMapuiv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mapVal: u32, mapsize: i32, values: *const f32 ```
    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelMapfv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelTransferi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: i32 ```
    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelTransferi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelTransferf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: f32 ```
    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelTransferf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPixelZoom)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, xfactor: f32, yfactor: f32 ```
    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPixelZoom(@ptrCast(self), @intCast(xfactor), @intCast(yfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glAlphaFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, func: u32, ref: f32 ```
    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_1_5_GlAlphaFunc(@ptrCast(self), @intCast(func), @intCast(ref));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalPoint2)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, i: i32, j: i32 ```
    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalPoint2(@ptrCast(self), @intCast(i), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalMesh2)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32 ```
    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalMesh2(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val), @intCast(j1), @intCast(j2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalPoint1)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, i: i32 ```
    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalPoint1(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalMesh1)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32, i1Val: i32, i2Val: i32 ```
    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalMesh1(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: *const f32 ```
    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2fv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: f32, v: f32 ```
    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2f(@ptrCast(self), @intCast(u), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: *const f64 ```
    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2dv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: f64, v: f64 ```
    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord2d(@ptrCast(self), @intCast(u), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: *const f32 ```
    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1fv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: f32 ```
    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1f(@ptrCast(self), @intCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: *const f64 ```
    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1dv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEvalCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, u: f64 ```
    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_1_5_GlEvalCoord1d(@ptrCast(self), @intCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32 ```
    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid2f(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val), @intCast(vn), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64 ```
    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid2d(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val), @intCast(vn), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, un: i32, u1Val: f32, u2Val: f32 ```
    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid1f(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMapGrid1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, un: i32, u1Val: f64, u2Val: f64 ```
    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMapGrid1d(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32 ```
    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMap2f(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(ustride), @intCast(uorder), @intCast(v1), @intCast(v2), @intCast(vstride), @intCast(vorder), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64 ```
    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMap2d(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(ustride), @intCast(uorder), @intCast(v1), @intCast(v2), @intCast(vstride), @intCast(vorder), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32 ```
    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMap1f(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(stride), @intCast(order), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMap1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64 ```
    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMap1d(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(stride), @intCast(order), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: u32 ```
    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPushAttrib(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlPopAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlPopAttrib(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glAccum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, op: u32, value: f32 ```
    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_1_5_GlAccum(@ptrCast(self), @intCast(op), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: u32 ```
    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: f32 ```
    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_5_GlClearIndex(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClearAccum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlClearAccum(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, name: u32 ```
    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPushName(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlPopName(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlPopName(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPassThrough)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, token: f32 ```
    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_1_5_GlPassThrough(@ptrCast(self), @intCast(token));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, name: u32 ```
    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_1_5_GlLoadName(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glInitNames)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlInitNames(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlInitNames(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRenderMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_1_5_GlRenderMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSelectBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: i32, buffer: *u32 ```
    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: *u32) void {
        qtc.QOpenGLFunctions_1_5_GlSelectBuffer(@ptrCast(self), @intCast(size), @ptrCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFeedbackBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: i32, typeVal: u32, buffer: *f32 ```
    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlFeedbackBuffer(@ptrCast(self), @intCast(size), @intCast(typeVal), @ptrCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGeniv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, params: *const i32 ```
    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGeni)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, param: i32 ```
    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGeni(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGenfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, params: *const f32 ```
    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGenf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, param: f32 ```
    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexGenf(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGendv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, params: *const f64 ```
    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexGend)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: u32, pname: u32, param: f64 ```
    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexGend(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnviv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnvi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, param: i32 ```
    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnvi(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnvfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexEnvf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, param: f32 ```
    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexEnvf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glShadeModel)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlShadeModel(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPolygonStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: *const u8 ```
    pub fn GlPolygonStipple(self: ?*anyopaque, mask: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMaterialiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, pname: u32, params: *const i32 ```
    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMateriali)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, pname: u32, param: i32 ```
    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMateriali(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMaterialfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, pname: u32, params: *const f32 ```
    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMaterialf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, pname: u32, param: f32 ```
    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMaterialf(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLineStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, factor: i32, pattern: u16 ```
    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_1_5_GlLineStipple(@ptrCast(self), @intCast(factor), @intCast(pattern));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModeliv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *const i32 ```
    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModeliv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModeli)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: i32 ```
    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModeli(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModelfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *const f32 ```
    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModelfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightModelf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: f32 ```
    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightModelf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, light: u32, pname: u32, params: *const i32 ```
    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlLightiv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLighti)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, light: u32, pname: u32, param: i32 ```
    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlLighti(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, light: u32, pname: u32, params: *const f32 ```
    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightfv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLightf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, light: u32, pname: u32, param: f32 ```
    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlLightf(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *const i32 ```
    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlFogiv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: i32 ```
    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_1_5_GlFogi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, params: *const f32 ```
    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, pname: u32, param: f32 ```
    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorMaterial)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, face: u32, mode: u32 ```
    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlColorMaterial(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClipPlane)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, plane: u32, equation: *const f64 ```
    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlClipPlane(@ptrCast(self), @intCast(plane), @ptrCast(equation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlVertex4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlVertex4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlVertex4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlVertex4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex4d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlVertex3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16, z: i16 ```
    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlVertex3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, z: i32 ```
    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlVertex3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32 ```
    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlVertex3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64 ```
    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlVertex2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16 ```
    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlVertex2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32 ```
    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlVertex2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32 ```
    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlVertex2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertex2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64 ```
    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_5_GlVertex2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlTexCoord4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i16, t: i16, r: i16, q: i16 ```
    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlTexCoord4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i32, t: i32, r: i32, q: i32 ```
    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlTexCoord4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f32, t: f32, r: f32, q: f32 ```
    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4f(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlTexCoord4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f64, t: f64, r: f64, q: f64 ```
    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord4d(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlTexCoord3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i16, t: i16, r: i16 ```
    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlTexCoord3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i32, t: i32, r: i32 ```
    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlTexCoord3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f32, t: f32, r: f32 ```
    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3f(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlTexCoord3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f64, t: f64, r: f64 ```
    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord3d(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlTexCoord2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i16, t: i16 ```
    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2s(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlTexCoord2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i32, t: i32 ```
    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2i(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlTexCoord2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f32, t: f32 ```
    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2f(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlTexCoord2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f64, t: f64 ```
    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord2d(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlTexCoord1sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i16 ```
    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1s(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlTexCoord1iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: i32 ```
    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1i(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlTexCoord1fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f32 ```
    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1f(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlTexCoord1dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, s: f64 ```
    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoord1d(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v1: *const i16, v2: *const i16 ```
    pub fn GlRectsv(self: ?*anyopaque, v1: *const i16, v2: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRectsv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRects)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x1: i16, y1: i16, x2: i16, y2: i16 ```
    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRects(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v1: *const i32, v2: *const i32 ```
    pub fn GlRectiv(self: ?*anyopaque, v1: *const i32, v2: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRectiv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRecti)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRecti(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v1: *const f32, v2: *const f32 ```
    pub fn GlRectfv(self: ?*anyopaque, v1: *const f32, v2: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRectfv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x1: f32, y1: f32, x2: f32, y2: f32 ```
    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRectf(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v1: *const f64, v2: *const f64 ```
    pub fn GlRectdv(self: ?*anyopaque, v1: *const f64, v2: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRectdv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRectd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRectd(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlRasterPos4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlRasterPos4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlRasterPos4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlRasterPos4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos4d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlRasterPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16, z: i16 ```
    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlRasterPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, z: i32 ```
    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlRasterPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32 ```
    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlRasterPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64 ```
    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlRasterPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16 ```
    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlRasterPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32 ```
    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlRasterPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32 ```
    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlRasterPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glRasterPos2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64 ```
    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_5_GlRasterPos2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlNormal3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, nx: i16, ny: i16, nz: i16 ```
    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3s(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlNormal3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, nx: i32, ny: i32, nz: i32 ```
    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3i(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlNormal3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, nx: f32, ny: f32, nz: f32 ```
    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3f(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlNormal3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, nx: f64, ny: f64, nz: f64 ```
    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3d(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i8 ```
    pub fn GlNormal3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormal3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, nx: i8, ny: i8, nz: i8 ```
    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_1_5_GlNormal3b(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: *const i16 ```
    pub fn GlIndexsv(self: ?*anyopaque, c: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlIndexsv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexs)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: i16 ```
    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_1_5_GlIndexs(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: *const i32 ```
    pub fn GlIndexiv(self: ?*anyopaque, c: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexiv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: i32 ```
    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexi(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: *const f32 ```
    pub fn GlIndexfv(self: ?*anyopaque, c: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexfv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: f32 ```
    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_1_5_GlIndexf(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: *const f64 ```
    pub fn GlIndexdv(self: ?*anyopaque, c: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlIndexdv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, c: f64 ```
    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_1_5_GlIndexd(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEnd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlEnd(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEdgeFlagv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, flag: *const u8 ```
    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlEdgeFlagv(@ptrCast(self), @ptrCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEdgeFlag)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, flag: u8 ```
    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_1_5_GlEdgeFlag(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u16 ```
    pub fn GlColor4usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u16, green: u16, blue: u16, alpha: u16 ```
    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u32 ```
    pub fn GlColor4uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u32, green: u32, blue: u32, alpha: u32 ```
    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u8 ```
    pub fn GlColor4ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlColor4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i16, green: i16, blue: i16, alpha: i16 ```
    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor4s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlColor4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i32, green: i32, blue: i32, alpha: i32 ```
    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlColor4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor4f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlColor4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f64, green: f64, blue: f64, alpha: f64 ```
    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor4d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i8 ```
    pub fn GlColor4bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor4b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i8, green: i8, blue: i8, alpha: i8 ```
    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor4b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u16 ```
    pub fn GlColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u16, green: u16, blue: u16 ```
    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u32 ```
    pub fn GlColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u32, green: u32, blue: u32 ```
    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u8 ```
    pub fn GlColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8 ```
    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i16, green: i16, blue: i16 ```
    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_5_GlColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i32, green: i32, blue: i32 ```
    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32 ```
    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_5_GlColor3f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f64, green: f64, blue: f64 ```
    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_5_GlColor3d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i8 ```
    pub fn GlColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColor3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i8, green: i8, blue: i8 ```
    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_5_GlColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBitmap)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8 ```
    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlBitmap(@ptrCast(self), @intCast(width), @intCast(height), @intCast(xorig), @intCast(yorig), @intCast(xmove), @intCast(ymove), @ptrCast(bitmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glBegin)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mode: u32 ```
    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlBegin(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glListBase)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, base: u32 ```
    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_1_5_GlListBase(@ptrCast(self), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGenLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, range: i32 ```
    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_1_5_GlGenLists(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDeleteLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, list: u32, range: i32 ```
    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_1_5_GlDeleteLists(@ptrCast(self), @intCast(list), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCallLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, typeVal: u32, lists: *void ```
    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlCallLists(@ptrCast(self), @intCast(n), @intCast(typeVal), lists);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCallList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, list: u32 ```
    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_1_5_GlCallList(@ptrCast(self), @intCast(list));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEndList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlEndList(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlEndList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNewList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, list: u32, mode: u32 ```
    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_1_5_GlNewList(@ptrCast(self), @intCast(list), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPushClientAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, mask: u32 ```
    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_1_5_GlPushClientAttrib(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPopClientAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn GlPopClientAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_GlPopClientAttrib(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glPrioritizeTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, textures: *const u32, priorities: *const f32 ```
    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: *const u32, priorities: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlPrioritizeTextures(@ptrCast(self), @intCast(n), @ptrCast(textures), @ptrCast(priorities));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glAreTexturesResident)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, n: i32, textures: *const u32, residences: *u8 ```
    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: *const u32, residences: *u8) u8 {
        return qtc.QOpenGLFunctions_1_5_GlAreTexturesResident(@ptrCast(self), @intCast(n), @ptrCast(textures), @ptrCast(residences));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glVertexPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlVertexPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glTexCoordPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlTexCoordPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glNormalPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlNormalPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glInterleavedArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, format: u32, stride: i32, pointer: *void ```
    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlInterleavedArrays(@ptrCast(self), @intCast(format), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glIndexPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlIndexPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEnableClientState)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, array: u32 ```
    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_1_5_GlEnableClientState(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glEdgeFlagPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, stride: i32, pointer: *void ```
    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlEdgeFlagPointer(@ptrCast(self), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glDisableClientState)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, array: u32 ```
    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_1_5_GlDisableClientState(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlColorPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glArrayElement)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, i: i32 ```
    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_1_5_GlArrayElement(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glResetMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32 ```
    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_1_5_GlResetMinmax(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glResetHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32 ```
    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_1_5_GlResetHistogram(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, sink: u8 ```
    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_5_GlMinmax(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, width: i32, internalformat: u32, sink: u8 ```
    pub fn GlHistogram(self: ?*anyopaque, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_1_5_GlHistogram(@ptrCast(self), @intCast(target), @intCast(width), @intCast(internalformat), @intCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMinmaxParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMinmaxParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMinmaxParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetMinmaxParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, reset: u8, format: u32, typeVal: u32, values: *void ```
    pub fn GlGetMinmax(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetMinmax(@ptrCast(self), @intCast(target), @intCast(reset), @intCast(format), @intCast(typeVal), values);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetHistogramParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetHistogramParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetHistogramParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetHistogramParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, reset: u8, format: u32, typeVal: u32, values: *void ```
    pub fn GlGetHistogram(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetHistogram(@ptrCast(self), @intCast(target), @intCast(reset), @intCast(format), @intCast(typeVal), values);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSeparableFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: *void, column: *void ```
    pub fn GlSeparableFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: *const void, column: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlSeparableFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), row, column);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetSeparableFilter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, format: u32, typeVal: u32, row: *void, column: *void, span: *void ```
    pub fn GlGetSeparableFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, row: *void, column: *void, span: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetSeparableFilter(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), row, column, span);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetConvolutionParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetConvolutionParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetConvolutionParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetConvolutionParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetConvolutionFilter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, format: u32, typeVal: u32, image: *void ```
    pub fn GlGetConvolutionFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, image: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetConvolutionFilter(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyConvolutionFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyConvolutionFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyConvolutionFilter1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyConvolutionFilter1D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const i32 ```
    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: i32 ```
    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const f32 ```
    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: f32 ```
    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: *void ```
    pub fn GlConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glConvolutionFilter1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: *void ```
    pub fn GlConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlConvolutionFilter1D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyColorSubTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, start: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyColorSubTable(self: ?*anyopaque, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyColorSubTable(@ptrCast(self), @intCast(target), @intCast(start), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorSubTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: *void ```
    pub fn GlColorSubTable(self: ?*anyopaque, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlColorSubTable(@ptrCast(self), @intCast(target), @intCast(start), @intCast(count), @intCast(format), @intCast(typeVal), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetColorTableParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_1_5_GlGetColorTableParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetColorTableParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_1_5_GlGetColorTableParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glGetColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, format: u32, typeVal: u32, table: *void ```
    pub fn GlGetColorTable(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, table: *void) void {
        qtc.QOpenGLFunctions_1_5_GlGetColorTable(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), table);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glCopyColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyColorTable(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_1_5_GlCopyColorTable(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorTableParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const i32 ```
    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlColorTableParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorTableParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, pname: u32, params: *const f32 ```
    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlColorTableParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: *void ```
    pub fn GlColorTable(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlColorTable(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(format), @intCast(typeVal), table);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultTransposeMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f64 ```
    pub fn GlMultTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultTransposeMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f32 ```
    pub fn GlMultTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadTransposeMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f64 ```
    pub fn GlLoadTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlLoadTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glLoadTransposeMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, m: *const f32 ```
    pub fn GlLoadTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlLoadTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord4sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i16, t: i16, r: i16, q: i16 ```
    pub fn GlMultiTexCoord4s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord4iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i32, t: i32, r: i32, q: i32 ```
    pub fn GlMultiTexCoord4i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord4fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f32, t: f32, r: f32, q: f32 ```
    pub fn GlMultiTexCoord4f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord4dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f64, t: f64, r: f64, q: f64 ```
    pub fn GlMultiTexCoord4d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord4d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord3sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i16, t: i16, r: i16 ```
    pub fn GlMultiTexCoord3s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord3iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i32, t: i32, r: i32 ```
    pub fn GlMultiTexCoord3i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord3fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f32, t: f32, r: f32 ```
    pub fn GlMultiTexCoord3f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord3dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f64, t: f64, r: f64 ```
    pub fn GlMultiTexCoord3d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord3d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord2sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i16, t: i16 ```
    pub fn GlMultiTexCoord2s(self: ?*anyopaque, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord2iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i32, t: i32 ```
    pub fn GlMultiTexCoord2i(self: ?*anyopaque, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord2fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f32, t: f32 ```
    pub fn GlMultiTexCoord2f(self: ?*anyopaque, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord2dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f64, t: f64 ```
    pub fn GlMultiTexCoord2d(self: ?*anyopaque, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord2d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord1sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i16 ```
    pub fn GlMultiTexCoord1s(self: ?*anyopaque, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1s(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord1iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: i32 ```
    pub fn GlMultiTexCoord1i(self: ?*anyopaque, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1i(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord1fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f32 ```
    pub fn GlMultiTexCoord1f(self: ?*anyopaque, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1f(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord1dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glMultiTexCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, target: u32, s: f64 ```
    pub fn GlMultiTexCoord1d(self: ?*anyopaque, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_1_5_GlMultiTexCoord1d(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glClientActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, texture: u32 ```
    pub fn GlClientActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_1_5_GlClientActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlWindowPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16, z: i16 ```
    pub fn GlWindowPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlWindowPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32, z: i32 ```
    pub fn GlWindowPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlWindowPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32, z: f32 ```
    pub fn GlWindowPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlWindowPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64, z: f64 ```
    pub fn GlWindowPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlWindowPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i16, y: i16 ```
    pub fn GlWindowPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlWindowPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: i32, y: i32 ```
    pub fn GlWindowPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlWindowPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f32, y: f32 ```
    pub fn GlWindowPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlWindowPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glWindowPos2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, x: f64, y: f64 ```
    pub fn GlWindowPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_1_5_GlWindowPos2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColorPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlSecondaryColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColorPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u16 ```
    pub fn GlSecondaryColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u16, green: u16, blue: u16 ```
    pub fn GlSecondaryColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u32 ```
    pub fn GlSecondaryColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u32, green: u32, blue: u32 ```
    pub fn GlSecondaryColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const u8 ```
    pub fn GlSecondaryColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: u8, green: u8, blue: u8 ```
    pub fn GlSecondaryColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i16 ```
    pub fn GlSecondaryColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i16, green: i16, blue: i16 ```
    pub fn GlSecondaryColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i32 ```
    pub fn GlSecondaryColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i32, green: i32, blue: i32 ```
    pub fn GlSecondaryColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f32 ```
    pub fn GlSecondaryColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f32, green: f32, blue: f32 ```
    pub fn GlSecondaryColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const f64 ```
    pub fn GlSecondaryColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: f64, green: f64, blue: f64 ```
    pub fn GlSecondaryColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, v: *const i8 ```
    pub fn GlSecondaryColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glSecondaryColor3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, red: i8, green: i8, blue: i8 ```
    pub fn GlSecondaryColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_1_5_GlSecondaryColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlFogCoordPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoorddv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: *const f64 ```
    pub fn GlFogCoorddv(self: ?*anyopaque, coord: *const f64) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoorddv(@ptrCast(self), @ptrCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: f64 ```
    pub fn GlFogCoordd(self: ?*anyopaque, coord: f64) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordd(@ptrCast(self), @intCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: *const f32 ```
    pub fn GlFogCoordfv(self: ?*anyopaque, coord: *const f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordfv(@ptrCast(self), @ptrCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#glFogCoordf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, coord: f32 ```
    pub fn GlFogCoordf(self: ?*anyopaque, coord: f32) void {
        qtc.QOpenGLFunctions_1_5_GlFogCoordf(@ptrCast(self), @intCast(coord));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_5_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_1_5_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_1_5_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, context: QtC.QOpenGLContext ```
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, context: QtC.QOpenGLContext ```
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, callback: *const fn (self: QtC.QOpenGLFunctions_1_5, context: QtC.QOpenGLContext) callconv(.c) void ```
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_1_5_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_1_5_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_1_5_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5, callback: *const fn () callconv(.c) QtC.QOpenGLContext ```
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_1_5_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-5.html#dtor.QOpenGLFunctions_1_5)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_1_5_Delete(@ptrCast(self));
    }
};
