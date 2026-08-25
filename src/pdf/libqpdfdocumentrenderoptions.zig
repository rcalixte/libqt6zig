const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qpdfdocumentrenderoptions_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html)
pub const QPdfDocumentRenderOptions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfDocumentRenderOptions,

    pub const _is_QPdfDocumentRenderOptions = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfDocumentRenderOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn new(other: anytype) QPdfDocumentRenderOptions {
        comptime _ = @TypeOf(other)._is_QPdfDocumentRenderOptions;
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPdfDocumentRenderOptions object and invalidate the source QPdfDocumentRenderOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn new2(other: anytype) QPdfDocumentRenderOptions {
        comptime _ = @TypeOf(other)._is_QPdfDocumentRenderOptions;
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPdfDocumentRenderOptions object in C++ memory
    ///
    pub fn new3() QPdfDocumentRenderOptions {
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPdfDocumentRenderOptions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPdfDocumentRenderOptions `
    ///
    pub fn new4(param1: anytype) QPdfDocumentRenderOptions {
        comptime _ = @TypeOf(param1)._is_QPdfDocumentRenderOptions;
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn copyAssign(self: QPdfDocumentRenderOptions, other: QPdfDocumentRenderOptions) void {
        qtc.QPdfDocumentRenderOptions_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn moveAssign(self: QPdfDocumentRenderOptions, other: QPdfDocumentRenderOptions) void {
        qtc.QPdfDocumentRenderOptions_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ## Returns:
    ///
    /// ` qpdfdocumentrenderoptions_enums.Rotation `
    ///
    pub fn rotation(self: QPdfDocumentRenderOptions) i32 {
        return qtc.QPdfDocumentRenderOptions_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` r: qpdfdocumentrenderoptions_enums.Rotation `
    ///
    pub fn setRotation(self: QPdfDocumentRenderOptions, r: i32) void {
        qtc.QPdfDocumentRenderOptions_SetRotation(@ptrCast(self.ptr), @bitCast(r));
    }

    /// ### DEPRECATED: Use `renderFlags` instead
    ///
    pub const RenderFlags = renderFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#renderFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpdfdocumentrenderoptions_enums.RenderFlag `
    ///
    pub fn renderFlags(self: QPdfDocumentRenderOptions) i32 {
        return qtc.QPdfDocumentRenderOptions_RenderFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRenderFlags` instead
    ///
    pub const SetRenderFlags = setRenderFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` r: flag of qpdfdocumentrenderoptions_enums.RenderFlag `
    ///
    pub fn setRenderFlags(self: QPdfDocumentRenderOptions, r: i32) void {
        qtc.QPdfDocumentRenderOptions_SetRenderFlags(@ptrCast(self.ptr), @bitCast(r));
    }

    /// ### DEPRECATED: Use `scaledClipRect` instead
    ///
    pub const ScaledClipRect = scaledClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    pub fn scaledClipRect(self: QPdfDocumentRenderOptions) QRect {
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_ScaledClipRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScaledClipRect` instead
    ///
    pub const SetScaledClipRect = setScaledClipRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` r: QRect `
    ///
    pub fn setScaledClipRect(self: QPdfDocumentRenderOptions, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPdfDocumentRenderOptions_SetScaledClipRect(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### DEPRECATED: Use `scaledSize` instead
    ///
    pub const ScaledSize = scaledSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    pub fn scaledSize(self: QPdfDocumentRenderOptions) QSize {
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_ScaledSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScaledSize` instead
    ///
    pub const SetScaledSize = setScaledSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` s: QSize `
    ///
    pub fn setScaledSize(self: QPdfDocumentRenderOptions, s: anytype) void {
        comptime _ = @TypeOf(s)._is_QSize;
        qtc.QPdfDocumentRenderOptions_SetScaledSize(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#dtor.QPdfDocumentRenderOptions)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    pub fn delete(self: QPdfDocumentRenderOptions) void {
        qtc.QPdfDocumentRenderOptions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#public-types)
pub const enums = struct {
    pub const Rotation = enum {
        pub const None: i32 = 0;
        pub const Clockwise90: i32 = 1;
        pub const Clockwise180: i32 = 2;
        pub const Clockwise270: i32 = 3;
    };

    pub const RenderFlag = enum {
        pub const None: i32 = 0;
        pub const Annotations: i32 = 1;
        pub const OptimizedForLcd: i32 = 2;
        pub const Grayscale: i32 = 4;
        pub const ForceHalftone: i32 = 8;
        pub const TextAliased: i32 = 16;
        pub const ImageAliased: i32 = 32;
        pub const PathAliased: i32 = 64;
    };
};
