const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpdfdocumentrenderoptions_enums = enums;

/// https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html
pub const qpdfdocumentrenderoptions = struct {
    /// New constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ``` other: QtC.QPdfDocumentRenderOptions ```
    pub fn New(other: ?*anyopaque) QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new(@ptrCast(other));
    }

    /// New2 constructs a new QPdfDocumentRenderOptions object and invalidates the source QPdfDocumentRenderOptions object.
    ///
    /// ``` other: QtC.QPdfDocumentRenderOptions ```
    pub fn New2(other: ?*anyopaque) QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPdfDocumentRenderOptions object.
    ///
    ///
    pub fn New3() QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new3();
    }

    /// New4 constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ``` param1: QtC.QPdfDocumentRenderOptions ```
    pub fn New4(param1: ?*anyopaque) QtC.QPdfDocumentRenderOptions {
        return qtc.QPdfDocumentRenderOptions_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions, other: QtC.QPdfDocumentRenderOptions ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions, other: QtC.QPdfDocumentRenderOptions ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#rotation)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions ```
    ///
    /// Returns: ``` qpdfdocumentrenderoptions_enums.Rotation ```
    pub fn Rotation(self: ?*anyopaque) i64 {
        return qtc.QPdfDocumentRenderOptions_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions, r: qpdfdocumentrenderoptions_enums.Rotation ```
    pub fn SetRotation(self: ?*anyopaque, r: i64) void {
        qtc.QPdfDocumentRenderOptions_SetRotation(@ptrCast(self), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#renderFlags)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions ```
    ///
    /// Returns: ``` flag of qpdfdocumentrenderoptions_enums.RenderFlag ```
    pub fn RenderFlags(self: ?*anyopaque) i64 {
        return qtc.QPdfDocumentRenderOptions_RenderFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions, r: flag of qpdfdocumentrenderoptions_enums.RenderFlag ```
    pub fn SetRenderFlags(self: ?*anyopaque, r: i64) void {
        qtc.QPdfDocumentRenderOptions_SetRenderFlags(@ptrCast(self), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions ```
    pub fn ScaledClipRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QPdfDocumentRenderOptions_ScaledClipRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions, r: QtC.QRect ```
    pub fn SetScaledClipRect(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_SetScaledClipRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions ```
    pub fn ScaledSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QPdfDocumentRenderOptions_ScaledSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions, s: QtC.QSize ```
    pub fn SetScaledSize(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_SetScaledSize(@ptrCast(self), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#dtor.QPdfDocumentRenderOptions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPdfDocumentRenderOptions ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfDocumentRenderOptions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#types
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
