const C = @import("qt6c");
const qpdfdocumentrenderoptions_enums = enums;

/// https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html
pub const qpdfdocumentrenderoptions = struct {
    /// New constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ``` other: ?*C.QPdfDocumentRenderOptions ```
    pub fn New(other: ?*anyopaque) ?*C.QPdfDocumentRenderOptions {
        return C.QPdfDocumentRenderOptions_new(@ptrCast(other));
    }

    /// New2 constructs a new QPdfDocumentRenderOptions object and invalidates the source QPdfDocumentRenderOptions object.
    ///
    /// ``` other: ?*C.QPdfDocumentRenderOptions ```
    pub fn New2(other: ?*anyopaque) ?*C.QPdfDocumentRenderOptions {
        return C.QPdfDocumentRenderOptions_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPdfDocumentRenderOptions object.
    ///
    ///
    pub fn New3() ?*C.QPdfDocumentRenderOptions {
        return C.QPdfDocumentRenderOptions_new3();
    }

    /// New4 constructs a new QPdfDocumentRenderOptions object.
    ///
    /// ``` param1: ?*C.QPdfDocumentRenderOptions ```
    pub fn New4(param1: ?*anyopaque) ?*C.QPdfDocumentRenderOptions {
        return C.QPdfDocumentRenderOptions_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QPdfDocumentRenderOptions, other: ?*QPdfDocumentRenderOptions ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPdfDocumentRenderOptions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QPdfDocumentRenderOptions, other: ?*QPdfDocumentRenderOptions ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPdfDocumentRenderOptions_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#rotation)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions ```
    pub fn Rotation(self: ?*anyopaque) i64 {
        return C.QPdfDocumentRenderOptions_Rotation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions, r: qpdfdocumentrenderoptions_enums.Rotation ```
    pub fn SetRotation(self: ?*anyopaque, r: i64) void {
        C.QPdfDocumentRenderOptions_SetRotation(@ptrCast(self), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#renderFlags)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions ```
    pub fn RenderFlags(self: ?*anyopaque) i64 {
        return C.QPdfDocumentRenderOptions_RenderFlags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions, r: i32 ```
    pub fn SetRenderFlags(self: ?*anyopaque, r: i64) void {
        C.QPdfDocumentRenderOptions_SetRenderFlags(@ptrCast(self), @intCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions ```
    pub fn ScaledClipRect(self: ?*anyopaque) ?*C.QRect {
        return C.QPdfDocumentRenderOptions_ScaledClipRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions, r: ?*C.QRect ```
    pub fn SetScaledClipRect(self: ?*anyopaque, r: ?*anyopaque) void {
        C.QPdfDocumentRenderOptions_SetScaledClipRect(@ptrCast(self), @ptrCast(r));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions ```
    pub fn ScaledSize(self: ?*anyopaque) ?*C.QSize {
        return C.QPdfDocumentRenderOptions_ScaledSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions, s: ?*C.QSize ```
    pub fn SetScaledSize(self: ?*anyopaque, s: ?*anyopaque) void {
        C.QPdfDocumentRenderOptions_SetScaledSize(@ptrCast(self), @ptrCast(s));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPdfDocumentRenderOptions ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPdfDocumentRenderOptions_Delete(@ptrCast(self));
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
