const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpdfdocumentrenderoptions_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html)
pub const qpdfdocumentrenderoptions = struct {
    /// New constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn New(other: ?*anyopaque) QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new(@ptrCast(other));
    }

    /// New2 constructs a new QPdfDocumentRenderOptions object and invalidates the source QPdfDocumentRenderOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPdfDocumentRenderOptions object.
    ///
    pub fn New3() QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new3();
    }

    /// New4 constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ` other: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ` other: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ## Returns:
    ///
    /// ` qpdfdocumentrenderoptions_enums.Rotation `
    ///
    pub fn Rotation(self: ?*anyopaque) i32 {
        return qtc.QPdfDocumentRenderOptions_Rotation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ` r: qpdfdocumentrenderoptions_enums.Rotation `
    ///
    pub fn SetRotation(self: ?*anyopaque, r: i32) void {
        qtc.QPdfDocumentRenderOptions_SetRotation(@ptrCast(self), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#renderFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ## Returns:
    ///
    /// ` flag of qpdfdocumentrenderoptions_enums.RenderFlag `
    ///
    pub fn RenderFlags(self: ?*anyopaque) i32 {
        return qtc.QPdfDocumentRenderOptions_RenderFlags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ` r: flag of qpdfdocumentrenderoptions_enums.RenderFlag `
    ///
    pub fn SetRenderFlags(self: ?*anyopaque, r: i32) void {
        qtc.QPdfDocumentRenderOptions_SetRenderFlags(@ptrCast(self), @bitCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn ScaledClipRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPdfDocumentRenderOptions_ScaledClipRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ` r: QtC.QRect `
    ///
    pub fn SetScaledClipRect(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_SetScaledClipRect(@ptrCast(self), @ptrCast(r));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn ScaledSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QPdfDocumentRenderOptions_ScaledSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    /// ` s: QtC.QSize `
    ///
    pub fn SetScaledSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_SetScaledSize(@ptrCast(self), @ptrCast(s));
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
    /// ` self: QtC.QPdfDocumentRenderOptions `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_Delete(@ptrCast(self));
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
