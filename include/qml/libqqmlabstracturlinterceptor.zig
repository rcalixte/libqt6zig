const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const qqmlabstracturlinterceptor_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html)
pub const QQmlAbstractUrlInterceptor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlAbstractUrlInterceptor,

    pub const _is_QQmlAbstractUrlInterceptor = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlAbstractUrlInterceptor object in C++ memory
    ///
    pub fn new() QQmlAbstractUrlInterceptor {
        return .{ .ptr = qtc.QQmlAbstractUrlInterceptor_new() };
    }

    /// ### DEPRECATED: Use `intercept` instead
    ///
    pub const Intercept = intercept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#intercept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlAbstractUrlInterceptor `
    ///
    /// ` path: QUrl `
    ///
    /// ` typeVal: qqmlabstracturlinterceptor_enums.DataType `
    ///
    pub fn intercept(self: QQmlAbstractUrlInterceptor, path: anytype, typeVal: i32) QUrl {
        comptime _ = @TypeOf(path)._is_QUrl;
        return .{ .ptr = qtc.QQmlAbstractUrlInterceptor_Intercept(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `onIntercept` instead
    ///
    pub const OnIntercept = onIntercept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#intercept)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlAbstractUrlInterceptor `
    ///
    /// ` callback: *const fn (self: QQmlAbstractUrlInterceptor, path: QUrl, typeVal: qqmlabstracturlinterceptor_enums.DataType) callconv(.c) QUrl `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIntercept(self: QQmlAbstractUrlInterceptor, callback: *const fn (QQmlAbstractUrlInterceptor, QUrl, i32) callconv(.c) QUrl) void {
        qtc.QQmlAbstractUrlInterceptor_OnIntercept(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIntercept` instead
    ///
    pub const SuperIntercept = superIntercept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#intercept)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlAbstractUrlInterceptor `
    ///
    /// ` path: QUrl `
    ///
    /// ` typeVal: qqmlabstracturlinterceptor_enums.DataType `
    ///
    pub fn superIntercept(self: QQmlAbstractUrlInterceptor, path: anytype, typeVal: i32) QUrl {
        comptime _ = @TypeOf(path)._is_QUrl;
        return .{ .ptr = qtc.QQmlAbstractUrlInterceptor_SuperIntercept(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlAbstractUrlInterceptor `
    ///
    /// ` param1: QQmlAbstractUrlInterceptor `
    ///
    pub fn operatorAssign(self: QQmlAbstractUrlInterceptor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlAbstractUrlInterceptor;
        qtc.QQmlAbstractUrlInterceptor_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#dtor.QQmlAbstractUrlInterceptor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlAbstractUrlInterceptor `
    ///
    pub fn delete(self: QQmlAbstractUrlInterceptor) void {
        qtc.QQmlAbstractUrlInterceptor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#public-types)
pub const enums = struct {
    pub const DataType = enum {
        pub const QmlFile: i32 = 0;
        pub const JavaScriptFile: i32 = 1;
        pub const QmldirFile: i32 = 2;
        pub const UrlString: i32 = 4096;
    };
};
