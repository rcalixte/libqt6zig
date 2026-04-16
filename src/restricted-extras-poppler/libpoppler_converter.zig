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

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: Poppler__BaseConverter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetOutputDevice(self: Poppler__BaseConverter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    pub fn Convert(self: Poppler__BaseConverter) bool {
        return qtc.Poppler__BaseConverter_Convert(@ptrCast(self.ptr));
    }

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
    pub fn LastError(self: Poppler__BaseConverter) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__BaseConverter `
    ///
    pub fn Delete(self: Poppler__BaseConverter) void {
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

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` pageList: []i32 `
    ///
    pub fn SetPageList(self: Poppler__PSConverter, pageList: []i32) void {
        const pageList_list = qtc.libqt_list{
            .len = pageList.len,
            .data = pageList.ptr,
        };
        qtc.Poppler__PSConverter_SetPageList(@ptrCast(self.ptr), pageList_list);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: Poppler__PSConverter, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__PSConverter_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` hDPI: f64 `
    ///
    pub fn SetHDPI(self: Poppler__PSConverter, hDPI: f64) void {
        qtc.Poppler__PSConverter_SetHDPI(@ptrCast(self.ptr), @bitCast(hDPI));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` vDPI: f64 `
    ///
    pub fn SetVDPI(self: Poppler__PSConverter, vDPI: f64) void {
        qtc.Poppler__PSConverter_SetVDPI(@ptrCast(self.ptr), @bitCast(vDPI));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` rotate: i32 `
    ///
    pub fn SetRotate(self: Poppler__PSConverter, rotate: i32) void {
        qtc.Poppler__PSConverter_SetRotate(@ptrCast(self.ptr), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` paperWidth: i32 `
    ///
    pub fn SetPaperWidth(self: Poppler__PSConverter, paperWidth: i32) void {
        qtc.Poppler__PSConverter_SetPaperWidth(@ptrCast(self.ptr), @bitCast(paperWidth));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` paperHeight: i32 `
    ///
    pub fn SetPaperHeight(self: Poppler__PSConverter, paperHeight: i32) void {
        qtc.Poppler__PSConverter_SetPaperHeight(@ptrCast(self.ptr), @bitCast(paperHeight));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginRight: i32 `
    ///
    pub fn SetRightMargin(self: Poppler__PSConverter, marginRight: i32) void {
        qtc.Poppler__PSConverter_SetRightMargin(@ptrCast(self.ptr), @bitCast(marginRight));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginBottom: i32 `
    ///
    pub fn SetBottomMargin(self: Poppler__PSConverter, marginBottom: i32) void {
        qtc.Poppler__PSConverter_SetBottomMargin(@ptrCast(self.ptr), @bitCast(marginBottom));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginLeft: i32 `
    ///
    pub fn SetLeftMargin(self: Poppler__PSConverter, marginLeft: i32) void {
        qtc.Poppler__PSConverter_SetLeftMargin(@ptrCast(self.ptr), @bitCast(marginLeft));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` marginTop: i32 `
    ///
    pub fn SetTopMargin(self: Poppler__PSConverter, marginTop: i32) void {
        qtc.Poppler__PSConverter_SetTopMargin(@ptrCast(self.ptr), @bitCast(marginTop));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` strictMargins: bool `
    ///
    pub fn SetStrictMargins(self: Poppler__PSConverter, strictMargins: bool) void {
        qtc.Poppler__PSConverter_SetStrictMargins(@ptrCast(self.ptr), strictMargins);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` forceOverprintPreview: bool `
    ///
    pub fn SetForceOverprintPreview(self: Poppler__PSConverter, forceOverprintPreview: bool) void {
        qtc.Poppler__PSConverter_SetForceOverprintPreview(@ptrCast(self.ptr), forceOverprintPreview);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` forceRasterize: bool `
    ///
    pub fn SetForceRasterize(self: Poppler__PSConverter, forceRasterize: bool) void {
        qtc.Poppler__PSConverter_SetForceRasterize(@ptrCast(self.ptr), forceRasterize);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    /// ` options: flag of poppler_converter_enums.PSOption `
    ///
    pub fn SetPSOptions(self: Poppler__PSConverter, options: i32) void {
        qtc.Poppler__PSConverter_SetPSOptions(@ptrCast(self.ptr), @bitCast(options));
    }

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
    pub fn PsOptions(self: Poppler__PSConverter) i32 {
        return qtc.Poppler__PSConverter_PsOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PSConverter `
    ///
    pub fn Convert(self: Poppler__PSConverter) bool {
        return qtc.Poppler__PSConverter_Convert(@ptrCast(self.ptr));
    }

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
    pub fn SetOutputFileName(self: Poppler__PSConverter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

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
    pub fn SetOutputDevice(self: Poppler__PSConverter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

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
    pub fn LastError(self: Poppler__PSConverter) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PSConverter `
    ///
    pub fn Delete(self: Poppler__PSConverter) void {
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

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ` options: flag of poppler_converter_enums.PDFOption `
    ///
    pub fn SetPDFOptions(self: Poppler__PDFConverter, options: i32) void {
        qtc.Poppler__PDFConverter_SetPDFOptions(@ptrCast(self.ptr), @bitCast(options));
    }

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
    pub fn PdfOptions(self: Poppler__PDFConverter) i32 {
        return qtc.Poppler__PDFConverter_PdfOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    /// ` data: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn Sign(self: Poppler__PDFConverter, data: anytype) bool {
        comptime _ = @TypeOf(data)._is_Poppler__PDFConverter__NewSignatureData;
        return qtc.Poppler__PDFConverter_Sign(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    pub fn Convert(self: Poppler__PDFConverter) bool {
        return qtc.Poppler__PDFConverter_Convert(@ptrCast(self.ptr));
    }

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
    pub fn SetOutputFileName(self: Poppler__PDFConverter, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self.ptr), outputFileName_str);
    }

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
    pub fn SetOutputDevice(self: Poppler__PDFConverter, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

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
    pub fn LastError(self: Poppler__PDFConverter) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PDFConverter `
    ///
    pub fn Delete(self: Poppler__PDFConverter) void {
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

    /// New constructs a new Poppler::PDFConverter::NewSignatureData object.
    ///
    pub fn New() Poppler__PDFConverter__NewSignatureData {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_new() };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CertNickname(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_CertNickname(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.CertNickname: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` certNickname: []const u8 `
    ///
    pub fn SetCertNickname(self: Poppler__PDFConverter__NewSignatureData, certNickname: []const u8) void {
        const certNickname_str = qtc.libqt_string{
            .len = certNickname.len,
            .data = certNickname.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetCertNickname(@ptrCast(self.ptr), certNickname_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: Poppler__PDFConverter__NewSignatureData, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn Page(self: Poppler__PDFConverter__NewSignatureData) i32 {
        return qtc.Poppler__PDFConverter__NewSignatureData_Page(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` page: i32 `
    ///
    pub fn SetPage(self: Poppler__PDFConverter__NewSignatureData, page: i32) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetPage(@ptrCast(self.ptr), @bitCast(page));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BoundingRectangle(self: Poppler__PDFConverter__NewSignatureData) QRectF {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_BoundingRectangle(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetBoundingRectangle(self: Poppler__PDFConverter__NewSignatureData, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.Poppler__PDFConverter__NewSignatureData_SetBoundingRectangle(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignatureText(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_SignatureText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.SignatureText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSignatureText(self: Poppler__PDFConverter__NewSignatureData, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetSignatureText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignatureLeftText(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_SignatureLeftText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.SignatureLeftText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSignatureLeftText(self: Poppler__PDFConverter__NewSignatureData, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetSignatureLeftText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Reason(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Reason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.Reason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` reason: []const u8 `
    ///
    pub fn SetReason(self: Poppler__PDFConverter__NewSignatureData, reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetReason(@ptrCast(self.ptr), reason_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Location(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Location(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.Location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` location: []const u8 `
    ///
    pub fn SetLocation(self: Poppler__PDFConverter__NewSignatureData, location: []const u8) void {
        const location_str = qtc.libqt_string{
            .len = location.len,
            .data = location.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetLocation(@ptrCast(self.ptr), location_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn FontSize(self: Poppler__PDFConverter__NewSignatureData) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_FontSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetFontSize(self: Poppler__PDFConverter__NewSignatureData, fontSize: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetFontSize(@ptrCast(self.ptr), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn LeftFontSize(self: Poppler__PDFConverter__NewSignatureData) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_LeftFontSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetLeftFontSize(self: Poppler__PDFConverter__NewSignatureData, fontSize: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetLeftFontSize(@ptrCast(self.ptr), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn FontColor(self: Poppler__PDFConverter__NewSignatureData) QColor {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_FontColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QColor `
    ///
    pub fn SetFontColor(self: Poppler__PDFConverter__NewSignatureData, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__PDFConverter__NewSignatureData_SetFontColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BorderColor(self: Poppler__PDFConverter__NewSignatureData) QColor {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBorderColor(self: Poppler__PDFConverter__NewSignatureData, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__PDFConverter__NewSignatureData_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BorderWidth(self: Poppler__PDFConverter__NewSignatureData) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_BorderWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBorderWidth(self: Poppler__PDFConverter__NewSignatureData, width: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetBorderWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BackgroundColor(self: Poppler__PDFConverter__NewSignatureData) QColor {
        return .{ .ptr = qtc.Poppler__PDFConverter__NewSignatureData_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBackgroundColor(self: Poppler__PDFConverter__NewSignatureData, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__PDFConverter__NewSignatureData_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FieldPartialName(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_FieldPartialName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.FieldPartialName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFieldPartialName(self: Poppler__PDFConverter__NewSignatureData, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetFieldPartialName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentOwnerPassword(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__PDFConverter__NewSignatureData_DocumentOwnerPassword(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__pdfconverter__newsignaturedata.DocumentOwnerPassword: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` password: []u8 `
    ///
    pub fn SetDocumentOwnerPassword(self: Poppler__PDFConverter__NewSignatureData, password: []u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetDocumentOwnerPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentUserPassword(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__PDFConverter__NewSignatureData_DocumentUserPassword(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__pdfconverter__newsignaturedata.DocumentUserPassword: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` password: []u8 `
    ///
    pub fn SetDocumentUserPassword(self: Poppler__PDFConverter__NewSignatureData, password: []u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetDocumentUserPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImagePath(self: Poppler__PDFConverter__NewSignatureData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetImagePath(self: Poppler__PDFConverter__NewSignatureData, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetImagePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn Delete(self: Poppler__PDFConverter__NewSignatureData) void {
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
