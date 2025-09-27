const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html
pub const qopenglversionfunctionsfactory = struct {
    /// New constructs a new QOpenGLVersionFunctionsFactory object.
    ///
    /// ``` other: QtC.QOpenGLVersionFunctionsFactory ```
    pub fn New(other: ?*anyopaque) QtC.QOpenGLVersionFunctionsFactory {
        return qtc.QOpenGLVersionFunctionsFactory_new(@ptrCast(other));
    }

    /// New2 constructs a new QOpenGLVersionFunctionsFactory object and invalidates the source QOpenGLVersionFunctionsFactory object.
    ///
    /// ``` other: QtC.QOpenGLVersionFunctionsFactory ```
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLVersionFunctionsFactory {
        return qtc.QOpenGLVersionFunctionsFactory_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QOpenGLVersionFunctionsFactory, other: QtC.QOpenGLVersionFunctionsFactory ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QOpenGLVersionFunctionsFactory, other: QtC.QOpenGLVersionFunctionsFactory ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    ///
    pub fn Get() QtC.QAbstractOpenGLFunctions {
        return qtc.QOpenGLVersionFunctionsFactory_Get();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    /// ``` versionProfile: QtC.QOpenGLVersionProfile ```
    pub fn Get1(versionProfile: ?*anyopaque) QtC.QAbstractOpenGLFunctions {
        return qtc.QOpenGLVersionFunctionsFactory_Get1(@ptrCast(versionProfile));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    /// ``` versionProfile: QtC.QOpenGLVersionProfile, context: QtC.QOpenGLContext ```
    pub fn Get2(versionProfile: ?*anyopaque, context: ?*anyopaque) QtC.QAbstractOpenGLFunctions {
        return qtc.QOpenGLVersionFunctionsFactory_Get2(@ptrCast(versionProfile), @ptrCast(context));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#dtor.QOpenGLVersionFunctionsFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLVersionFunctionsFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLVersionFunctionsFactory_Delete(@ptrCast(self));
    }
};
