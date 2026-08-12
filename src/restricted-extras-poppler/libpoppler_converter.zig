const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QColor = @import("libqt6").QColor;
const QIODevice = @import("libqt6").QIODevice;
const QRectF = @import("libqt6").QRectF;
const poppler_converter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
pub const Poppler__BaseConverter = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__BaseConverter,

    pub const _is_Poppler__BaseConverter = {};

    /// ### DEPRECATED: Use `setOutputFileName` instead
    ///
    pub const SetOutputFileName = setOutputFileName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn setOutputFileName(self: Poppler__BaseConverter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### DEPRECATED: Use `setOutputDevice` instead
    ///
    pub const SetOutputDevice = setOutputDevice;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn setOutputDevice(self: Poppler__BaseConverter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `convert` instead
    ///
    pub const Convert = convert;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    pub fn convert(self: Poppler__BaseConverter) bool {
        return qtc.Poppler__BaseConverter_Convert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    /// ## Returns:
    ///
    /// ` poppler_converter_enums.Error `
    ///
    pub fn lastError(self: Poppler__BaseConverter) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    pub fn delete(self: Poppler__BaseConverter) void {
        qtc.Poppler__BaseConverter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
pub const Poppler__PSConverter = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__PSConverter,

    pub const _is_Poppler__PSConverter = {};
    pub const _is_Poppler__BaseConverter = {};

    /// ### DEPRECATED: Use `setPageList` instead
    ///
    pub const SetPageList = setPageList;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` pageList: []i32 `
    ///
    pub fn setPageList(self: Poppler__PSConverter, pageList: []i32) void {
        const pageList_list = qtc.libqt_list{
            .len = pageList.len,
            .data = pageList.ptr,
        };
        qtc.Poppler__PSConverter_SetPageList(@ptrCast(self.ptr), pageList_list);
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setTitle(self: Poppler__PSConverter, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__PSConverter_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `setHDPI` instead
    ///
    pub const SetHDPI = setHDPI;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` hDPI: f64 `
    ///
    pub fn setHDPI(self: Poppler__PSConverter, hDPI: f64) void {
        qtc.Poppler__PSConverter_SetHDPI(@ptrCast(self.ptr), @bitCast(hDPI));
    }

    /// ### DEPRECATED: Use `setVDPI` instead
    ///
    pub const SetVDPI = setVDPI;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` vDPI: f64 `
    ///
    pub fn setVDPI(self: Poppler__PSConverter, vDPI: f64) void {
        qtc.Poppler__PSConverter_SetVDPI(@ptrCast(self.ptr), @bitCast(vDPI));
    }

    /// ### DEPRECATED: Use `setRotate` instead
    ///
    pub const SetRotate = setRotate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` rotate: i32 `
    ///
    pub fn setRotate(self: Poppler__PSConverter, rotate: i32) void {
        qtc.Poppler__PSConverter_SetRotate(@ptrCast(self.ptr), @bitCast(rotate));
    }

    /// ### DEPRECATED: Use `setPaperWidth` instead
    ///
    pub const SetPaperWidth = setPaperWidth;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` paperWidth: i32 `
    ///
    pub fn setPaperWidth(self: Poppler__PSConverter, paperWidth: i32) void {
        qtc.Poppler__PSConverter_SetPaperWidth(@ptrCast(self.ptr), @bitCast(paperWidth));
    }

    /// ### DEPRECATED: Use `setPaperHeight` instead
    ///
    pub const SetPaperHeight = setPaperHeight;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` paperHeight: i32 `
    ///
    pub fn setPaperHeight(self: Poppler__PSConverter, paperHeight: i32) void {
        qtc.Poppler__PSConverter_SetPaperHeight(@ptrCast(self.ptr), @bitCast(paperHeight));
    }

    /// ### DEPRECATED: Use `setRightMargin` instead
    ///
    pub const SetRightMargin = setRightMargin;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginRight: i32 `
    ///
    pub fn setRightMargin(self: Poppler__PSConverter, marginRight: i32) void {
        qtc.Poppler__PSConverter_SetRightMargin(@ptrCast(self.ptr), @bitCast(marginRight));
    }

    /// ### DEPRECATED: Use `setBottomMargin` instead
    ///
    pub const SetBottomMargin = setBottomMargin;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginBottom: i32 `
    ///
    pub fn setBottomMargin(self: Poppler__PSConverter, marginBottom: i32) void {
        qtc.Poppler__PSConverter_SetBottomMargin(@ptrCast(self.ptr), @bitCast(marginBottom));
    }

    /// ### DEPRECATED: Use `setLeftMargin` instead
    ///
    pub const SetLeftMargin = setLeftMargin;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginLeft: i32 `
    ///
    pub fn setLeftMargin(self: Poppler__PSConverter, marginLeft: i32) void {
        qtc.Poppler__PSConverter_SetLeftMargin(@ptrCast(self.ptr), @bitCast(marginLeft));
    }

    /// ### DEPRECATED: Use `setTopMargin` instead
    ///
    pub const SetTopMargin = setTopMargin;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginTop: i32 `
    ///
    pub fn setTopMargin(self: Poppler__PSConverter, marginTop: i32) void {
        qtc.Poppler__PSConverter_SetTopMargin(@ptrCast(self.ptr), @bitCast(marginTop));
    }

    /// ### DEPRECATED: Use `setStrictMargins` instead
    ///
    pub const SetStrictMargins = setStrictMargins;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` strictMargins: bool `
    ///
    pub fn setStrictMargins(self: Poppler__PSConverter, strictMargins: bool) void {
        qtc.Poppler__PSConverter_SetStrictMargins(@ptrCast(self.ptr), strictMargins);
    }

    /// ### DEPRECATED: Use `setForceOverprintPreview` instead
    ///
    pub const SetForceOverprintPreview = setForceOverprintPreview;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` forceOverprintPreview: bool `
    ///
    pub fn setForceOverprintPreview(self: Poppler__PSConverter, forceOverprintPreview: bool) void {
        qtc.Poppler__PSConverter_SetForceOverprintPreview(@ptrCast(self.ptr), forceOverprintPreview);
    }

    /// ### DEPRECATED: Use `setForceRasterize` instead
    ///
    pub const SetForceRasterize = setForceRasterize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` forceRasterize: bool `
    ///
    pub fn setForceRasterize(self: Poppler__PSConverter, forceRasterize: bool) void {
        qtc.Poppler__PSConverter_SetForceRasterize(@ptrCast(self.ptr), forceRasterize);
    }

    /// ### DEPRECATED: Use `setPSOptions` instead
    ///
    pub const SetPSOptions = setPSOptions;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` options: flag of poppler_converter_enums.PSOption `
    ///
    pub fn setPSOptions(self: Poppler__PSConverter, options: i32) void {
        qtc.Poppler__PSConverter_SetPSOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `psOptions` instead
    ///
    pub const PsOptions = psOptions;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_converter_enums.PSOption `
    ///
    pub fn psOptions(self: Poppler__PSConverter) i32 {
        return qtc.Poppler__PSConverter_PsOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `convert` instead
    ///
    pub const Convert = convert;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    pub fn convert(self: Poppler__PSConverter) bool {
        return qtc.Poppler__PSConverter_Convert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOutputFileName` instead
    ///
    pub const SetOutputFileName = setOutputFileName;

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn setOutputFileName(self: Poppler__PSConverter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### DEPRECATED: Use `setOutputDevice` instead
    ///
    pub const SetOutputDevice = setOutputDevice;

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn setOutputDevice(self: Poppler__PSConverter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ## Returns:
    ///
    /// ` poppler_converter_enums.Error `
    ///
    pub fn lastError(self: Poppler__PSConverter) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PSConverter `
    ///
    pub fn delete(self: Poppler__PSConverter) void {
        qtc.Poppler__PSConverter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
pub const Poppler__PDFConverter = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__PDFConverter,

    pub const _is_Poppler__PDFConverter = {};
    pub const _is_Poppler__BaseConverter = {};

    /// ### DEPRECATED: Use `setPDFOptions` instead
    ///
    pub const SetPDFOptions = setPDFOptions;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ` options: flag of poppler_converter_enums.PDFOption `
    ///
    pub fn setPDFOptions(self: Poppler__PDFConverter, options: i32) void {
        qtc.Poppler__PDFConverter_SetPDFOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `pdfOptions` instead
    ///
    pub const PdfOptions = pdfOptions;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_converter_enums.PDFOption `
    ///
    pub fn pdfOptions(self: Poppler__PDFConverter) i32 {
        return qtc.Poppler__PDFConverter_PdfOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sign` instead
    ///
    pub const Sign = sign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ` data: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn sign(self: Poppler__PDFConverter, data: anytype) bool {
        comptime _ = @TypeOf(data)._is_Poppler__PDFConverter__NewSignatureData;
        return qtc.Poppler__PDFConverter_Sign(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `convert` instead
    ///
    pub const Convert = convert;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    pub fn convert(self: Poppler__PDFConverter) bool {
        return qtc.Poppler__PDFConverter_Convert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOutputFileName` instead
    ///
    pub const SetOutputFileName = setOutputFileName;

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn setOutputFileName(self: Poppler__PDFConverter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### DEPRECATED: Use `setOutputDevice` instead
    ///
    pub const SetOutputDevice = setOutputDevice;

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn setOutputDevice(self: Poppler__PDFConverter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ## Returns:
    ///
    /// ` poppler_converter_enums.Error `
    ///
    pub fn lastError(self: Poppler__PDFConverter) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    pub fn delete(self: Poppler__PDFConverter) void {
        qtc.Poppler__PDFConverter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
pub const Poppler__PDFConverter__NewSignatureData = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__PDFConverter__NewSignatureData,

    pub const _is_Poppler__PDFConverter__NewSignatureData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::PDFConverter::NewSignatureData object in C++ memory
    ///
    pub fn new() Poppler__PDFConverter__NewSignatureData {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_new() };
    }

    /// ### DEPRECATED: Use `certNickname` instead
    ///
    pub const CertNickname = certNickname;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn certNickname(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_CertNickname(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.certNickname: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCertNickname` instead
    ///
    pub const SetCertNickname = setCertNickname;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _certNickname: []const u8 `
    ///
    pub fn setCertNickname(self: Poppler__PDFConverter__NewSignatureData, _certNickname: []const u8) void {
        const certNickname_str = qtc.libqt_string{
            .len = _certNickname.len,
            .data = _certNickname.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetCertNickname(@ptrCast(self.ptr), certNickname_str);
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: Poppler__PDFConverter__NewSignatureData, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn page(self: Poppler__PDFConverter__NewSignatureData) i32 {
        return qtc.Poppler__PDFConverter__NewSignatureData_Page(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPage` instead
    ///
    pub const SetPage = setPage;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _page: i32 `
    ///
    pub fn setPage(self: Poppler__PDFConverter__NewSignatureData, _page: i32) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetPage(@ptrCast(self.ptr), @bitCast(_page));
    }

    /// ### DEPRECATED: Use `boundingRectangle` instead
    ///
    pub const BoundingRectangle = boundingRectangle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn boundingRectangle(self: Poppler__PDFConverter__NewSignatureData) QRectF {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_BoundingRectangle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundingRectangle` instead
    ///
    pub const SetBoundingRectangle = setBoundingRectangle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setBoundingRectangle(self: Poppler__PDFConverter__NewSignatureData, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.Poppler__PDFConverter__NewSignatureData_SetBoundingRectangle(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `signatureText` instead
    ///
    pub const SignatureText = signatureText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signatureText(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_SignatureText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.signatureText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSignatureText` instead
    ///
    pub const SetSignatureText = setSignatureText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setSignatureText(self: Poppler__PDFConverter__NewSignatureData, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetSignatureText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `signatureLeftText` instead
    ///
    pub const SignatureLeftText = signatureLeftText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn signatureLeftText(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_SignatureLeftText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.signatureLeftText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSignatureLeftText` instead
    ///
    pub const SetSignatureLeftText = setSignatureLeftText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setSignatureLeftText(self: Poppler__PDFConverter__NewSignatureData, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetSignatureLeftText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn reason(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Reason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.reason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setReason` instead
    ///
    pub const SetReason = setReason;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _reason: []const u8 `
    ///
    pub fn setReason(self: Poppler__PDFConverter__NewSignatureData, _reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = _reason.len,
            .data = _reason.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetReason(@ptrCast(self.ptr), reason_str);
    }

    /// ### DEPRECATED: Use `location` instead
    ///
    pub const Location = location;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn location(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Location(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocation` instead
    ///
    pub const SetLocation = setLocation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _location: []const u8 `
    ///
    pub fn setLocation(self: Poppler__PDFConverter__NewSignatureData, _location: []const u8) void {
        const location_str = qtc.libqt_string{
            .len = _location.len,
            .data = _location.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetLocation(@ptrCast(self.ptr), location_str);
    }

    /// ### DEPRECATED: Use `fontSize` instead
    ///
    pub const FontSize = fontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn fontSize(self: Poppler__PDFConverter__NewSignatureData) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_FontSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontSize` instead
    ///
    pub const SetFontSize = setFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _fontSize: f64 `
    ///
    pub fn setFontSize(self: Poppler__PDFConverter__NewSignatureData, _fontSize: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetFontSize(@ptrCast(self.ptr), @bitCast(_fontSize));
    }

    /// ### DEPRECATED: Use `leftFontSize` instead
    ///
    pub const LeftFontSize = leftFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn leftFontSize(self: Poppler__PDFConverter__NewSignatureData) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_LeftFontSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftFontSize` instead
    ///
    pub const SetLeftFontSize = setLeftFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _fontSize: f64 `
    ///
    pub fn setLeftFontSize(self: Poppler__PDFConverter__NewSignatureData, _fontSize: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetLeftFontSize(@ptrCast(self.ptr), @bitCast(_fontSize));
    }

    /// ### DEPRECATED: Use `fontColor` instead
    ///
    pub const FontColor = fontColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn fontColor(self: Poppler__PDFConverter__NewSignatureData) QColor {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_FontColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontColor` instead
    ///
    pub const SetFontColor = setFontColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QColor `
    ///
    pub fn setFontColor(self: Poppler__PDFConverter__NewSignatureData, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__PDFConverter__NewSignatureData_SetFontColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn borderColor(self: Poppler__PDFConverter__NewSignatureData) QColor {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QColor `
    ///
    pub fn setBorderColor(self: Poppler__PDFConverter__NewSignatureData, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__PDFConverter__NewSignatureData_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `borderWidth` instead
    ///
    pub const BorderWidth = borderWidth;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn borderWidth(self: Poppler__PDFConverter__NewSignatureData) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_BorderWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderWidth` instead
    ///
    pub const SetBorderWidth = setBorderWidth;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` width: f64 `
    ///
    pub fn setBorderWidth(self: Poppler__PDFConverter__NewSignatureData, width: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetBorderWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn backgroundColor(self: Poppler__PDFConverter__NewSignatureData) QColor {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: Poppler__PDFConverter__NewSignatureData, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__PDFConverter__NewSignatureData_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `fieldPartialName` instead
    ///
    pub const FieldPartialName = fieldPartialName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fieldPartialName(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_FieldPartialName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.fieldPartialName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFieldPartialName` instead
    ///
    pub const SetFieldPartialName = setFieldPartialName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setFieldPartialName(self: Poppler__PDFConverter__NewSignatureData, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetFieldPartialName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `documentOwnerPassword` instead
    ///
    pub const DocumentOwnerPassword = documentOwnerPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentOwnerPassword(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__PDFConverter__NewSignatureData_DocumentOwnerPassword(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__PDFConverter__NewSignatureData.documentOwnerPassword: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocumentOwnerPassword` instead
    ///
    pub const SetDocumentOwnerPassword = setDocumentOwnerPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _password: []u8 `
    ///
    pub fn setDocumentOwnerPassword(self: Poppler__PDFConverter__NewSignatureData, _password: []u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetDocumentOwnerPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `documentUserPassword` instead
    ///
    pub const DocumentUserPassword = documentUserPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentUserPassword(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__PDFConverter__NewSignatureData_DocumentUserPassword(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Poppler__PDFConverter__NewSignatureData.documentUserPassword: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocumentUserPassword` instead
    ///
    pub const SetDocumentUserPassword = setDocumentUserPassword;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` _password: []u8 `
    ///
    pub fn setDocumentUserPassword(self: Poppler__PDFConverter__NewSignatureData, _password: []u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetDocumentUserPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `imagePath` instead
    ///
    pub const ImagePath = imagePath;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn imagePath(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__PDFConverter__NewSignatureData.imagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setImagePath` instead
    ///
    pub const SetImagePath = setImagePath;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setImagePath(self: Poppler__PDFConverter__NewSignatureData, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetImagePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn delete(self: Poppler__PDFConverter__NewSignatureData) void {
        qtc.Poppler__PDFConverter__NewSignatureData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const FileLockedError: i32 = 1;
        pub const OpenOutputError: i32 = 2;
        pub const NotSupportedInputFileError: i32 = 3;
    };

    pub const PSOption = enum(i32) {
        pub const Printing: i32 = 1;
        pub const StrictMargins: i32 = 2;
        pub const ForceRasterization: i32 = 4;
        pub const PrintToEPS: i32 = 8;
        pub const HideAnnotations: i32 = 16;
        pub const ForceOverprintPreview: i32 = 32;
    };

    pub const PDFOption = enum(i32) {
        pub const WithChanges: i32 = 1;
    };
};
