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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPixelFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn new(other: anytype) QPixelFormat {
        comptime _ = @TypeOf(other)._is_QPixelFormat;
        return .{ .ptr = qtc.QPixelFormat_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPixelFormat object and invalidate the source QPixelFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn new2(other: anytype) QPixelFormat {
        comptime _ = @TypeOf(other)._is_QPixelFormat;
        return .{ .ptr = qtc.QPixelFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPixelFormat object in C++ memory
    ///
    pub fn new3() QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPixelFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _colorModel: qpixelformat_enums.ColorModel `
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
    /// ` _alphaSize: u8 `
    ///
    /// ` _alphaUsage: qpixelformat_enums.AlphaUsage `
    ///
    /// ` _alphaPosition: qpixelformat_enums.AlphaPosition `
    ///
    /// ` _premultiplied: qpixelformat_enums.AlphaPremultiplied `
    ///
    /// ` _typeInterpretation: qpixelformat_enums.TypeInterpretation `
    ///
    pub fn new4(_colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, _alphaSize: u8, _alphaUsage: i32, _alphaPosition: i32, _premultiplied: i32, _typeInterpretation: i32) QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new4(@bitCast(_colorModel), @bitCast(firstSize), @bitCast(secondSize), @bitCast(thirdSize), @bitCast(fourthSize), @bitCast(fifthSize), @bitCast(_alphaSize), @bitCast(_alphaUsage), @bitCast(_alphaPosition), @bitCast(_premultiplied), @bitCast(_typeInterpretation)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPixelFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPixelFormat `
    ///
    pub fn new5(param1: anytype) QPixelFormat {
        comptime _ = @TypeOf(param1)._is_QPixelFormat;
        return .{ .ptr = qtc.QPixelFormat_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPixelFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _colorModel: qpixelformat_enums.ColorModel `
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
    /// ` _alphaSize: u8 `
    ///
    /// ` _alphaUsage: qpixelformat_enums.AlphaUsage `
    ///
    /// ` _alphaPosition: qpixelformat_enums.AlphaPosition `
    ///
    /// ` _premultiplied: qpixelformat_enums.AlphaPremultiplied `
    ///
    /// ` _typeInterpretation: qpixelformat_enums.TypeInterpretation `
    ///
    /// ` _byteOrder: qpixelformat_enums.ByteOrder `
    ///
    pub fn new6(_colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, _alphaSize: u8, _alphaUsage: i32, _alphaPosition: i32, _premultiplied: i32, _typeInterpretation: i32, _byteOrder: i32) QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new6(@bitCast(_colorModel), @bitCast(firstSize), @bitCast(secondSize), @bitCast(thirdSize), @bitCast(fourthSize), @bitCast(fifthSize), @bitCast(_alphaSize), @bitCast(_alphaUsage), @bitCast(_alphaPosition), @bitCast(_premultiplied), @bitCast(_typeInterpretation), @bitCast(_byteOrder)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QPixelFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _colorModel: qpixelformat_enums.ColorModel `
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
    /// ` _alphaSize: u8 `
    ///
    /// ` _alphaUsage: qpixelformat_enums.AlphaUsage `
    ///
    /// ` _alphaPosition: qpixelformat_enums.AlphaPosition `
    ///
    /// ` _premultiplied: qpixelformat_enums.AlphaPremultiplied `
    ///
    /// ` _typeInterpretation: qpixelformat_enums.TypeInterpretation `
    ///
    /// ` _byteOrder: qpixelformat_enums.ByteOrder `
    ///
    /// ` _subEnum: u8 `
    ///
    pub fn new7(_colorModel: i32, firstSize: u8, secondSize: u8, thirdSize: u8, fourthSize: u8, fifthSize: u8, _alphaSize: u8, _alphaUsage: i32, _alphaPosition: i32, _premultiplied: i32, _typeInterpretation: i32, _byteOrder: i32, _subEnum: u8) QPixelFormat {
        return .{ .ptr = qtc.QPixelFormat_new7(@bitCast(_colorModel), @bitCast(firstSize), @bitCast(secondSize), @bitCast(thirdSize), @bitCast(fourthSize), @bitCast(fifthSize), @bitCast(_alphaSize), @bitCast(_alphaUsage), @bitCast(_alphaPosition), @bitCast(_premultiplied), @bitCast(_typeInterpretation), @bitCast(_byteOrder), @bitCast(_subEnum)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixelFormat `
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn copyAssign(self: QPixelFormat, other: QPixelFormat) void {
        qtc.QPixelFormat_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPixelFormat `
    ///
    /// ` other: QPixelFormat `
    ///
    pub fn moveAssign(self: QPixelFormat, other: QPixelFormat) void {
        qtc.QPixelFormat_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `colorModel` instead
    ///
    pub const ColorModel = colorModel;

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
    pub fn colorModel(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_ColorModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `channelCount` instead
    ///
    pub const ChannelCount = channelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#channelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn channelCount(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_ChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redSize` instead
    ///
    pub const RedSize = redSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#redSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn redSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_RedSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `greenSize` instead
    ///
    pub const GreenSize = greenSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#greenSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn greenSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_GreenSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blueSize` instead
    ///
    pub const BlueSize = blueSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#blueSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn blueSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BlueSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cyanSize` instead
    ///
    pub const CyanSize = cyanSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#cyanSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn cyanSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_CyanSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `magentaSize` instead
    ///
    pub const MagentaSize = magentaSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#magentaSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn magentaSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_MagentaSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yellowSize` instead
    ///
    pub const YellowSize = yellowSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#yellowSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn yellowSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_YellowSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blackSize` instead
    ///
    pub const BlackSize = blackSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#blackSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn blackSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BlackSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hueSize` instead
    ///
    pub const HueSize = hueSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#hueSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn hueSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_HueSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saturationSize` instead
    ///
    pub const SaturationSize = saturationSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#saturationSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn saturationSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_SaturationSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lightnessSize` instead
    ///
    pub const LightnessSize = lightnessSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#lightnessSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn lightnessSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_LightnessSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `brightnessSize` instead
    ///
    pub const BrightnessSize = brightnessSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#brightnessSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn brightnessSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BrightnessSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alphaSize` instead
    ///
    pub const AlphaSize = alphaSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#alphaSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn alphaSize(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_AlphaSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bitsPerPixel` instead
    ///
    pub const BitsPerPixel = bitsPerPixel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#bitsPerPixel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn bitsPerPixel(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_BitsPerPixel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alphaUsage` instead
    ///
    pub const AlphaUsage = alphaUsage;

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
    pub fn alphaUsage(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_AlphaUsage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alphaPosition` instead
    ///
    pub const AlphaPosition = alphaPosition;

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
    pub fn alphaPosition(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_AlphaPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `premultiplied` instead
    ///
    pub const Premultiplied = premultiplied;

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
    pub fn premultiplied(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_Premultiplied(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typeInterpretation` instead
    ///
    pub const TypeInterpretation = typeInterpretation;

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
    pub fn typeInterpretation(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_TypeInterpretation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `byteOrder` instead
    ///
    pub const ByteOrder = byteOrder;

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
    pub fn byteOrder(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_ByteOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yuvLayout` instead
    ///
    pub const YuvLayout = yuvLayout;

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
    pub fn yuvLayout(self: QPixelFormat) i32 {
        return qtc.QPixelFormat_YuvLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `subEnum` instead
    ///
    pub const SubEnum = subEnum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#subEnum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn subEnum(self: QPixelFormat) u8 {
        return qtc.QPixelFormat_SubEnum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpixelformat.html#dtor.QPixelFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPixelFormat `
    ///
    pub fn delete(self: QPixelFormat) void {
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
