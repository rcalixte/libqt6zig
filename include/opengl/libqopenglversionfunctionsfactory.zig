const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractOpenGLFunctions = @import("libqt6").QAbstractOpenGLFunctions;
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const QOpenGLVersionProfile = @import("libqt6").QOpenGLVersionProfile;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html)
pub const QOpenGLVersionFunctionsFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLVersionFunctionsFactory,

    pub const _is_QOpenGLVersionFunctionsFactory = {};

    /// New constructs a new QOpenGLVersionFunctionsFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn New(other: anytype) QOpenGLVersionFunctionsFactory {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionFunctionsFactory;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QOpenGLVersionFunctionsFactory object and invalidates the source QOpenGLVersionFunctionsFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn New2(other: anytype) QOpenGLVersionFunctionsFactory {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionFunctionsFactory;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLVersionFunctionsFactory `
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn CopyAssign(self: QOpenGLVersionFunctionsFactory, other: QOpenGLVersionFunctionsFactory) void {
        qtc.QOpenGLVersionFunctionsFactory_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLVersionFunctionsFactory `
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn MoveAssign(self: QOpenGLVersionFunctionsFactory, other: QOpenGLVersionFunctionsFactory) void {
        qtc.QOpenGLVersionFunctionsFactory_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    pub fn Get() QAbstractOpenGLFunctions {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_Get() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` versionProfile: QOpenGLVersionProfile `
    ///
    pub fn Get1(versionProfile: anytype) QAbstractOpenGLFunctions {
        comptime _ = @TypeOf(versionProfile)._is_QOpenGLVersionProfile;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_Get1(@ptrCast(versionProfile.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` versionProfile: QOpenGLVersionProfile `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn Get2(versionProfile: anytype, context: anytype) QAbstractOpenGLFunctions {
        comptime _ = @TypeOf(versionProfile)._is_QOpenGLVersionProfile;
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_Get2(@ptrCast(versionProfile.ptr), @ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#dtor.QOpenGLVersionFunctionsFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionFunctionsFactory `
    ///
    pub fn Delete(self: QOpenGLVersionFunctionsFactory) void {
        qtc.QOpenGLVersionFunctionsFactory_Delete(@ptrCast(self.ptr));
    }
};
