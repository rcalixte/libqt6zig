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

    /// New constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn New(other: anytype) QPdfDocumentRenderOptions {
        comptime _ = @TypeOf(other)._is_QPdfDocumentRenderOptions;
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPdfDocumentRenderOptions object and invalidates the source QPdfDocumentRenderOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn New2(other: anytype) QPdfDocumentRenderOptions {
        comptime _ = @TypeOf(other)._is_QPdfDocumentRenderOptions;
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPdfDocumentRenderOptions object.
    ///
    pub fn New3() QPdfDocumentRenderOptions {
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new3() };
    }

    /// New4 constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPdfDocumentRenderOptions `
    ///
    pub fn New4(param1: anytype) QPdfDocumentRenderOptions {
        comptime _ = @TypeOf(param1)._is_QPdfDocumentRenderOptions;
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn CopyAssign(self: QPdfDocumentRenderOptions, other: QPdfDocumentRenderOptions) void {
        qtc.QPdfDocumentRenderOptions_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` other: QPdfDocumentRenderOptions `
    ///
    pub fn MoveAssign(self: QPdfDocumentRenderOptions, other: QPdfDocumentRenderOptions) void {
        qtc.QPdfDocumentRenderOptions_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn Rotation(self: QPdfDocumentRenderOptions) i32 {
        return qtc.QPdfDocumentRenderOptions_Rotation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` r: qpdfdocumentrenderoptions_enums.Rotation `
    ///
    pub fn SetRotation(self: QPdfDocumentRenderOptions, r: i32) void {
        qtc.QPdfDocumentRenderOptions_SetRotation(@ptrCast(self.ptr), @bitCast(r));
    }

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
    pub fn RenderFlags(self: QPdfDocumentRenderOptions) i32 {
        return qtc.QPdfDocumentRenderOptions_RenderFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` r: flag of qpdfdocumentrenderoptions_enums.RenderFlag `
    ///
    pub fn SetRenderFlags(self: QPdfDocumentRenderOptions, r: i32) void {
        qtc.QPdfDocumentRenderOptions_SetRenderFlags(@ptrCast(self.ptr), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    pub fn ScaledClipRect(self: QPdfDocumentRenderOptions) QRect {
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_ScaledClipRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` r: QRect `
    ///
    pub fn SetScaledClipRect(self: QPdfDocumentRenderOptions, r: anytype) void {
        comptime _ = @TypeOf(r)._is_QRect;
        qtc.QPdfDocumentRenderOptions_SetScaledClipRect(@ptrCast(self.ptr), @ptrCast(r.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    pub fn ScaledSize(self: QPdfDocumentRenderOptions) QSize {
        return .{ .ptr = qtc.QPdfDocumentRenderOptions_ScaledSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    /// ` s: QSize `
    ///
    pub fn SetScaledSize(self: QPdfDocumentRenderOptions, s: anytype) void {
        comptime _ = @TypeOf(s)._is_QSize;
        qtc.QPdfDocumentRenderOptions_SetScaledSize(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#dtor.QPdfDocumentRenderOptions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfDocumentRenderOptions `
    ///
    pub fn Delete(self: QPdfDocumentRenderOptions) void {
        qtc.QPdfDocumentRenderOptions_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#public-types)
pub const enums = struct {
    pub const Rotation = enum(i32) {
        pub const None: i32 = 0;
        pub const Clockwise90: i32 = 1;
        pub const Clockwise180: i32 = 2;
        pub const Clockwise270: i32 = 3;
    };

    pub const RenderFlag = enum(i32) {
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
