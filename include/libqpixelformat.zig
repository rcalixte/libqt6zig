const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpixelformat_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html)
pub const QPixelFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPixelFormat,

    pub const _is_QPixelFormat = {};

    /// New constructs a new QPixelFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn New(other: anytype) QPixelFormat {
        comptime _ = @TypeOf(other)._is_QPixelFormat;
        return .{ .ptr = qtc.QPixelFormat_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPixelFormat object and invalidates the source QPixelFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn New2(other: anytype) QPixelFormat {
        comptime _ = @TypeOf(other)._is_QPixelFormat;
        return .{ .ptr = qtc.QPixelFormat_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPixelFormat object.
    ///
    pub fn New3() QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new3() };
    }

    /// New4 constructs a new QPixelFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` colorModel: qpixelformat_enums.ColorModel `
    ///
    /// ` firstSize: u8 `
    ///
    /// ` secondSize: u8 `
    ///
    /// ` thirdSize: u8 `
    ///
    /// ` fourthSize: u8 `
    ///
    /// ` fifthSize: u8 `
    ///
    /// ` alphaSize: u8 `
    ///
    /// ` alphaUsage: qpixelformat_enums.AlphaUsage `
    ///
    /// ` alphaPosition: qpixelformat_enums.AlphaPosition `
    ///
    /// ` premultiplied: qpixelformat_enums.AlphaPremultiplied `
    ///
    /// ` typeInterpretation: qpixelformat_enums.TypeInterpretation `
    ///
    pub fn New4(colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, alphaSize: u8, alphaUsage: i32, alphaPosition: i32, premultiplied: i32, typeInterpretation: i32) QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new4(@bitCast(colorModel), @bitCast(firstSize), @bitCast(secondSize), @bitCast(thirdSize), @bitCast(fourthSize), @bitCast(fifthSize), @bitCast(alphaSize), @bitCast(alphaUsage), @bitCast(alphaPosition), @bitCast(premultiplied), @bitCast(typeInterpretation)) };
    }

    /// New5 constructs a new QPixelFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPixelFormat `
    ///
    pub fn New5(param1: anytype) QPixelFormat {
        comptime _ = @TypeOf(param1)._is_QPixelFormat;
        return .{ .ptr = qtc.QPixelFormat_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new QPixelFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` colorModel: qpixelformat_enums.ColorModel `
    ///
    /// ` firstSize: u8 `
    ///
    /// ` secondSize: u8 `
    ///
    /// ` thirdSize: u8 `
    ///
    /// ` fourthSize: u8 `
    ///
    /// ` fifthSize: u8 `
    ///
    /// ` alphaSize: u8 `
    ///
    /// ` alphaUsage: qpixelformat_enums.AlphaUsage `
    ///
    /// ` alphaPosition: qpixelformat_enums.AlphaPosition `
    ///
    /// ` premultiplied: qpixelformat_enums.AlphaPremultiplied `
    ///
    /// ` typeInterpretation: qpixelformat_enums.TypeInterpretation `
    ///
    /// ` byteOrder: qpixelformat_enums.ByteOrder `
    ///
    pub fn New6(colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, alphaSize: u8, alphaUsage: i32, alphaPosition: i32, premultiplied: i32, typeInterpretation: i32, byteOrder: i32) QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new6(@bitCast(colorModel), @bitCast(firstSize), @bitCast(secondSize), @bitCast(thirdSize), @bitCast(fourthSize), @bitCast(fifthSize), @bitCast(alphaSize), @bitCast(alphaUsage), @bitCast(alphaPosition), @bitCast(premultiplied), @bitCast(typeInterpretation), @bitCast(byteOrder)) };
    }

    /// New7 constructs a new QPixelFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` colorModel: qpixelformat_enums.ColorModel `
    ///
    /// ` firstSize: u8 `
    ///
    /// ` secondSize: u8 `
    ///
    /// ` thirdSize: u8 `
    ///
    /// ` fourthSize: u8 `
    ///
    /// ` fifthSize: u8 `
    ///
    /// ` alphaSize: u8 `
    ///
    /// ` alphaUsage: qpixelformat_enums.AlphaUsage `
    ///
    /// ` alphaPosition: qpixelformat_enums.AlphaPosition `
    ///
    /// ` premultiplied: qpixelformat_enums.AlphaPremultiplied `
    ///
    /// ` typeInterpretation: qpixelformat_enums.TypeInterpretation `
    ///
    /// ` byteOrder: qpixelformat_enums.ByteOrder `
    ///
    /// ` subEnum: u8 `
    ///
    pub fn New7(colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, alphaSize: u8, alphaUsage: i32, alphaPosition: i32, premultiplied: i32, typeInterpretation: i32, byteOrder: i32, subEnum: u8) QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new7(@bitCast(colorModel), @bitCast(firstSize), @bitCast(secondSize), @bitCast(thirdSize), @bitCast(fourthSize), @bitCast(fifthSize), @bitCast(alphaSize), @bitCast(alphaUsage), @bitCast(alphaPosition), @bitCast(premultiplied), @bitCast(typeInterpretation), @bitCast(byteOrder), @bitCast(subEnum)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixelFormat `
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn CopyAssign(self: QPixelFormat, other: QPixelFormat) void {
        qtc.QPixelFormat_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixelFormat `
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn MoveAssign(self: QPixelFormat, other: QPixelFormat) void {
        qtc.QPixelFormat_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#colorModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.ColorModel `
    ///
    pub fn ColorModel(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_ColorModel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#channelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn ChannelCount(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_ChannelCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#redSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn RedSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_RedSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#greenSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn GreenSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_GreenSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#blueSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn BlueSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BlueSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#cyanSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn CyanSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_CyanSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#magentaSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn MagentaSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_MagentaSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#yellowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn YellowSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_YellowSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#blackSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn BlackSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BlackSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#hueSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn HueSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_HueSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#saturationSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn SaturationSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_SaturationSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#lightnessSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn LightnessSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_LightnessSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#brightnessSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn BrightnessSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BrightnessSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#alphaSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn AlphaSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_AlphaSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#bitsPerPixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn BitsPerPixel(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BitsPerPixel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#alphaUsage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.AlphaUsage `
    ///
    pub fn AlphaUsage(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_AlphaUsage(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#alphaPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.AlphaPosition `
    ///
    pub fn AlphaPosition(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_AlphaPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#premultiplied)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.AlphaPremultiplied `
    ///
    pub fn Premultiplied(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_Premultiplied(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#typeInterpretation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.TypeInterpretation `
    ///
    pub fn TypeInterpretation(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_TypeInterpretation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#byteOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.ByteOrder `
    ///
    pub fn ByteOrder(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_ByteOrder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#yuvLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    /// ## Returns:
    ///
    /// ` qpixelformat_enums.YUVLayout `
    ///
    pub fn YuvLayout(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_YuvLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#subEnum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn SubEnum(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_SubEnum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#dtor.QPixelFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn Delete(self: QPixelFormat) void {
        qtc.QPixelFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#public-types)
pub const enums = struct {
    pub const ColorModel = enum(i32) {
        pub const RGB: i32 = 0;
        pub const BGR: i32 = 1;
        pub const Indexed: i32 = 2;
        pub const Grayscale: i32 = 3;
        pub const CMYK: i32 = 4;
        pub const HSL: i32 = 5;
        pub const HSV: i32 = 6;
        pub const YUV: i32 = 7;
        pub const Alpha: i32 = 8;
    };

    pub const AlphaUsage = enum(i32) {
        pub const UsesAlpha: i32 = 0;
        pub const IgnoresAlpha: i32 = 1;
    };

    pub const AlphaPosition = enum(i32) {
        pub const AtBeginning: i32 = 0;
        pub const AtEnd: i32 = 1;
    };

    pub const AlphaPremultiplied = enum(i32) {
        pub const NotPremultiplied: i32 = 0;
        pub const Premultiplied: i32 = 1;
    };

    pub const TypeInterpretation = enum(i32) {
        pub const UnsignedInteger: i32 = 0;
        pub const UnsignedShort: i32 = 1;
        pub const UnsignedByte: i32 = 2;
        pub const FloatingPoint: i32 = 3;
    };

    pub const YUVLayout = enum(i32) {
        pub const YUV444: i32 = 0;
        pub const YUV422: i32 = 1;
        pub const YUV411: i32 = 2;
        pub const YUV420P: i32 = 3;
        pub const YUV420SP: i32 = 4;
        pub const YV12: i32 = 5;
        pub const UYVY: i32 = 6;
        pub const YUYV: i32 = 7;
        pub const NV12: i32 = 8;
        pub const NV21: i32 = 9;
        pub const IMC1: i32 = 10;
        pub const IMC2: i32 = 11;
        pub const IMC3: i32 = 12;
        pub const IMC4: i32 = 13;
        pub const Y8: i32 = 14;
        pub const Y16: i32 = 15;
    };

    pub const ByteOrder = enum(i32) {
        pub const LittleEndian: i32 = 0;
        pub const BigEndian: i32 = 1;
        pub const CurrentSystemEndian: i32 = 2;
    };
};
