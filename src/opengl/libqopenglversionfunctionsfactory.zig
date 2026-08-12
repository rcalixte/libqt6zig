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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLVersionFunctionsFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn new(other: anytype) QOpenGLVersionFunctionsFactory {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionFunctionsFactory;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLVersionFunctionsFactory object and invalidate the source QOpenGLVersionFunctionsFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn new2(other: anytype) QOpenGLVersionFunctionsFactory {
        comptime _ = @TypeOf(other)._is_QOpenGLVersionFunctionsFactory;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLVersionFunctionsFactory `
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn copyAssign(self: QOpenGLVersionFunctionsFactory, other: QOpenGLVersionFunctionsFactory) void {
        qtc.QOpenGLVersionFunctionsFactory_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QOpenGLVersionFunctionsFactory `
    ///
    /// ` other: QOpenGLVersionFunctionsFactory `
    ///
    pub fn moveAssign(self: QOpenGLVersionFunctionsFactory, other: QOpenGLVersionFunctionsFactory) void {
        qtc.QOpenGLVersionFunctionsFactory_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    pub fn get() QAbstractOpenGLFunctions {
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_Get() };
    }

    /// ### DEPRECATED: Use `get1` instead
    ///
    pub const Get1 = get1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` versionProfile: QOpenGLVersionProfile `
    ///
    pub fn get1(versionProfile: anytype) QAbstractOpenGLFunctions {
        comptime _ = @TypeOf(versionProfile)._is_QOpenGLVersionProfile;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_Get1(@ptrCast(versionProfile.ptr)) };
    }

    /// ### DEPRECATED: Use `get2` instead
    ///
    pub const Get2 = get2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` versionProfile: QOpenGLVersionProfile `
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn get2(versionProfile: anytype, context: anytype) QAbstractOpenGLFunctions {
        comptime _ = @TypeOf(versionProfile)._is_QOpenGLVersionProfile;
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLVersionFunctionsFactory_Get2(@ptrCast(versionProfile.ptr), @ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#dtor.QOpenGLVersionFunctionsFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLVersionFunctionsFactory `
    ///
    pub fn delete(self: QOpenGLVersionFunctionsFactory) void {
        qtc.QOpenGLVersionFunctionsFactory_Delete(@ptrCast(self.ptr));
    }
};
