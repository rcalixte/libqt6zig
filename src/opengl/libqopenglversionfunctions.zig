const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglversionfunctions_enums = enums;
pub const struct_i32_i32 = extern struct { first: i32, second: i32 };

/// https://doc.qt.io/qt-6/qopenglversionstatus.html
pub const qopenglversionstatus = struct {
    /// New constructs a new QOpenGLVersionStatus object.
    ///
    /// ``` other: QtC.QOpenGLVersionStatus ```
    pub fn New(other: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new(@ptrCast(other));
    }

    /// New2 constructs a new QOpenGLVersionStatus object and invalidates the source QOpenGLVersionStatus object.
    ///
    /// ``` other: QtC.QOpenGLVersionStatus ```
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new2(@ptrCast(other));
    }

    /// New3 constructs a new QOpenGLVersionStatus object.
    ///
    ///
    pub fn New3() QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new3();
    }

    /// New4 constructs a new QOpenGLVersionStatus object.
    ///
    /// ``` majorVersion: i32, minorVersion: i32, functionStatus: qopenglversionfunctions_enums.OpenGLStatus ```
    pub fn New4(majorVersion: i32, minorVersion: i32, functionStatus: i32) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new4(@intCast(majorVersion), @intCast(minorVersion), @intCast(functionStatus));
    }

    /// New5 constructs a new QOpenGLVersionStatus object.
    ///
    /// ``` param1: QtC.QOpenGLVersionStatus ```
    pub fn New5(param1: ?*anyopaque) QtC.QOpenGLVersionStatus {
        return qtc.QOpenGLVersionStatus_new5(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ``` self: QtC.QOpenGLVersionStatus ```
    pub fn Version(self: ?*anyopaque) struct_i32_i32 {
        const version_pair: qtc.libqt_pair = qtc.QOpenGLVersionStatus_Version(@ptrCast(self));
        return struct_i32_i32{
            .first = @as(*i32, @ptrCast(@alignCast(version_pair.first))).*,
            .second = @as(*i32, @ptrCast(@alignCast(version_pair.second))).*,
        };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
    ///
    /// ``` self: QtC.QOpenGLVersionStatus, version: struct_i32_i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: struct_i32_i32) void {
        var version_first = version.first;
        var version_second = version.second;
        const version_pair = qtc.libqt_pair{
            .first = @ptrCast(&version_first),
            .second = @ptrCast(&version_second),
        };
        qtc.QOpenGLVersionStatus_SetVersion(@ptrCast(self), version_pair);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ``` self: QtC.QOpenGLVersionStatus ```
    ///
    /// Returns: ``` qopenglversionfunctions_enums.OpenGLStatus ```
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.QOpenGLVersionStatus_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
    ///
    /// ``` self: QtC.QOpenGLVersionStatus, status: qopenglversionfunctions_enums.OpenGLStatus ```
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.QOpenGLVersionStatus_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionstatus.html#operator-eq)
    ///
    /// ``` self: QtC.QOpenGLVersionStatus, param1: QtC.QOpenGLVersionStatus ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLVersionStatus_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionstatus.html#dtor.QOpenGLVersionStatus)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLVersionStatus ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionStatus_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html
pub const qopenglversionfunctionsbackend = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLVersionFunctionsBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLVersionFunctionsBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#dtor.QOpenGLVersionFunctionsBackend)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLVersionFunctionsBackend ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractopenglfunctions.html
pub const qabstractopenglfunctions = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QAbstractOpenGLFunctions ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) bool {
        return qtc.QAbstractOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#dtor.QAbstractOpenGLFunctions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractOpenGLFunctions ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractOpenGLFunctions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend.html
pub const qopenglfunctions_1_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_0_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_0_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend.html
pub const qopenglfunctions_1_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_1_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_1_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-2-corebackend.html
pub const qopenglfunctions_1_2_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_2_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_2_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-3-corebackend.html
pub const qopenglfunctions_1_3_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_3_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_3_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-4-corebackend.html
pub const qopenglfunctions_1_4_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_4_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_4_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend.html
pub const qopenglfunctions_1_5_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_5_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend.html
pub const qopenglfunctions_2_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_0_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_0_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-2-1-corebackend.html
pub const qopenglfunctions_2_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_1_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend.html
pub const qopenglfunctions_3_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_0_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_0_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-3-1-corebackend.html
pub const qopenglfunctions_3_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_1_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_1_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-3-2-corebackend.html
pub const qopenglfunctions_3_2_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_2_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_2_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend.html
pub const qopenglfunctions_3_3_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_3_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_3_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend.html
pub const qopenglfunctions_4_0_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_0_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend.html
pub const qopenglfunctions_4_1_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_1_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-2-corebackend.html
pub const qopenglfunctions_4_2_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_2_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_2_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-3-corebackend.html
pub const qopenglfunctions_4_3_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_3_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_3_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-4-corebackend.html
pub const qopenglfunctions_4_4_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_4_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_4_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend.html
pub const qopenglfunctions_4_5_corebackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_5_CoreBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_5_CoreBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend.html
pub const qopenglfunctions_1_0_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_0_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-1-deprecatedbackend.html
pub const qopenglfunctions_1_1_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_1_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_1_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-2-deprecatedbackend.html
pub const qopenglfunctions_1_2_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_2_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_2_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-3-deprecatedbackend.html
pub const qopenglfunctions_1_3_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_3_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_3_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-1-4-deprecatedbackend.html
pub const qopenglfunctions_1_4_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_4_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_1_4_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-2-0-deprecatedbackend.html
pub const qopenglfunctions_2_0_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_0_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_2_0_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-3-0-deprecatedbackend.html
pub const qopenglfunctions_3_0_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_0_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_0_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-3-3-deprecatedbackend.html
pub const qopenglfunctions_3_3_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_3_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_3_3_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglfunctions-4-5-deprecatedbackend.html
pub const qopenglfunctions_4_5_deprecatedbackend = struct {
    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_5_DeprecatedBackend ```
    pub fn Context(self: ?*anyopaque) QtC.QOpenGLContext {
        return qtc.QOpenGLVersionFunctionsBackend_Context(@ptrCast(self));
    }

    /// Inherited from QOpenGLVersionFunctionsBackend
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
    ///
    /// ``` self: QtC.QOpenGLFunctions_4_5_DeprecatedBackend, context: QtC.QOpenGLContext ```
    pub fn SetContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsBackend_SetContext(@ptrCast(self), @ptrCast(context));
    }
};

/// https://doc.qt.io/qt-6/qopenglversionfunctions.html#types
pub const enums = struct {
    pub const OpenGLStatus = enum {
        pub const CoreStatus: i32 = 0;
        pub const DeprecatedStatus: i32 = 1;
        pub const InvalidStatus: i32 = 2;
    };

    pub const Version = enum {
        pub const OpenGL_1_0_Core: i32 = 0;
        pub const OpenGL_1_1_Core: i32 = 1;
        pub const OpenGL_1_2_Core: i32 = 2;
        pub const OpenGL_1_3_Core: i32 = 3;
        pub const OpenGL_1_4_Core: i32 = 4;
        pub const OpenGL_1_5_Core: i32 = 5;
        pub const OpenGL_2_0_Core: i32 = 6;
        pub const OpenGL_2_1_Core: i32 = 7;
        pub const OpenGL_3_0_Core: i32 = 8;
        pub const OpenGL_3_1_Core: i32 = 9;
        pub const OpenGL_3_2_Core: i32 = 10;
        pub const OpenGL_3_3_Core: i32 = 11;
        pub const OpenGL_4_0_Core: i32 = 12;
        pub const OpenGL_4_1_Core: i32 = 13;
        pub const OpenGL_4_2_Core: i32 = 14;
        pub const OpenGL_4_3_Core: i32 = 15;
        pub const OpenGL_4_4_Core: i32 = 16;
        pub const OpenGL_4_5_Core: i32 = 17;
        pub const OpenGL_1_0_Deprecated: i32 = 18;
        pub const OpenGL_1_1_Deprecated: i32 = 19;
        pub const OpenGL_1_2_Deprecated: i32 = 20;
        pub const OpenGL_1_3_Deprecated: i32 = 21;
        pub const OpenGL_1_4_Deprecated: i32 = 22;
        pub const OpenGL_2_0_Deprecated: i32 = 23;
        pub const OpenGL_3_0_Deprecated: i32 = 24;
        pub const OpenGL_3_3_Deprecated: i32 = 25;
        pub const OpenGL_4_5_Deprecated: i32 = 26;
        pub const OpenGLVersionBackendCount: i32 = 27;
    };
};
