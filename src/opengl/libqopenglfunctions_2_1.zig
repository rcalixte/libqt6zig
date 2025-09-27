const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qopenglfunctions-2-1.html
pub const qopenglfunctions_2_1 = struct {
    /// New constructs a new QOpenGLFunctions_2_1 object.
    ///
    ///
    pub fn New() QtC.QOpenGLFunctions_2_1 {
        return qtc.QOpenGLFunctions_2_1_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_2_1_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#initializeOpenGLFunctions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, callback: *const fn () callconv(.c) bool ```
    pub fn OnInitializeOpenGLFunctions(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_2_1_OnInitializeOpenGLFunctions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#initializeOpenGLFunctions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn QBaseInitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_2_1_QBaseInitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glViewport)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDepthRange)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, nearVal: f64, farVal: f64 ```
    pub fn GlDepthRange(self: ?*anyopaque, nearVal: f64, farVal: f64) void {
        qtc.QOpenGLFunctions_2_1_GlDepthRange(@ptrCast(self), @intCast(nearVal), @intCast(farVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsEnabled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, cap: u32 ```
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexLevelParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, pname: u32, params: *i32 ```
    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexLevelParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, pname: u32, params: *f32 ```
    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlGetTexImage(self: ?*anyopaque, target: u32, level: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexImage(@ptrCast(self), @intCast(target), @intCast(level), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetString)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, name: u32 ```
    pub fn GlGetString(self: ?*anyopaque, name: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_2_1_GlGetString(@ptrCast(self), @intCast(name)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetIntegerv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *i32 ```
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetIntegerv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetFloatv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *f32 ```
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetFloatv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetDoublev)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *f64 ```
    pub fn GlGetDoublev(self: ?*anyopaque, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetDoublev(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetBooleanv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *u8 ```
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_2_1_GlGetBooleanv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glReadPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_2_1_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glReadBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelStorei)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: i32 ```
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelStoref)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: f32 ```
    pub fn GlPixelStoref(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelStoref(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDepthFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, func: u32 ```
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glStencilOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glStencilFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLogicOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, opcode: u32 ```
    pub fn GlLogicOp(self: ?*anyopaque, opcode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlLogicOp(@ptrCast(self), @intCast(opcode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBlendFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, sfactor: u32, dfactor: u32 ```
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFlush)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlFlush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFinish)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlFinish(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEnable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, cap: u32 ```
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDisable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, cap: u32 ```
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDepthMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, flag: u8 ```
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_2_1_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_2_1_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glStencilMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: u32 ```
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClearDepth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, depth: f64 ```
    pub fn GlClearDepth(self: ?*anyopaque, depth: f64) void {
        qtc.QOpenGLFunctions_2_1_GlClearDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClearStencil)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i32 ```
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_2_1_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClearColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlClearColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClear)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: u32 ```
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDrawBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlDrawBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDrawBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, param: i32 ```
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, param: f32 ```
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glScissor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPolygonMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, mode: u32 ```
    pub fn GlPolygonMode(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPolygonMode(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPointSize)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: f32 ```
    pub fn GlPointSize(self: ?*anyopaque, size: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPointSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLineWidth)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, width: f32 ```
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_2_1_GlLineWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glHint)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, mode: u32 ```
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFrontFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCullFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: *const u8 ```
    pub fn GlIndexubv(self: ?*anyopaque, c: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlIndexubv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: u8 ```
    pub fn GlIndexub(self: ?*anyopaque, c: u8) void {
        qtc.QOpenGLFunctions_2_1_GlIndexub(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, texture: u32 ```
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGenTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, textures: *u32 ```
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGenTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDeleteTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, textures: *const u32 ```
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBindTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, texture: u32 ```
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32 ```
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32 ```
    pub fn GlCopyTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, border: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPolygonOffset)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, factor: f32, units: f32 ```
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPolygonOffset(@ptrCast(self), @intCast(factor), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDrawElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32, first: i32, count: i32 ```
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_2_1_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDrawRangeElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlDrawRangeElements(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBlendEquation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBlendColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendColor(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetCompressedTexImage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, img: *void ```
    pub fn GlGetCompressedTexImage(self: ?*anyopaque, target: u32, level: i32, img: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetCompressedTexImage(@ptrCast(self), @intCast(target), @intCast(level), img);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompressedTexSubImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage1D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, width: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexSubImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(width), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompressedTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompressedTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompressedTexImage1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage1D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexImage1D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompressedTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompressedTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *void ```
    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCompressedTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSampleCoverage)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, value: f32, invert: u8 ```
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_2_1_GlSampleCoverage(@ptrCast(self), @intCast(value), @intCast(invert));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, texture: u32 ```
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_2_1_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPointParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *const i32 ```
    pub fn GlPointParameteriv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameteriv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPointParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: i32 ```
    pub fn GlPointParameteri(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameteri(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPointParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *const f32 ```
    pub fn GlPointParameterfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameterfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPointParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: f32 ```
    pub fn GlPointParameterf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPointParameterf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32, first: *const i32, count: *const i32, drawcount: i32 ```
    pub fn GlMultiDrawArrays(self: ?*anyopaque, mode: u32, first: *const i32, count: *const i32, drawcount: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiDrawArrays(@ptrCast(self), @intCast(mode), @ptrCast(first), @ptrCast(count), @intCast(drawcount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBlendFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32 ```
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, sfactorRGB: u32, dfactorRGB: u32, sfactorAlpha: u32, dfactorAlpha: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendFuncSeparate(@ptrCast(self), @intCast(sfactorRGB), @intCast(dfactorRGB), @intCast(sfactorAlpha), @intCast(dfactorAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetBufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUnmapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32 ```
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlUnmapBuffer(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMapBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, access: u32 ```
    pub fn GlMapBuffer(self: ?*anyopaque, target: u32, access: u32) ?*anyopaque {
        return qtc.QOpenGLFunctions_2_1_GlMapBuffer(@ptrCast(self), @intCast(target), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlGetBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, offset: i64, size: i64, data: *void ```
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBufferData)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, size: i64, data: *void, usage: u32 ```
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: *const void, usage: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), data, @intCast(usage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, buffer: u32 ```
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGenBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, buffers: *u32 ```
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGenBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDeleteBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, buffers: *const u32 ```
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBindBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, buffer: u32 ```
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetQueryObjectuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, id: u32, pname: u32, params: *u32 ```
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGetQueryObjectuiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetQueryObjectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, id: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryObjectiv(self: ?*anyopaque, id: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetQueryObjectiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetQueryiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetQueryiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEndQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32 ```
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEndQuery(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBeginQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, id: u32 ```
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBeginQuery(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsQuery)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, id: u32 ```
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsQuery(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDeleteQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, ids: *const u32 ```
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGenQueries)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, ids: *u32 ```
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGenQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttribPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: *void ```
    pub fn GlVertexAttribPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttribPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glValidateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32 ```
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlValidateProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const i32 ```
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, value: *const f32 ```
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: i32, v1: i32, v2: i32, v3: i32 ```
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: i32, v1: i32, v2: i32 ```
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: i32, v1: i32 ```
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2i(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: i32 ```
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, v0: i32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1i(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: f32, v1: f32, v2: f32, v3: f32 ```
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform4f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: f32, v1: f32, v2: f32 ```
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform3f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: f32, v1: f32 ```
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform2f(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniform1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, v0: f32 ```
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, v0: f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniform1f(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUseProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32 ```
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlUseProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLinkProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32 ```
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlLinkProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, shader: u32 ```
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32 ```
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetVertexAttribiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetVertexAttribfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, pname: u32, params: *f32 ```
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribfv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetVertexAttribdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, pname: u32, params: *f64 ```
    pub fn GlGetVertexAttribdv(self: ?*anyopaque, index: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetVertexAttribdv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetUniformiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, location: i32, params: *i32 ```
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetUniformiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetUniformfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, location: i32, params: *f32 ```
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetUniformfv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, name: *const i8 ```
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_2_1_GlGetUniformLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetShaderSource)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, shader: u32, bufSize: i32, length: *i32, source: *i8 ```
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, source: *i8) void {
        qtc.QOpenGLFunctions_2_1_GlGetShaderSource(@ptrCast(self), @intCast(shader), @intCast(bufSize), @ptrCast(length), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetShaderInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, shader: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_2_1_GlGetShaderInfoLog(@ptrCast(self), @intCast(shader), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetShaderiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, shader: u32, pname: u32, params: *i32 ```
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetShaderiv(@ptrCast(self), @intCast(shader), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetProgramInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLFunctions_2_1_GlGetProgramInfoLog(@ptrCast(self), @intCast(program), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetProgramiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetProgramiv(@ptrCast(self), @intCast(program), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, name: *const i8 ```
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLFunctions_2_1_GlGetAttribLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetAttachedShaders)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, maxCount: i32, count: *i32, obj: *u32 ```
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxCount: i32, count: *i32, obj: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGetAttachedShaders(@ptrCast(self), @intCast(program), @intCast(maxCount), @ptrCast(count), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEnableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32 ```
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEnableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDisableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32 ```
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDisableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDetachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, shader: u32 ```
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDetachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDeleteShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, shader: u32 ```
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDeleteProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32 ```
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCreateShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, typeVal: u32 ```
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_2_1_GlCreateShader(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCreateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_2_1_GlCreateProgram(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCompileShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, shader: u32 ```
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCompileShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBindAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, index: u32, name: *const i8 ```
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlBindAttribLocation(@ptrCast(self), @intCast(program), @intCast(index), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glAttachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, program: u32, shader: u32 ```
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_2_1_GlAttachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glStencilMaskSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, mask: u32 ```
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilMaskSeparate(@ptrCast(self), @intCast(face), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glStencilFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilFuncSeparate(@ptrCast(self), @intCast(face), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glStencilOpSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, sfail: u32, dpfail: u32, dppass: u32 ```
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, sfail: u32, dpfail: u32, dppass: u32) void {
        qtc.QOpenGLFunctions_2_1_GlStencilOpSeparate(@ptrCast(self), @intCast(face), @intCast(sfail), @intCast(dpfail), @intCast(dppass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBlendEquationSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBlendEquationSeparate(@ptrCast(self), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix4x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix4x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix3x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix3x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix4x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix4x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix2x4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix2x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix3x2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix3x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glUniformMatrix2x3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlUniformMatrix2x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTranslatef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32 ```
    pub fn GlTranslatef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTranslatef(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTranslated)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64 ```
    pub fn GlTranslated(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTranslated(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glScalef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32 ```
    pub fn GlScalef(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlScalef(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glScaled)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64 ```
    pub fn GlScaled(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlScaled(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRotatef)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, angle: f32, x: f32, y: f32, z: f32 ```
    pub fn GlRotatef(self: ?*anyopaque, angle: f32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRotatef(@ptrCast(self), @intCast(angle), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRotated)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, angle: f64, x: f64, y: f64, z: f64 ```
    pub fn GlRotated(self: ?*anyopaque, angle: f64, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRotated(@ptrCast(self), @intCast(angle), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPushMatrix)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlPushMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlPushMatrix(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPopMatrix)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlPopMatrix(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlPopMatrix(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glOrtho)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64 ```
    pub fn GlOrtho(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_2_1_GlOrtho(@ptrCast(self), @intCast(left), @intCast(right), @intCast(bottom), @intCast(top), @intCast(zNear), @intCast(zFar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f64 ```
    pub fn GlMultMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f32 ```
    pub fn GlMultMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMatrixMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlMatrixMode(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlMatrixMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLoadMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f64 ```
    pub fn GlLoadMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlLoadMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLoadMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f32 ```
    pub fn GlLoadMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLoadMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLoadIdentity)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlLoadIdentity(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlLoadIdentity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFrustum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64 ```
    pub fn GlFrustum(self: ?*anyopaque, left: f64, right: f64, bottom: f64, top: f64, zNear: f64, zFar: f64) void {
        qtc.QOpenGLFunctions_2_1_GlFrustum(@ptrCast(self), @intCast(left), @intCast(right), @intCast(bottom), @intCast(top), @intCast(zNear), @intCast(zFar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIsList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, list: u32 ```
    pub fn GlIsList(self: ?*anyopaque, list: u32) u8 {
        return qtc.QOpenGLFunctions_2_1_GlIsList(@ptrCast(self), @intCast(list));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexGeniv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexGenfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexGendv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, params: *f64 ```
    pub fn GlGetTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexEnviv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetTexEnvfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetPolygonStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: *u8 ```
    pub fn GlGetPolygonStipple(self: ?*anyopaque, mask: *u8) void {
        qtc.QOpenGLFunctions_2_1_GlGetPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetPixelMapusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mapVal: u32, values: *u16 ```
    pub fn GlGetPixelMapusv(self: ?*anyopaque, mapVal: u32, values: *u16) void {
        qtc.QOpenGLFunctions_2_1_GlGetPixelMapusv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetPixelMapuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mapVal: u32, values: *u32 ```
    pub fn GlGetPixelMapuiv(self: ?*anyopaque, mapVal: u32, values: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlGetPixelMapuiv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetPixelMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mapVal: u32, values: *f32 ```
    pub fn GlGetPixelMapfv(self: ?*anyopaque, mapVal: u32, values: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetPixelMapfv(@ptrCast(self), @intCast(mapVal), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMaterialiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, pname: u32, params: *i32 ```
    pub fn GlGetMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMaterialfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, pname: u32, params: *f32 ```
    pub fn GlGetMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMapiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, query: u32, v: *i32 ```
    pub fn GlGetMapiv(self: ?*anyopaque, target: u32, query: u32, v: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMapiv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, query: u32, v: *f32 ```
    pub fn GlGetMapfv(self: ?*anyopaque, target: u32, query: u32, v: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMapfv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMapdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, query: u32, v: *f64 ```
    pub fn GlGetMapdv(self: ?*anyopaque, target: u32, query: u32, v: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetMapdv(@ptrCast(self), @intCast(target), @intCast(query), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetLightiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, light: u32, pname: u32, params: *i32 ```
    pub fn GlGetLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetLightiv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetLightfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, light: u32, pname: u32, params: *f32 ```
    pub fn GlGetLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetLightfv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetClipPlane)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, plane: u32, equation: *f64 ```
    pub fn GlGetClipPlane(self: ?*anyopaque, plane: u32, equation: *f64) void {
        qtc.QOpenGLFunctions_2_1_GlGetClipPlane(@ptrCast(self), @intCast(plane), @ptrCast(equation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDrawPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlDrawPixels(self: ?*anyopaque, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlDrawPixels(@ptrCast(self), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, width: i32, height: i32, typeVal: u32 ```
    pub fn GlCopyPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, typeVal: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelMapusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mapVal: u32, mapsize: i32, values: *const u16 ```
    pub fn GlPixelMapusv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlPixelMapusv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelMapuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mapVal: u32, mapsize: i32, values: *const u32 ```
    pub fn GlPixelMapuiv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelMapuiv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelMapfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mapVal: u32, mapsize: i32, values: *const f32 ```
    pub fn GlPixelMapfv(self: ?*anyopaque, mapVal: u32, mapsize: i32, values: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelMapfv(@ptrCast(self), @intCast(mapVal), @intCast(mapsize), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelTransferi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: i32 ```
    pub fn GlPixelTransferi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelTransferi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelTransferf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: f32 ```
    pub fn GlPixelTransferf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelTransferf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPixelZoom)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, xfactor: f32, yfactor: f32 ```
    pub fn GlPixelZoom(self: ?*anyopaque, xfactor: f32, yfactor: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPixelZoom(@ptrCast(self), @intCast(xfactor), @intCast(yfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glAlphaFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, func: u32, ref: f32 ```
    pub fn GlAlphaFunc(self: ?*anyopaque, func: u32, ref: f32) void {
        qtc.QOpenGLFunctions_2_1_GlAlphaFunc(@ptrCast(self), @intCast(func), @intCast(ref));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalPoint2)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, i: i32, j: i32 ```
    pub fn GlEvalPoint2(self: ?*anyopaque, i: i32, j: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalPoint2(@ptrCast(self), @intCast(i), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalMesh2)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32 ```
    pub fn GlEvalMesh2(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32, j1: i32, j2: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalMesh2(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val), @intCast(j1), @intCast(j2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalPoint1)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, i: i32 ```
    pub fn GlEvalPoint1(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalPoint1(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalMesh1)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32, i1Val: i32, i2Val: i32 ```
    pub fn GlEvalMesh1(self: ?*anyopaque, mode: u32, i1Val: i32, i2Val: i32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalMesh1(@ptrCast(self), @intCast(mode), @intCast(i1Val), @intCast(i2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: *const f32 ```
    pub fn GlEvalCoord2fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2fv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: f32, v: f32 ```
    pub fn GlEvalCoord2f(self: ?*anyopaque, u: f32, v: f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2f(@ptrCast(self), @intCast(u), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: *const f64 ```
    pub fn GlEvalCoord2dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2dv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: f64, v: f64 ```
    pub fn GlEvalCoord2d(self: ?*anyopaque, u: f64, v: f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord2d(@ptrCast(self), @intCast(u), @intCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: *const f32 ```
    pub fn GlEvalCoord1fv(self: ?*anyopaque, u: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1fv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: f32 ```
    pub fn GlEvalCoord1f(self: ?*anyopaque, u: f32) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1f(@ptrCast(self), @intCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: *const f64 ```
    pub fn GlEvalCoord1dv(self: ?*anyopaque, u: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1dv(@ptrCast(self), @ptrCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEvalCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, u: f64 ```
    pub fn GlEvalCoord1d(self: ?*anyopaque, u: f64) void {
        qtc.QOpenGLFunctions_2_1_GlEvalCoord1d(@ptrCast(self), @intCast(u));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMapGrid2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32 ```
    pub fn GlMapGrid2f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32, vn: i32, v1: f32, v2: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid2f(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val), @intCast(vn), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMapGrid2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64 ```
    pub fn GlMapGrid2d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64, vn: i32, v1: f64, v2: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid2d(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val), @intCast(vn), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMapGrid1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, un: i32, u1Val: f32, u2Val: f32 ```
    pub fn GlMapGrid1f(self: ?*anyopaque, un: i32, u1Val: f32, u2Val: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid1f(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMapGrid1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, un: i32, u1Val: f64, u2Val: f64 ```
    pub fn GlMapGrid1d(self: ?*anyopaque, un: i32, u1Val: f64, u2Val: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMapGrid1d(@ptrCast(self), @intCast(un), @intCast(u1Val), @intCast(u2Val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMap2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32 ```
    pub fn GlMap2f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, ustride: i32, uorder: i32, v1: f32, v2: f32, vstride: i32, vorder: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMap2f(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(ustride), @intCast(uorder), @intCast(v1), @intCast(v2), @intCast(vstride), @intCast(vorder), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMap2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64 ```
    pub fn GlMap2d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, ustride: i32, uorder: i32, v1: f64, v2: f64, vstride: i32, vorder: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMap2d(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(ustride), @intCast(uorder), @intCast(v1), @intCast(v2), @intCast(vstride), @intCast(vorder), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMap1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32 ```
    pub fn GlMap1f(self: ?*anyopaque, target: u32, u1Val: f32, u2Val: f32, stride: i32, order: i32, points: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMap1f(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(stride), @intCast(order), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMap1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64 ```
    pub fn GlMap1d(self: ?*anyopaque, target: u32, u1Val: f64, u2Val: f64, stride: i32, order: i32, points: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMap1d(@ptrCast(self), @intCast(target), @intCast(u1Val), @intCast(u2Val), @intCast(stride), @intCast(order), @ptrCast(points));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPushAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: u32 ```
    pub fn GlPushAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPushAttrib(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPopAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlPopAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlPopAttrib(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glAccum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, op: u32, value: f32 ```
    pub fn GlAccum(self: ?*anyopaque, op: u32, value: f32) void {
        qtc.QOpenGLFunctions_2_1_GlAccum(@ptrCast(self), @intCast(op), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: u32 ```
    pub fn GlIndexMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClearIndex)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: f32 ```
    pub fn GlClearIndex(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_2_1_GlClearIndex(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClearAccum)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearAccum(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlClearAccum(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPushName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, name: u32 ```
    pub fn GlPushName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPushName(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPopName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlPopName(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlPopName(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPassThrough)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, token: f32 ```
    pub fn GlPassThrough(self: ?*anyopaque, token: f32) void {
        qtc.QOpenGLFunctions_2_1_GlPassThrough(@ptrCast(self), @intCast(token));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLoadName)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, name: u32 ```
    pub fn GlLoadName(self: ?*anyopaque, name: u32) void {
        qtc.QOpenGLFunctions_2_1_GlLoadName(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glInitNames)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlInitNames(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlInitNames(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRenderMode)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlRenderMode(self: ?*anyopaque, mode: u32) i32 {
        return qtc.QOpenGLFunctions_2_1_GlRenderMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSelectBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: i32, buffer: *u32 ```
    pub fn GlSelectBuffer(self: ?*anyopaque, size: i32, buffer: *u32) void {
        qtc.QOpenGLFunctions_2_1_GlSelectBuffer(@ptrCast(self), @intCast(size), @ptrCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFeedbackBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: i32, typeVal: u32, buffer: *f32 ```
    pub fn GlFeedbackBuffer(self: ?*anyopaque, size: i32, typeVal: u32, buffer: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlFeedbackBuffer(@ptrCast(self), @intCast(size), @intCast(typeVal), @ptrCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexGeniv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, params: *const i32 ```
    pub fn GlTexGeniv(self: ?*anyopaque, coord: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGeniv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexGeni)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, param: i32 ```
    pub fn GlTexGeni(self: ?*anyopaque, coord: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGeni(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexGenfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, params: *const f32 ```
    pub fn GlTexGenfv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGenfv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexGenf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, param: f32 ```
    pub fn GlTexGenf(self: ?*anyopaque, coord: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexGenf(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexGendv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, params: *const f64 ```
    pub fn GlTexGendv(self: ?*anyopaque, coord: u32, pname: u32, params: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexGendv(@ptrCast(self), @intCast(coord), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexGend)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: u32, pname: u32, param: f64 ```
    pub fn GlTexGend(self: ?*anyopaque, coord: u32, pname: u32, param: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexGend(@ptrCast(self), @intCast(coord), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexEnviv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexEnviv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnviv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexEnvi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, param: i32 ```
    pub fn GlTexEnvi(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnvi(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexEnvfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexEnvfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnvfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexEnvf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, param: f32 ```
    pub fn GlTexEnvf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexEnvf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glShadeModel)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlShadeModel(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlShadeModel(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPolygonStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: *const u8 ```
    pub fn GlPolygonStipple(self: ?*anyopaque, mask: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlPolygonStipple(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMaterialiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, pname: u32, params: *const i32 ```
    pub fn GlMaterialiv(self: ?*anyopaque, face: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMaterialiv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMateriali)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, pname: u32, param: i32 ```
    pub fn GlMateriali(self: ?*anyopaque, face: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMateriali(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMaterialfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, pname: u32, params: *const f32 ```
    pub fn GlMaterialfv(self: ?*anyopaque, face: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMaterialfv(@ptrCast(self), @intCast(face), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMaterialf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, pname: u32, param: f32 ```
    pub fn GlMaterialf(self: ?*anyopaque, face: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMaterialf(@ptrCast(self), @intCast(face), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLineStipple)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, factor: i32, pattern: u16 ```
    pub fn GlLineStipple(self: ?*anyopaque, factor: i32, pattern: u16) void {
        qtc.QOpenGLFunctions_2_1_GlLineStipple(@ptrCast(self), @intCast(factor), @intCast(pattern));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightModeliv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *const i32 ```
    pub fn GlLightModeliv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModeliv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightModeli)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: i32 ```
    pub fn GlLightModeli(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModeli(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightModelfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *const f32 ```
    pub fn GlLightModelfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModelfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightModelf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: f32 ```
    pub fn GlLightModelf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightModelf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, light: u32, pname: u32, params: *const i32 ```
    pub fn GlLightiv(self: ?*anyopaque, light: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlLightiv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLighti)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, light: u32, pname: u32, param: i32 ```
    pub fn GlLighti(self: ?*anyopaque, light: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlLighti(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, light: u32, pname: u32, params: *const f32 ```
    pub fn GlLightfv(self: ?*anyopaque, light: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightfv(@ptrCast(self), @intCast(light), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLightf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, light: u32, pname: u32, param: f32 ```
    pub fn GlLightf(self: ?*anyopaque, light: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlLightf(@ptrCast(self), @intCast(light), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *const i32 ```
    pub fn GlFogiv(self: ?*anyopaque, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlFogiv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: i32 ```
    pub fn GlFogi(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_2_1_GlFogi(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, params: *const f32 ```
    pub fn GlFogfv(self: ?*anyopaque, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogfv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, pname: u32, param: f32 ```
    pub fn GlFogf(self: ?*anyopaque, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogf(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorMaterial)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, face: u32, mode: u32 ```
    pub fn GlColorMaterial(self: ?*anyopaque, face: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlColorMaterial(@ptrCast(self), @intCast(face), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClipPlane)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, plane: u32, equation: *const f64 ```
    pub fn GlClipPlane(self: ?*anyopaque, plane: u32, equation: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlClipPlane(@ptrCast(self), @intCast(plane), @ptrCast(equation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlVertex4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlVertex4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlVertex4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlVertex4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlVertex4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertex4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlVertex4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlVertex4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex4d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlVertex3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16, z: i16 ```
    pub fn GlVertex3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlVertex3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, z: i32 ```
    pub fn GlVertex3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlVertex3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32 ```
    pub fn GlVertex3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlVertex3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64 ```
    pub fn GlVertex3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlVertex2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16 ```
    pub fn GlVertex2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlVertex2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32 ```
    pub fn GlVertex2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlVertex2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32 ```
    pub fn GlVertex2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlVertex2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertex2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64 ```
    pub fn GlVertex2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertex2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlTexCoord4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i16, t: i16, r: i16, q: i16 ```
    pub fn GlTexCoord4s(self: ?*anyopaque, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlTexCoord4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i32, t: i32, r: i32, q: i32 ```
    pub fn GlTexCoord4i(self: ?*anyopaque, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlTexCoord4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f32, t: f32, r: f32, q: f32 ```
    pub fn GlTexCoord4f(self: ?*anyopaque, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4f(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlTexCoord4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f64, t: f64, r: f64, q: f64 ```
    pub fn GlTexCoord4d(self: ?*anyopaque, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord4d(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlTexCoord3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i16, t: i16, r: i16 ```
    pub fn GlTexCoord3s(self: ?*anyopaque, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3s(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlTexCoord3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i32, t: i32, r: i32 ```
    pub fn GlTexCoord3i(self: ?*anyopaque, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3i(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlTexCoord3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f32, t: f32, r: f32 ```
    pub fn GlTexCoord3f(self: ?*anyopaque, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3f(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlTexCoord3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f64, t: f64, r: f64 ```
    pub fn GlTexCoord3d(self: ?*anyopaque, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord3d(@ptrCast(self), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlTexCoord2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i16, t: i16 ```
    pub fn GlTexCoord2s(self: ?*anyopaque, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2s(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlTexCoord2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i32, t: i32 ```
    pub fn GlTexCoord2i(self: ?*anyopaque, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2i(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlTexCoord2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f32, t: f32 ```
    pub fn GlTexCoord2f(self: ?*anyopaque, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2f(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlTexCoord2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f64, t: f64 ```
    pub fn GlTexCoord2d(self: ?*anyopaque, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord2d(@ptrCast(self), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlTexCoord1sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i16 ```
    pub fn GlTexCoord1s(self: ?*anyopaque, s: i16) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1s(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlTexCoord1iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: i32 ```
    pub fn GlTexCoord1i(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1i(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlTexCoord1fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f32 ```
    pub fn GlTexCoord1f(self: ?*anyopaque, s: f32) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1f(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlTexCoord1dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, s: f64 ```
    pub fn GlTexCoord1d(self: ?*anyopaque, s: f64) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoord1d(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRectsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v1: *const i16, v2: *const i16 ```
    pub fn GlRectsv(self: ?*anyopaque, v1: *const i16, v2: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRectsv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRects)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x1: i16, y1: i16, x2: i16, y2: i16 ```
    pub fn GlRects(self: ?*anyopaque, x1: i16, y1: i16, x2: i16, y2: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRects(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRectiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v1: *const i32, v2: *const i32 ```
    pub fn GlRectiv(self: ?*anyopaque, v1: *const i32, v2: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRectiv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRecti)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x1: i32, y1: i32, x2: i32, y2: i32 ```
    pub fn GlRecti(self: ?*anyopaque, x1: i32, y1: i32, x2: i32, y2: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRecti(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRectfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v1: *const f32, v2: *const f32 ```
    pub fn GlRectfv(self: ?*anyopaque, v1: *const f32, v2: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRectfv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRectf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x1: f32, y1: f32, x2: f32, y2: f32 ```
    pub fn GlRectf(self: ?*anyopaque, x1: f32, y1: f32, x2: f32, y2: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRectf(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRectdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v1: *const f64, v2: *const f64 ```
    pub fn GlRectdv(self: ?*anyopaque, v1: *const f64, v2: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRectdv(@ptrCast(self), @ptrCast(v1), @ptrCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRectd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x1: f64, y1: f64, x2: f64, y2: f64 ```
    pub fn GlRectd(self: ?*anyopaque, x1: f64, y1: f64, x2: f64, y2: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRectd(@ptrCast(self), @intCast(x1), @intCast(y1), @intCast(x2), @intCast(y2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlRasterPos4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlRasterPos4s(self: ?*anyopaque, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlRasterPos4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlRasterPos4i(self: ?*anyopaque, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlRasterPos4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlRasterPos4f(self: ?*anyopaque, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlRasterPos4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlRasterPos4d(self: ?*anyopaque, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos4d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlRasterPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16, z: i16 ```
    pub fn GlRasterPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlRasterPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, z: i32 ```
    pub fn GlRasterPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlRasterPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32 ```
    pub fn GlRasterPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlRasterPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64 ```
    pub fn GlRasterPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlRasterPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16 ```
    pub fn GlRasterPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlRasterPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32 ```
    pub fn GlRasterPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlRasterPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32 ```
    pub fn GlRasterPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlRasterPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glRasterPos2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64 ```
    pub fn GlRasterPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlRasterPos2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlNormal3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, nx: i16, ny: i16, nz: i16 ```
    pub fn GlNormal3s(self: ?*anyopaque, nx: i16, ny: i16, nz: i16) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3s(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlNormal3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, nx: i32, ny: i32, nz: i32 ```
    pub fn GlNormal3i(self: ?*anyopaque, nx: i32, ny: i32, nz: i32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3i(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlNormal3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, nx: f32, ny: f32, nz: f32 ```
    pub fn GlNormal3f(self: ?*anyopaque, nx: f32, ny: f32, nz: f32) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3f(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlNormal3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, nx: f64, ny: f64, nz: f64 ```
    pub fn GlNormal3d(self: ?*anyopaque, nx: f64, ny: f64, nz: f64) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3d(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i8 ```
    pub fn GlNormal3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormal3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, nx: i8, ny: i8, nz: i8 ```
    pub fn GlNormal3b(self: ?*anyopaque, nx: i8, ny: i8, nz: i8) void {
        qtc.QOpenGLFunctions_2_1_GlNormal3b(@ptrCast(self), @intCast(nx), @intCast(ny), @intCast(nz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: *const i16 ```
    pub fn GlIndexsv(self: ?*anyopaque, c: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlIndexsv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexs)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: i16 ```
    pub fn GlIndexs(self: ?*anyopaque, c: i16) void {
        qtc.QOpenGLFunctions_2_1_GlIndexs(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: *const i32 ```
    pub fn GlIndexiv(self: ?*anyopaque, c: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexiv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexi)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: i32 ```
    pub fn GlIndexi(self: ?*anyopaque, c: i32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexi(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: *const f32 ```
    pub fn GlIndexfv(self: ?*anyopaque, c: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexfv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: f32 ```
    pub fn GlIndexf(self: ?*anyopaque, c: f32) void {
        qtc.QOpenGLFunctions_2_1_GlIndexf(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexdv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: *const f64 ```
    pub fn GlIndexdv(self: ?*anyopaque, c: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlIndexdv(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, c: f64 ```
    pub fn GlIndexd(self: ?*anyopaque, c: f64) void {
        qtc.QOpenGLFunctions_2_1_GlIndexd(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEnd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlEnd(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEdgeFlagv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, flag: *const u8 ```
    pub fn GlEdgeFlagv(self: ?*anyopaque, flag: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlEdgeFlagv(@ptrCast(self), @ptrCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEdgeFlag)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, flag: u8 ```
    pub fn GlEdgeFlag(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_2_1_GlEdgeFlag(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u16 ```
    pub fn GlColor4usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u16, green: u16, blue: u16, alpha: u16 ```
    pub fn GlColor4us(self: ?*anyopaque, red: u16, green: u16, blue: u16, alpha: u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u32 ```
    pub fn GlColor4uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u32, green: u32, blue: u32, alpha: u32 ```
    pub fn GlColor4ui(self: ?*anyopaque, red: u32, green: u32, blue: u32, alpha: u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u8 ```
    pub fn GlColor4ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColor4ub(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlColor4sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i16, green: i16, blue: i16, alpha: i16 ```
    pub fn GlColor4s(self: ?*anyopaque, red: i16, green: i16, blue: i16, alpha: i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor4s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlColor4iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i32, green: i32, blue: i32, alpha: i32 ```
    pub fn GlColor4i(self: ?*anyopaque, red: i32, green: i32, blue: i32, alpha: i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlColor4fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlColor4f(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor4f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlColor4dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor4dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f64, green: f64, blue: f64, alpha: f64 ```
    pub fn GlColor4d(self: ?*anyopaque, red: f64, green: f64, blue: f64, alpha: f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor4d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i8 ```
    pub fn GlColor4bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor4b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i8, green: i8, blue: i8, alpha: i8 ```
    pub fn GlColor4b(self: ?*anyopaque, red: i8, green: i8, blue: i8, alpha: i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor4b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u16 ```
    pub fn GlColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u16, green: u16, blue: u16 ```
    pub fn GlColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u32 ```
    pub fn GlColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u32, green: u32, blue: u32 ```
    pub fn GlColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u8 ```
    pub fn GlColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u8, green: u8, blue: u8 ```
    pub fn GlColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i16, green: i16, blue: i16 ```
    pub fn GlColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_2_1_GlColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i32, green: i32, blue: i32 ```
    pub fn GlColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f32, green: f32, blue: f32 ```
    pub fn GlColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_2_1_GlColor3f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f64, green: f64, blue: f64 ```
    pub fn GlColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_2_1_GlColor3d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i8 ```
    pub fn GlColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColor3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i8, green: i8, blue: i8 ```
    pub fn GlColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_2_1_GlColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBitmap)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8 ```
    pub fn GlBitmap(self: ?*anyopaque, width: i32, height: i32, xorig: f32, yorig: f32, xmove: f32, ymove: f32, bitmap: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlBitmap(@ptrCast(self), @intCast(width), @intCast(height), @intCast(xorig), @intCast(yorig), @intCast(xmove), @intCast(ymove), @ptrCast(bitmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glBegin)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mode: u32 ```
    pub fn GlBegin(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlBegin(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glListBase)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, base: u32 ```
    pub fn GlListBase(self: ?*anyopaque, base: u32) void {
        qtc.QOpenGLFunctions_2_1_GlListBase(@ptrCast(self), @intCast(base));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGenLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, range: i32 ```
    pub fn GlGenLists(self: ?*anyopaque, range: i32) u32 {
        return qtc.QOpenGLFunctions_2_1_GlGenLists(@ptrCast(self), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDeleteLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, list: u32, range: i32 ```
    pub fn GlDeleteLists(self: ?*anyopaque, list: u32, range: i32) void {
        qtc.QOpenGLFunctions_2_1_GlDeleteLists(@ptrCast(self), @intCast(list), @intCast(range));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCallLists)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, typeVal: u32, lists: *void ```
    pub fn GlCallLists(self: ?*anyopaque, n: i32, typeVal: u32, lists: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlCallLists(@ptrCast(self), @intCast(n), @intCast(typeVal), lists);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCallList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, list: u32 ```
    pub fn GlCallList(self: ?*anyopaque, list: u32) void {
        qtc.QOpenGLFunctions_2_1_GlCallList(@ptrCast(self), @intCast(list));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEndList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlEndList(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlEndList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNewList)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, list: u32, mode: u32 ```
    pub fn GlNewList(self: ?*anyopaque, list: u32, mode: u32) void {
        qtc.QOpenGLFunctions_2_1_GlNewList(@ptrCast(self), @intCast(list), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPushClientAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, mask: u32 ```
    pub fn GlPushClientAttrib(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_2_1_GlPushClientAttrib(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPopClientAttrib)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn GlPopClientAttrib(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_GlPopClientAttrib(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glPrioritizeTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, textures: *const u32, priorities: *const f32 ```
    pub fn GlPrioritizeTextures(self: ?*anyopaque, n: i32, textures: *const u32, priorities: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlPrioritizeTextures(@ptrCast(self), @intCast(n), @ptrCast(textures), @ptrCast(priorities));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glAreTexturesResident)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, n: i32, textures: *const u32, residences: *u8 ```
    pub fn GlAreTexturesResident(self: ?*anyopaque, n: i32, textures: *const u32, residences: *u8) u8 {
        return qtc.QOpenGLFunctions_2_1_GlAreTexturesResident(@ptrCast(self), @intCast(n), @ptrCast(textures), @ptrCast(residences));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlVertexPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlVertexPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glTexCoordPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlTexCoordPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlTexCoordPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glNormalPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlNormalPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlNormalPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glInterleavedArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, format: u32, stride: i32, pointer: *void ```
    pub fn GlInterleavedArrays(self: ?*anyopaque, format: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlInterleavedArrays(@ptrCast(self), @intCast(format), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glIndexPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlIndexPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlIndexPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEnableClientState)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, array: u32 ```
    pub fn GlEnableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_2_1_GlEnableClientState(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glEdgeFlagPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, stride: i32, pointer: *void ```
    pub fn GlEdgeFlagPointer(self: ?*anyopaque, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlEdgeFlagPointer(@ptrCast(self), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glDisableClientState)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, array: u32 ```
    pub fn GlDisableClientState(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLFunctions_2_1_GlDisableClientState(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlColorPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glArrayElement)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, i: i32 ```
    pub fn GlArrayElement(self: ?*anyopaque, i: i32) void {
        qtc.QOpenGLFunctions_2_1_GlArrayElement(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glResetMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32 ```
    pub fn GlResetMinmax(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_2_1_GlResetMinmax(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glResetHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32 ```
    pub fn GlResetHistogram(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_2_1_GlResetHistogram(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, sink: u8 ```
    pub fn GlMinmax(self: ?*anyopaque, target: u32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_2_1_GlMinmax(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, width: i32, internalformat: u32, sink: u8 ```
    pub fn GlHistogram(self: ?*anyopaque, target: u32, width: i32, internalformat: u32, sink: u8) void {
        qtc.QOpenGLFunctions_2_1_GlHistogram(@ptrCast(self), @intCast(target), @intCast(width), @intCast(internalformat), @intCast(sink));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMinmaxParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetMinmaxParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMinmaxParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMinmaxParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetMinmaxParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetMinmaxParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetMinmax)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, reset: u8, format: u32, typeVal: u32, values: *void ```
    pub fn GlGetMinmax(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetMinmax(@ptrCast(self), @intCast(target), @intCast(reset), @intCast(format), @intCast(typeVal), values);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetHistogramParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetHistogramParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetHistogramParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetHistogramParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetHistogramParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetHistogramParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetHistogram)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, reset: u8, format: u32, typeVal: u32, values: *void ```
    pub fn GlGetHistogram(self: ?*anyopaque, target: u32, reset: u8, format: u32, typeVal: u32, values: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetHistogram(@ptrCast(self), @intCast(target), @intCast(reset), @intCast(format), @intCast(typeVal), values);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSeparableFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: *void, column: *void ```
    pub fn GlSeparableFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, row: *const void, column: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlSeparableFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), row, column);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetSeparableFilter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, format: u32, typeVal: u32, row: *void, column: *void, span: *void ```
    pub fn GlGetSeparableFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, row: *void, column: *void, span: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetSeparableFilter(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), row, column, span);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetConvolutionParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetConvolutionParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetConvolutionParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetConvolutionParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetConvolutionFilter)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, format: u32, typeVal: u32, image: *void ```
    pub fn GlGetConvolutionFilter(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, image: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetConvolutionFilter(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyConvolutionFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyConvolutionFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyConvolutionFilter1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyConvolutionFilter1D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glConvolutionParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const i32 ```
    pub fn GlConvolutionParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glConvolutionParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: i32 ```
    pub fn GlConvolutionParameteri(self: ?*anyopaque, target: u32, pname: u32, params: i32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glConvolutionParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const f32 ```
    pub fn GlConvolutionParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glConvolutionParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: f32 ```
    pub fn GlConvolutionParameterf(self: ?*anyopaque, target: u32, pname: u32, params: f32) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glConvolutionFilter2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: *void ```
    pub fn GlConvolutionFilter2D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32, format: u32, typeVal: u32, image: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionFilter2D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glConvolutionFilter1D)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: *void ```
    pub fn GlConvolutionFilter1D(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, image: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlConvolutionFilter1D(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(format), @intCast(typeVal), image);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyColorSubTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, start: i32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyColorSubTable(self: ?*anyopaque, target: u32, start: i32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyColorSubTable(@ptrCast(self), @intCast(target), @intCast(start), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorSubTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: *void ```
    pub fn GlColorSubTable(self: ?*anyopaque, target: u32, start: i32, count: i32, format: u32, typeVal: u32, data: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlColorSubTable(@ptrCast(self), @intCast(target), @intCast(start), @intCast(count), @intCast(format), @intCast(typeVal), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetColorTableParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_2_1_GlGetColorTableParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetColorTableParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_2_1_GlGetColorTableParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glGetColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, format: u32, typeVal: u32, table: *void ```
    pub fn GlGetColorTable(self: ?*anyopaque, target: u32, format: u32, typeVal: u32, table: *void) void {
        qtc.QOpenGLFunctions_2_1_GlGetColorTable(@ptrCast(self), @intCast(target), @intCast(format), @intCast(typeVal), table);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glCopyColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, x: i32, y: i32, width: i32 ```
    pub fn GlCopyColorTable(self: ?*anyopaque, target: u32, internalformat: u32, x: i32, y: i32, width: i32) void {
        qtc.QOpenGLFunctions_2_1_GlCopyColorTable(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorTableParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const i32 ```
    pub fn GlColorTableParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlColorTableParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorTableParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, pname: u32, params: *const f32 ```
    pub fn GlColorTableParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlColorTableParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glColorTable)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: *void ```
    pub fn GlColorTable(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, format: u32, typeVal: u32, table: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlColorTable(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(format), @intCast(typeVal), table);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultTransposeMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f64 ```
    pub fn GlMultTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultTransposeMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f32 ```
    pub fn GlMultTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLoadTransposeMatrixd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f64 ```
    pub fn GlLoadTransposeMatrixd(self: ?*anyopaque, m: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlLoadTransposeMatrixd(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glLoadTransposeMatrixf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, m: *const f32 ```
    pub fn GlLoadTransposeMatrixf(self: ?*anyopaque, m: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlLoadTransposeMatrixf(@ptrCast(self), @ptrCast(m));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord4sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i16, t: i16, r: i16, q: i16 ```
    pub fn GlMultiTexCoord4s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16, q: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord4iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i32, t: i32, r: i32, q: i32 ```
    pub fn GlMultiTexCoord4i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32, q: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord4fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f32, t: f32, r: f32, q: f32 ```
    pub fn GlMultiTexCoord4f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32, q: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord4dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f64, t: f64, r: f64, q: f64 ```
    pub fn GlMultiTexCoord4d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64, q: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord4d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r), @intCast(q));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord3sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i16, t: i16, r: i16 ```
    pub fn GlMultiTexCoord3s(self: ?*anyopaque, target: u32, s: i16, t: i16, r: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord3iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i32, t: i32, r: i32 ```
    pub fn GlMultiTexCoord3i(self: ?*anyopaque, target: u32, s: i32, t: i32, r: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord3fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f32, t: f32, r: f32 ```
    pub fn GlMultiTexCoord3f(self: ?*anyopaque, target: u32, s: f32, t: f32, r: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord3dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f64, t: f64, r: f64 ```
    pub fn GlMultiTexCoord3d(self: ?*anyopaque, target: u32, s: f64, t: f64, r: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord3d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord2sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i16, t: i16 ```
    pub fn GlMultiTexCoord2s(self: ?*anyopaque, target: u32, s: i16, t: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2s(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord2iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i32, t: i32 ```
    pub fn GlMultiTexCoord2i(self: ?*anyopaque, target: u32, s: i32, t: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2i(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord2fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f32, t: f32 ```
    pub fn GlMultiTexCoord2f(self: ?*anyopaque, target: u32, s: f32, t: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2f(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord2dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f64, t: f64 ```
    pub fn GlMultiTexCoord2d(self: ?*anyopaque, target: u32, s: f64, t: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord2d(@ptrCast(self), @intCast(target), @intCast(s), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i16 ```
    pub fn GlMultiTexCoord1sv(self: ?*anyopaque, target: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1sv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i16 ```
    pub fn GlMultiTexCoord1s(self: ?*anyopaque, target: u32, s: i16) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1s(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const i32 ```
    pub fn GlMultiTexCoord1iv(self: ?*anyopaque, target: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1iv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: i32 ```
    pub fn GlMultiTexCoord1i(self: ?*anyopaque, target: u32, s: i32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1i(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f32 ```
    pub fn GlMultiTexCoord1fv(self: ?*anyopaque, target: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1fv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f32 ```
    pub fn GlMultiTexCoord1f(self: ?*anyopaque, target: u32, s: f32) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1f(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, v: *const f64 ```
    pub fn GlMultiTexCoord1dv(self: ?*anyopaque, target: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1dv(@ptrCast(self), @intCast(target), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glMultiTexCoord1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, target: u32, s: f64 ```
    pub fn GlMultiTexCoord1d(self: ?*anyopaque, target: u32, s: f64) void {
        qtc.QOpenGLFunctions_2_1_GlMultiTexCoord1d(@ptrCast(self), @intCast(target), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glClientActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, texture: u32 ```
    pub fn GlClientActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_2_1_GlClientActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlWindowPos3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16, z: i16 ```
    pub fn GlWindowPos3s(self: ?*anyopaque, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3s(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlWindowPos3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32, z: i32 ```
    pub fn GlWindowPos3i(self: ?*anyopaque, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3i(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlWindowPos3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32, z: f32 ```
    pub fn GlWindowPos3f(self: ?*anyopaque, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3f(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlWindowPos3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64, z: f64 ```
    pub fn GlWindowPos3d(self: ?*anyopaque, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos3d(@ptrCast(self), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlWindowPos2sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i16, y: i16 ```
    pub fn GlWindowPos2s(self: ?*anyopaque, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2s(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlWindowPos2iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: i32, y: i32 ```
    pub fn GlWindowPos2i(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2i(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlWindowPos2fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f32, y: f32 ```
    pub fn GlWindowPos2f(self: ?*anyopaque, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2f(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlWindowPos2dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glWindowPos2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, x: f64, y: f64 ```
    pub fn GlWindowPos2d(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlWindowPos2d(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColorPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, size: i32, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlSecondaryColorPointer(self: ?*anyopaque, size: i32, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColorPointer(@ptrCast(self), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u16 ```
    pub fn GlSecondaryColor3usv(self: ?*anyopaque, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3usv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3us)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u16, green: u16, blue: u16 ```
    pub fn GlSecondaryColor3us(self: ?*anyopaque, red: u16, green: u16, blue: u16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3us(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u32 ```
    pub fn GlSecondaryColor3uiv(self: ?*anyopaque, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3uiv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3ui)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u32, green: u32, blue: u32 ```
    pub fn GlSecondaryColor3ui(self: ?*anyopaque, red: u32, green: u32, blue: u32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3ui(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const u8 ```
    pub fn GlSecondaryColor3ubv(self: ?*anyopaque, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3ubv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3ub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: u8, green: u8, blue: u8 ```
    pub fn GlSecondaryColor3ub(self: ?*anyopaque, red: u8, green: u8, blue: u8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3ub(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i16 ```
    pub fn GlSecondaryColor3sv(self: ?*anyopaque, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3sv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i16, green: i16, blue: i16 ```
    pub fn GlSecondaryColor3s(self: ?*anyopaque, red: i16, green: i16, blue: i16) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3s(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i32 ```
    pub fn GlSecondaryColor3iv(self: ?*anyopaque, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3iv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i32, green: i32, blue: i32 ```
    pub fn GlSecondaryColor3i(self: ?*anyopaque, red: i32, green: i32, blue: i32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3i(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f32 ```
    pub fn GlSecondaryColor3fv(self: ?*anyopaque, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3fv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f32, green: f32, blue: f32 ```
    pub fn GlSecondaryColor3f(self: ?*anyopaque, red: f32, green: f32, blue: f32) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3f(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const f64 ```
    pub fn GlSecondaryColor3dv(self: ?*anyopaque, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3dv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: f64, green: f64, blue: f64 ```
    pub fn GlSecondaryColor3d(self: ?*anyopaque, red: f64, green: f64, blue: f64) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3d(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, v: *const i8 ```
    pub fn GlSecondaryColor3bv(self: ?*anyopaque, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3bv(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glSecondaryColor3b)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, red: i8, green: i8, blue: i8 ```
    pub fn GlSecondaryColor3b(self: ?*anyopaque, red: i8, green: i8, blue: i8) void {
        qtc.QOpenGLFunctions_2_1_GlSecondaryColor3b(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogCoordPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, typeVal: u32, stride: i32, pointer: *void ```
    pub fn GlFogCoordPointer(self: ?*anyopaque, typeVal: u32, stride: i32, pointer: *const void) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordPointer(@ptrCast(self), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogCoorddv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: *const f64 ```
    pub fn GlFogCoorddv(self: ?*anyopaque, coord: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoorddv(@ptrCast(self), @ptrCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogCoordd)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: f64 ```
    pub fn GlFogCoordd(self: ?*anyopaque, coord: f64) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordd(@ptrCast(self), @intCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogCoordfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: *const f32 ```
    pub fn GlFogCoordfv(self: ?*anyopaque, coord: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordfv(@ptrCast(self), @ptrCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glFogCoordf)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, coord: f32 ```
    pub fn GlFogCoordf(self: ?*anyopaque, coord: f32) void {
        qtc.QOpenGLFunctions_2_1_GlFogCoordf(@ptrCast(self), @intCast(coord));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4usv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const u16 ```
    pub fn GlVertexAttrib4usv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4usv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4uiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const u32 ```
    pub fn GlVertexAttrib4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4ubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const u8 ```
    pub fn GlVertexAttrib4ubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4ubv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib4sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: i16, y: i16, z: i16, w: i16 ```
    pub fn GlVertexAttrib4s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16, w: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4s(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i32 ```
    pub fn GlVertexAttrib4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib4fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertexAttrib4f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4f(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib4dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f64, y: f64, z: f64, w: f64 ```
    pub fn GlVertexAttrib4d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64, w: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4bv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i8 ```
    pub fn GlVertexAttrib4bv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4bv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Nusv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const u16 ```
    pub fn GlVertexAttrib4Nusv(self: ?*anyopaque, index: u32, v: *const u16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nusv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Nuiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const u32 ```
    pub fn GlVertexAttrib4Nuiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nuiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Nubv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const u8 ```
    pub fn GlVertexAttrib4Nubv(self: ?*anyopaque, index: u32, v: *const u8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nubv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Nub)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: u8, y: u8, z: u8, w: u8 ```
    pub fn GlVertexAttrib4Nub(self: ?*anyopaque, index: u32, x: u8, y: u8, z: u8, w: u8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nub(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Nsv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib4Nsv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nsv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Niv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i32 ```
    pub fn GlVertexAttrib4Niv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Niv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib4Nbv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i8 ```
    pub fn GlVertexAttrib4Nbv(self: ?*anyopaque, index: u32, v: *const i8) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib4Nbv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib3sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib3sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib3s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: i16, y: i16, z: i16 ```
    pub fn GlVertexAttrib3s(self: ?*anyopaque, index: u32, x: i16, y: i16, z: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3s(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib3fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f32, y: f32, z: f32 ```
    pub fn GlVertexAttrib3f(self: ?*anyopaque, index: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3f(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib3dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib3dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib3d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f64, y: f64, z: f64 ```
    pub fn GlVertexAttrib3d(self: ?*anyopaque, index: u32, x: f64, y: f64, z: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib3d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib2sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib2sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib2s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: i16, y: i16 ```
    pub fn GlVertexAttrib2s(self: ?*anyopaque, index: u32, x: i16, y: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2s(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib2fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f32, y: f32 ```
    pub fn GlVertexAttrib2f(self: ?*anyopaque, index: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2f(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib2dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib2dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib2d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f64, y: f64 ```
    pub fn GlVertexAttrib2d(self: ?*anyopaque, index: u32, x: f64, y: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib2d(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib1sv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const i16 ```
    pub fn GlVertexAttrib1sv(self: ?*anyopaque, index: u32, v: *const i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1sv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib1s)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: i16 ```
    pub fn GlVertexAttrib1s(self: ?*anyopaque, index: u32, x: i16) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1s(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f32 ```
    pub fn GlVertexAttrib1fv(self: ?*anyopaque, index: u32, v: *const f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1fv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f32 ```
    pub fn GlVertexAttrib1f(self: ?*anyopaque, index: u32, x: f32) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1f(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib1dv)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, v: *const f64 ```
    pub fn GlVertexAttrib1dv(self: ?*anyopaque, index: u32, v: *const f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1dv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#glVertexAttrib1d)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, index: u32, x: f64 ```
    pub fn GlVertexAttrib1d(self: ?*anyopaque, index: u32, x: f64) void {
        qtc.QOpenGLFunctions_2_1_GlVertexAttrib1d(@ptrCast(self), @intCast(index), @intCast(x));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_2_1_IsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn QBaseIsInitialized(self: ?*anyopaque) bool {
        return qtc.QOpenGLFunctions_2_1_QBaseIsInitialized(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QOpenGLFunctions_2_1_OnIsInitialized(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, context: QtC.QOpenGLContext ```
    pub fn SetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_SetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, context: QtC.QOpenGLContext ```
    pub fn QBaseSetOwningContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_QBaseSetOwningContext(@ptrCast(self), @ptrCast(context));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, callback: *const fn (self: QtC.QOpenGLFunctions_2_1, context: QtC.QOpenGLContext) callconv(.c) void ```
    pub fn OnSetOwningContext(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QOpenGLFunctions_2_1_OnSetOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn OwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_2_1_OwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn QBaseOwningContext(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLFunctions_2_1_QBaseOwningContext(@ptrCast(self));
    }

    /// Inherited from QAbstractOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1, callback: *const fn () callconv(.c) QtC.QOpenGLContext ```
    pub fn OnOwningContext(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QOpenGLContext) void {
        qtc.QOpenGLFunctions_2_1_OnOwningContext(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-2-1.html#dtor.QOpenGLFunctions_2_1)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_2_1_Delete(@ptrCast(self));
    }
};
