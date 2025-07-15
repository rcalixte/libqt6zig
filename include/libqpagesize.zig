const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpagesize_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpagesize.html
pub const qpagesize = struct {
    /// New constructs a new QPageSize object.
    ///
    ///
    pub fn New() QtC.QPageSize {
        return qtc.QPageSize_new();
    }

    /// New2 constructs a new QPageSize object.
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId ```
    pub fn New2(pageSizeId: i64) QtC.QPageSize {
        return qtc.QPageSize_new2(@intCast(pageSizeId));
    }

    /// New3 constructs a new QPageSize object.
    ///
    /// ``` pointSize: QtC.QSize ```
    pub fn New3(pointSize: ?*anyopaque) QtC.QPageSize {
        return qtc.QPageSize_new3(@ptrCast(pointSize));
    }

    /// New4 constructs a new QPageSize object.
    ///
    /// ``` size: QtC.QSizeF, units: qpagesize_enums.Unit ```
    pub fn New4(size: ?*anyopaque, units: i64) QtC.QPageSize {
        return qtc.QPageSize_new4(@ptrCast(size), @intCast(units));
    }

    /// New5 constructs a new QPageSize object.
    ///
    /// ``` other: QtC.QPageSize ```
    pub fn New5(other: ?*anyopaque) QtC.QPageSize {
        return qtc.QPageSize_new5(@ptrCast(other));
    }

    /// New6 constructs a new QPageSize object.
    ///
    /// ``` pointSize: QtC.QSize, name: []const u8 ```
    pub fn New6(pointSize: ?*anyopaque, name: []const u8) QtC.QPageSize {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QPageSize_new6(@ptrCast(pointSize), name_str);
    }

    /// New7 constructs a new QPageSize object.
    ///
    /// ``` pointSize: QtC.QSize, name: []const u8, matchPolicy: qpagesize_enums.SizeMatchPolicy ```
    pub fn New7(pointSize: ?*anyopaque, name: []const u8, matchPolicy: i64) QtC.QPageSize {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QPageSize_new7(@ptrCast(pointSize), name_str, @intCast(matchPolicy));
    }

    /// New8 constructs a new QPageSize object.
    ///
    /// ``` size: QtC.QSizeF, units: qpagesize_enums.Unit, name: []const u8 ```
    pub fn New8(size: ?*anyopaque, units: i64, name: []const u8) QtC.QPageSize {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QPageSize_new8(@ptrCast(size), @intCast(units), name_str);
    }

    /// New9 constructs a new QPageSize object.
    ///
    /// ``` size: QtC.QSizeF, units: qpagesize_enums.Unit, name: []const u8, matchPolicy: qpagesize_enums.SizeMatchPolicy ```
    pub fn New9(size: ?*anyopaque, units: i64, name: []const u8, matchPolicy: i64) QtC.QPageSize {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QPageSize_new9(@ptrCast(size), @intCast(units), name_str, @intCast(matchPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#operator=)
    ///
    /// ``` self: QtC.QPageSize, other: QtC.QPageSize ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageSize_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#swap)
    ///
    /// ``` self: QtC.QPageSize, other: QtC.QPageSize ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageSize_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#isEquivalentTo)
    ///
    /// ``` self: QtC.QPageSize, other: QtC.QPageSize ```
    pub fn IsEquivalentTo(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPageSize_IsEquivalentTo(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#isValid)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPageSize_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#key)
    ///
    /// ``` self: QtC.QPageSize, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSize_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesize.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#name)
    ///
    /// ``` self: QtC.QPageSize, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSize_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesize.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn Id(self: ?*anyopaque) i64 {
        return qtc.QPageSize_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn WindowsId(self: ?*anyopaque) i32 {
        return qtc.QPageSize_WindowsId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn DefinitionSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QPageSize_DefinitionSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn DefinitionUnits(self: ?*anyopaque) i64 {
        return qtc.QPageSize_DefinitionUnits(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#size)
    ///
    /// ``` self: QtC.QPageSize, units: qpagesize_enums.Unit ```
    pub fn Size(self: ?*anyopaque, units: i64) QtC.QSizeF {
        return qtc.QPageSize_Size(@ptrCast(self), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn SizePoints(self: ?*anyopaque) QtC.QSize {
        return qtc.QPageSize_SizePoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
    ///
    /// ``` self: QtC.QPageSize, resolution: i32 ```
    pub fn SizePixels(self: ?*anyopaque, resolution: i32) QtC.QSize {
        return qtc.QPageSize_SizePixels(@ptrCast(self), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rect)
    ///
    /// ``` self: QtC.QPageSize, units: qpagesize_enums.Unit ```
    pub fn Rect(self: ?*anyopaque, units: i64) QtC.QRectF {
        return qtc.QPageSize_Rect(@ptrCast(self), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rectPoints)
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn RectPoints(self: ?*anyopaque) QtC.QRect {
        return qtc.QPageSize_RectPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#rectPixels)
    ///
    /// ``` self: QtC.QPageSize, resolution: i32 ```
    pub fn RectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageSize_RectPixels(@ptrCast(self), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#key)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId, allocator: std.mem.Allocator ```
    pub fn Key2(pageSizeId: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSize_Key2(@intCast(pageSizeId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesize.Key2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#name)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId, allocator: std.mem.Allocator ```
    pub fn Name2(pageSizeId: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSize_Name2(@intCast(pageSizeId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesize.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ``` pointSize: QtC.QSize ```
    pub fn Id2(pointSize: ?*anyopaque) i64 {
        return qtc.QPageSize_Id2(@ptrCast(pointSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ``` size: QtC.QSizeF, units: qpagesize_enums.Unit ```
    pub fn Id3(size: ?*anyopaque, units: i64) i64 {
        return qtc.QPageSize_Id3(@ptrCast(size), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ``` windowsId: i32 ```
    pub fn Id4(windowsId: i32) i64 {
        return qtc.QPageSize_Id4(@intCast(windowsId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#windowsId)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId ```
    pub fn WindowsId2(pageSizeId: i64) i32 {
        return qtc.QPageSize_WindowsId2(@intCast(pageSizeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionSize)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId ```
    pub fn DefinitionSize2(pageSizeId: i64) QtC.QSizeF {
        return qtc.QPageSize_DefinitionSize2(@intCast(pageSizeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#definitionUnits)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId ```
    pub fn DefinitionUnits2(pageSizeId: i64) i64 {
        return qtc.QPageSize_DefinitionUnits2(@intCast(pageSizeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#size)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId, units: qpagesize_enums.Unit ```
    pub fn Size2(pageSizeId: i64, units: i64) QtC.QSizeF {
        return qtc.QPageSize_Size2(@intCast(pageSizeId), @intCast(units));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePoints)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId ```
    pub fn SizePoints2(pageSizeId: i64) QtC.QSize {
        return qtc.QPageSize_SizePoints2(@intCast(pageSizeId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#sizePixels)
    ///
    /// ``` pageSizeId: qpagesize_enums.PageSizeId, resolution: i32 ```
    pub fn SizePixels2(pageSizeId: i64, resolution: i32) QtC.QSize {
        return qtc.QPageSize_SizePixels2(@intCast(pageSizeId), @intCast(resolution));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ``` pointSize: QtC.QSize, matchPolicy: qpagesize_enums.SizeMatchPolicy ```
    pub fn Id22(pointSize: ?*anyopaque, matchPolicy: i64) i64 {
        return qtc.QPageSize_Id22(@ptrCast(pointSize), @intCast(matchPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#id)
    ///
    /// ``` size: QtC.QSizeF, units: qpagesize_enums.Unit, matchPolicy: qpagesize_enums.SizeMatchPolicy ```
    pub fn Id32(size: ?*anyopaque, units: i64, matchPolicy: i64) i64 {
        return qtc.QPageSize_Id32(@ptrCast(size), @intCast(units), @intCast(matchPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpagesize.html#dtor.QPageSize)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPageSize ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageSize_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpagesize.html#types
pub const enums = struct {
    pub const PageSizeId = enum {
        pub const Letter: i32 = 0;
        pub const Legal: i32 = 1;
        pub const Executive: i32 = 2;
        pub const A0: i32 = 3;
        pub const A1: i32 = 4;
        pub const A2: i32 = 5;
        pub const A3: i32 = 6;
        pub const A4: i32 = 7;
        pub const A5: i32 = 8;
        pub const A6: i32 = 9;
        pub const A7: i32 = 10;
        pub const A8: i32 = 11;
        pub const A9: i32 = 12;
        pub const A10: i32 = 13;
        pub const B0: i32 = 14;
        pub const B1: i32 = 15;
        pub const B2: i32 = 16;
        pub const B3: i32 = 17;
        pub const B4: i32 = 18;
        pub const B5: i32 = 19;
        pub const B6: i32 = 20;
        pub const B7: i32 = 21;
        pub const B8: i32 = 22;
        pub const B9: i32 = 23;
        pub const B10: i32 = 24;
        pub const C5E: i32 = 25;
        pub const Comm10E: i32 = 26;
        pub const DLE: i32 = 27;
        pub const Folio: i32 = 28;
        pub const Ledger: i32 = 29;
        pub const Tabloid: i32 = 30;
        pub const Custom: i32 = 31;
        pub const A3Extra: i32 = 32;
        pub const A4Extra: i32 = 33;
        pub const A4Plus: i32 = 34;
        pub const A4Small: i32 = 35;
        pub const A5Extra: i32 = 36;
        pub const B5Extra: i32 = 37;
        pub const JisB0: i32 = 38;
        pub const JisB1: i32 = 39;
        pub const JisB2: i32 = 40;
        pub const JisB3: i32 = 41;
        pub const JisB4: i32 = 42;
        pub const JisB5: i32 = 43;
        pub const JisB6: i32 = 44;
        pub const JisB7: i32 = 45;
        pub const JisB8: i32 = 46;
        pub const JisB9: i32 = 47;
        pub const JisB10: i32 = 48;
        pub const AnsiC: i32 = 49;
        pub const AnsiD: i32 = 50;
        pub const AnsiE: i32 = 51;
        pub const LegalExtra: i32 = 52;
        pub const LetterExtra: i32 = 53;
        pub const LetterPlus: i32 = 54;
        pub const LetterSmall: i32 = 55;
        pub const TabloidExtra: i32 = 56;
        pub const ArchA: i32 = 57;
        pub const ArchB: i32 = 58;
        pub const ArchC: i32 = 59;
        pub const ArchD: i32 = 60;
        pub const ArchE: i32 = 61;
        pub const Imperial7x9: i32 = 62;
        pub const Imperial8x10: i32 = 63;
        pub const Imperial9x11: i32 = 64;
        pub const Imperial9x12: i32 = 65;
        pub const Imperial10x11: i32 = 66;
        pub const Imperial10x13: i32 = 67;
        pub const Imperial10x14: i32 = 68;
        pub const Imperial12x11: i32 = 69;
        pub const Imperial15x11: i32 = 70;
        pub const ExecutiveStandard: i32 = 71;
        pub const Note: i32 = 72;
        pub const Quarto: i32 = 73;
        pub const Statement: i32 = 74;
        pub const SuperA: i32 = 75;
        pub const SuperB: i32 = 76;
        pub const Postcard: i32 = 77;
        pub const DoublePostcard: i32 = 78;
        pub const Prc16K: i32 = 79;
        pub const Prc32K: i32 = 80;
        pub const Prc32KBig: i32 = 81;
        pub const FanFoldUS: i32 = 82;
        pub const FanFoldGerman: i32 = 83;
        pub const FanFoldGermanLegal: i32 = 84;
        pub const EnvelopeB4: i32 = 85;
        pub const EnvelopeB5: i32 = 86;
        pub const EnvelopeB6: i32 = 87;
        pub const EnvelopeC0: i32 = 88;
        pub const EnvelopeC1: i32 = 89;
        pub const EnvelopeC2: i32 = 90;
        pub const EnvelopeC3: i32 = 91;
        pub const EnvelopeC4: i32 = 92;
        pub const EnvelopeC6: i32 = 93;
        pub const EnvelopeC65: i32 = 94;
        pub const EnvelopeC7: i32 = 95;
        pub const Envelope9: i32 = 96;
        pub const Envelope11: i32 = 97;
        pub const Envelope12: i32 = 98;
        pub const Envelope14: i32 = 99;
        pub const EnvelopeMonarch: i32 = 100;
        pub const EnvelopePersonal: i32 = 101;
        pub const EnvelopeChou3: i32 = 102;
        pub const EnvelopeChou4: i32 = 103;
        pub const EnvelopeInvite: i32 = 104;
        pub const EnvelopeItalian: i32 = 105;
        pub const EnvelopeKaku2: i32 = 106;
        pub const EnvelopeKaku3: i32 = 107;
        pub const EnvelopePrc1: i32 = 108;
        pub const EnvelopePrc2: i32 = 109;
        pub const EnvelopePrc3: i32 = 110;
        pub const EnvelopePrc4: i32 = 111;
        pub const EnvelopePrc5: i32 = 112;
        pub const EnvelopePrc6: i32 = 113;
        pub const EnvelopePrc7: i32 = 114;
        pub const EnvelopePrc8: i32 = 115;
        pub const EnvelopePrc9: i32 = 116;
        pub const EnvelopePrc10: i32 = 117;
        pub const EnvelopeYou4: i32 = 118;
        pub const LastPageSize: i32 = 118;
        pub const AnsiA: i32 = 0;
        pub const AnsiB: i32 = 29;
        pub const EnvelopeC5: i32 = 25;
        pub const EnvelopeDL: i32 = 27;
        pub const Envelope10: i32 = 26;
    };

    pub const Unit = enum {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
    };

    pub const SizeMatchPolicy = enum {
        pub const FuzzyMatch: i32 = 0;
        pub const FuzzyOrientationMatch: i32 = 1;
        pub const ExactMatch: i32 = 2;
    };
};
