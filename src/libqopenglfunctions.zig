const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglfunctions_enums = enums;

/// https://doc.qt.io/qt-6/qopenglfunctions.html
pub const qopenglfunctions = struct {
    /// New constructs a new QOpenGLFunctions object.
    ///
    ///
    pub fn New() QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new();
    }

    /// New2 constructs a new QOpenGLFunctions object.
    ///
    /// ``` context: QtC.QOpenGLContext ```
    pub fn New2(context: ?*anyopaque) QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new2(@ptrCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#openGLFeatures)
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    ///
    /// Returns: ``` flag of qopenglfunctions_enums.OpenGLFeature ```
    pub fn OpenGLFeatures(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFunctions_OpenGLFeatures(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#hasOpenGLFeature)
    ///
    /// ``` self: QtC.QOpenGLFunctions, feature: qopenglfunctions_enums.OpenGLFeature ```
    pub fn HasOpenGLFeature(self: ?*anyopaque, feature: i32) bool {
        return qtc.QOpenGLFunctions_HasOpenGLFeature(@ptrCast(self), @intCast(feature));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, texture: u32 ```
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions, sfactor: u32, dfactor: u32 ```
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClear)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mask: u32 ```
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearStencil)
    ///
    /// ``` self: QtC.QOpenGLFunctions, s: i32 ```
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glColorMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32 ```
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCullFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mode: u32 ```
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, textures: *const u32 ```
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions, func: u32 ```
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions, flag: u8 ```
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisable)
    ///
    /// ``` self: QtC.QOpenGLFunctions, cap: u32 ```
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mode: u32, first: i32, count: i32 ```
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawElements)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mode: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnable)
    ///
    /// ``` self: QtC.QOpenGLFunctions, cap: u32 ```
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlFinish(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlFlush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFrontFace)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mode: u32 ```
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenTextures)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, textures: *u32 ```
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_GlGenTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBooleanv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, pname: u32, params: *u8 ```
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_GlGetBooleanv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFloatv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, pname: u32, params: *f32 ```
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetFloatv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetIntegerv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, pname: u32, params: *i32 ```
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetIntegerv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetString)
    ///
    /// ``` self: QtC.QOpenGLFunctions, name: u32 ```
    pub fn GlGetString(self: ?*anyopaque, name: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_GlGetString(@ptrCast(self), @intCast(name)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glHint)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, mode: u32 ```
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsEnabled)
    ///
    /// ``` self: QtC.QOpenGLFunctions, cap: u32 ```
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions, texture: u32 ```
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLineWidth)
    ///
    /// ``` self: QtC.QOpenGLFunctions, width: f32 ```
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_GlLineWidth(@ptrCast(self), @intCast(width));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPixelStorei)
    ///
    /// ``` self: QtC.QOpenGLFunctions, pname: u32, param: i32 ```
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPolygonOffset)
    ///
    /// ``` self: QtC.QOpenGLFunctions, factor: f32, units: f32 ```
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_GlPolygonOffset(@ptrCast(self), @intCast(factor), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReadPixels)
    ///
    /// ``` self: QtC.QOpenGLFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glScissor)
    ///
    /// ``` self: QtC.QOpenGLFunctions, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFunc)
    ///
    /// ``` self: QtC.QOpenGLFunctions, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMask)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mask: u32 ```
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOp)
    ///
    /// ``` self: QtC.QOpenGLFunctions, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterf)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, param: f32 ```
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteri)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, param: i32 ```
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glViewport)
    ///
    /// ``` self: QtC.QOpenGLFunctions, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLFunctions, texture: u32 ```
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glAttachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, shader: u32 ```
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlAttachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, index: u32, name: []const u8 ```
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: []const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_GlBindAttribLocation(@ptrCast(self), @intCast(program), @intCast(index), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, buffer: u32 ```
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, framebuffer: u32 ```
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindFramebuffer(@ptrCast(self), @intCast(target), @intCast(framebuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, renderbuffer: u32 ```
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindRenderbuffer(@ptrCast(self), @intCast(target), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendColor)
    ///
    /// ``` self: QtC.QOpenGLFunctions, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquation)
    ///
    /// ``` self: QtC.QOpenGLFunctions, mode: u32 ```
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquationSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquationSeparate(@ptrCast(self), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32 ```
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendFuncSeparate(@ptrCast(self), @intCast(srcRGB), @intCast(dstRGB), @intCast(srcAlpha), @intCast(dstAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferData)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, size: i64, data: ?*anyopaque, usage: u32 ```
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), data, @intCast(usage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, offset: i64, size: i64, data: ?*anyopaque ```
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearDepthf)
    ///
    /// ``` self: QtC.QOpenGLFunctions, depth: f32 ```
    pub fn GlClearDepthf(self: ?*anyopaque, depth: f32) void {
        qtc.QOpenGLFunctions_GlClearDepthf(@ptrCast(self), depth);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompileShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32 ```
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlCompileShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque ```
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque ```
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_GlCreateProgram(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions, typeVal: u32 ```
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_GlCreateShader(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, buffers: *const u32 ```
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, framebuffers: *const u32 ```
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32 ```
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlDeleteProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, renderbuffers: *const u32 ```
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32 ```
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlDeleteShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthRangef)
    ///
    /// ``` self: QtC.QOpenGLFunctions, zNear: f32, zFar: f32 ```
    pub fn GlDepthRangef(self: ?*anyopaque, zNear: f32, zFar: f32) void {
        qtc.QOpenGLFunctions_GlDepthRangef(@ptrCast(self), zNear, zFar);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDetachShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, shader: u32 ```
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlDetachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions, index: u32 ```
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlDisableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLFunctions, index: u32 ```
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlEnableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32 ```
    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlFramebufferRenderbuffer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(renderbuffertarget), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferTexture2D)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_GlFramebufferTexture2D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenBuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, buffers: *u32 ```
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenerateMipmap)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32 ```
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_GlGenerateMipmap(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, framebuffers: *u32 ```
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, renderbuffers: *u32 ```
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttachedShaders)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, maxcount: i32, count: *i32, shaders: *u32 ```
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxcount: i32, count: *i32, shaders: *u32) void {
        qtc.QOpenGLFunctions_GlGetAttachedShaders(@ptrCast(self), @intCast(program), @intCast(maxcount), @ptrCast(count), @ptrCast(shaders));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, name: []const u8 ```
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetAttribLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, attachment: u32, pname: u32, params: *i32 ```
    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetProgramiv(@ptrCast(self), @intCast(program), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, bufsize: i32, length: *i32, infolog: []const u8 ```
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufsize: i32, length: *i32, infolog: []const u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetProgramInfoLog(@ptrCast(self), @intCast(program), @intCast(bufsize), @ptrCast(length), infolog_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetRenderbufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetRenderbufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32, pname: u32, params: *i32 ```
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetShaderiv(@ptrCast(self), @intCast(shader), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderInfoLog)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32, bufsize: i32, length: *i32, infolog: []const u8 ```
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufsize: i32, length: *i32, infolog: []const u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetShaderInfoLog(@ptrCast(self), @intCast(shader), @intCast(bufsize), @ptrCast(length), infolog_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderPrecisionFormat)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32 ```
    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32) void {
        qtc.QOpenGLFunctions_GlGetShaderPrecisionFormat(@ptrCast(self), @intCast(shadertype), @intCast(precisiontype), @ptrCast(range), @ptrCast(precision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderSource)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32, bufsize: i32, length: *i32, source: []const u8 ```
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufsize: i32, length: *i32, source: []const u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_GlGetShaderSource(@ptrCast(self), @intCast(shader), @intCast(bufsize), @ptrCast(length), source_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, location: i32, params: *f32 ```
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetUniformfv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, location: i32, params: *i32 ```
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetUniformiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32, name: []const u8 ```
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetUniformLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribfv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, index: u32, pname: u32, params: *f32 ```
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribfv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribiv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribPointerv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, index: u32, pname: u32, pointer: ?*anyopaque ```
    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribPointerv(@ptrCast(self), @intCast(index), @intCast(pname), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsBuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, buffer: u32 ```
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, framebuffer: u32 ```
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsFramebuffer(@ptrCast(self), @intCast(framebuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32 ```
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, renderbuffer: u32 ```
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsRenderbuffer(@ptrCast(self), @intCast(renderbuffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsShader)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32 ```
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsShader(@ptrCast(self), @intCast(shader));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLinkProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32 ```
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlLinkProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    pub fn GlReleaseShaderCompiler(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReleaseShaderCompiler(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glRenderbufferStorage)
    ///
    /// ``` self: QtC.QOpenGLFunctions, target: u32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlRenderbufferStorage(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glSampleCoverage)
    ///
    /// ``` self: QtC.QOpenGLFunctions, value: f32, invert: u8 ```
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_GlSampleCoverage(@ptrCast(self), value, @intCast(invert));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderBinary)
    ///
    /// ``` self: QtC.QOpenGLFunctions, n: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32 ```
    pub fn GlShaderBinary(self: ?*anyopaque, n: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_GlShaderBinary(@ptrCast(self), @intCast(n), @ptrCast(shaders), @intCast(binaryformat), binary, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderSource)
    ///
    /// ``` self: QtC.QOpenGLFunctions, shader: u32, count: i32, stringVal: []const u8, length: *const i32 ```
    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: []const u8, length: *const i32) void {
        const stringVal_Cstring = stringVal.ptr;
        qtc.QOpenGLFunctions_GlShaderSource(@ptrCast(self), @intCast(shader), @intCast(count), stringVal_Cstring, @ptrCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions, face: u32, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFuncSeparate(@ptrCast(self), @intCast(face), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMaskSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions, face: u32, mask: u32 ```
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMaskSeparate(@ptrCast(self), @intCast(face), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOpSeparate)
    ///
    /// ``` self: QtC.QOpenGLFunctions, face: u32, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOpSeparate(@ptrCast(self), @intCast(face), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: f32 ```
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, x: f32) void {
        qtc.QOpenGLFunctions_GlUniform1f(@ptrCast(self), @intCast(location), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform1fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1i)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: i32 ```
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, x: i32) void {
        qtc.QOpenGLFunctions_GlUniform1i(@ptrCast(self), @intCast(location), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform1iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: f32, y: f32 ```
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlUniform2f(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform2fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2i)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: i32, y: i32 ```
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_GlUniform2i(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform2iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: f32, y: f32, z: f32 ```
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlUniform3f(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform3fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3i)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: i32, y: i32, z: i32 ```
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_GlUniform3i(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform3iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlUniform4f(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform4fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4i)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_GlUniform4i(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform4iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUseProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32 ```
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlUseProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glValidateProgram)
    ///
    /// ``` self: QtC.QOpenGLFunctions, program: u32 ```
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlValidateProgram(@ptrCast(self), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, x: f32 ```
    pub fn GlVertexAttrib1f(self: ?*anyopaque, indx: u32, x: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1f(@ptrCast(self), @intCast(indx), @intCast(x));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib1fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, x: f32, y: f32 ```
    pub fn GlVertexAttrib2f(self: ?*anyopaque, indx: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2f(@ptrCast(self), @intCast(indx), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib2fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, x: f32, y: f32, z: f32 ```
    pub fn GlVertexAttrib3f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3f(@ptrCast(self), @intCast(indx), @intCast(x), @intCast(y), @intCast(z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib3fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4f)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertexAttrib4f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4f(@ptrCast(self), @intCast(indx), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4fv)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib4fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttribPointer)
    ///
    /// ``` self: QtC.QOpenGLFunctions, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*anyopaque ```
    pub fn GlVertexAttribPointer(self: ?*anyopaque, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlVertexAttribPointer(@ptrCast(self), @intCast(indx), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(stride), ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#dtor.QOpenGLFunctions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFunctions ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions.html#types
pub const enums = struct {
    pub const OpenGLFeature = enum {
        pub const Multitexture: i32 = 1;
        pub const Shaders: i32 = 2;
        pub const Buffers: i32 = 4;
        pub const Framebuffers: i32 = 8;
        pub const BlendColor: i32 = 16;
        pub const BlendEquation: i32 = 32;
        pub const BlendEquationSeparate: i32 = 64;
        pub const BlendFuncSeparate: i32 = 128;
        pub const BlendSubtract: i32 = 256;
        pub const CompressedTextures: i32 = 512;
        pub const Multisample: i32 = 1024;
        pub const StencilSeparate: i32 = 2048;
        pub const NPOTTextures: i32 = 4096;
        pub const NPOTTextureRepeat: i32 = 8192;
        pub const FixedFunctionPipeline: i32 = 16384;
        pub const TextureRGFormats: i32 = 32768;
        pub const MultipleRenderTargets: i32 = 65536;
        pub const BlendEquationAdvanced: i32 = 131072;
    };
};
