const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_converter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
pub const poppler__baseconverter = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__BaseConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__BaseConverter `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__BaseConverter `
    ///
    pub fn Convert(self: ?*anyopaque) bool {
        return qtc.Poppler__BaseConverter_Convert(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__BaseConverter `
    ///
    /// ## Returns:
    ///
    /// ` poppler_converter_enums.Error `
    ///
    pub fn LastError(self: ?*anyopaque) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self));
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
    /// ` self: QtC.Poppler__BaseConverter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__BaseConverter_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
pub const poppler__psconverter = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` pageList: []i32 `
    ///
    pub fn SetPageList(self: ?*anyopaque, pageList: []i32) void {
        const pageList_list = qtc.libqt_list{
            .len = pageList.len,
            .data = pageList.ptr,
        };
        qtc.Poppler__PSConverter_SetPageList(@ptrCast(self), pageList_list);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__PSConverter_SetTitle(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` hDPI: f64 `
    ///
    pub fn SetHDPI(self: ?*anyopaque, hDPI: f64) void {
        qtc.Poppler__PSConverter_SetHDPI(@ptrCast(self), @bitCast(hDPI));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` vDPI: f64 `
    ///
    pub fn SetVDPI(self: ?*anyopaque, vDPI: f64) void {
        qtc.Poppler__PSConverter_SetVDPI(@ptrCast(self), @bitCast(vDPI));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` rotate: i32 `
    ///
    pub fn SetRotate(self: ?*anyopaque, rotate: i32) void {
        qtc.Poppler__PSConverter_SetRotate(@ptrCast(self), @bitCast(rotate));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` paperWidth: i32 `
    ///
    pub fn SetPaperWidth(self: ?*anyopaque, paperWidth: i32) void {
        qtc.Poppler__PSConverter_SetPaperWidth(@ptrCast(self), @bitCast(paperWidth));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` paperHeight: i32 `
    ///
    pub fn SetPaperHeight(self: ?*anyopaque, paperHeight: i32) void {
        qtc.Poppler__PSConverter_SetPaperHeight(@ptrCast(self), @bitCast(paperHeight));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` marginRight: i32 `
    ///
    pub fn SetRightMargin(self: ?*anyopaque, marginRight: i32) void {
        qtc.Poppler__PSConverter_SetRightMargin(@ptrCast(self), @bitCast(marginRight));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` marginBottom: i32 `
    ///
    pub fn SetBottomMargin(self: ?*anyopaque, marginBottom: i32) void {
        qtc.Poppler__PSConverter_SetBottomMargin(@ptrCast(self), @bitCast(marginBottom));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` marginLeft: i32 `
    ///
    pub fn SetLeftMargin(self: ?*anyopaque, marginLeft: i32) void {
        qtc.Poppler__PSConverter_SetLeftMargin(@ptrCast(self), @bitCast(marginLeft));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` marginTop: i32 `
    ///
    pub fn SetTopMargin(self: ?*anyopaque, marginTop: i32) void {
        qtc.Poppler__PSConverter_SetTopMargin(@ptrCast(self), @bitCast(marginTop));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` strictMargins: bool `
    ///
    pub fn SetStrictMargins(self: ?*anyopaque, strictMargins: bool) void {
        qtc.Poppler__PSConverter_SetStrictMargins(@ptrCast(self), strictMargins);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` forceOverprintPreview: bool `
    ///
    pub fn SetForceOverprintPreview(self: ?*anyopaque, forceOverprintPreview: bool) void {
        qtc.Poppler__PSConverter_SetForceOverprintPreview(@ptrCast(self), forceOverprintPreview);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` forceRasterize: bool `
    ///
    pub fn SetForceRasterize(self: ?*anyopaque, forceRasterize: bool) void {
        qtc.Poppler__PSConverter_SetForceRasterize(@ptrCast(self), forceRasterize);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` options: flag of poppler_converter_enums.PSOption `
    ///
    pub fn SetPSOptions(self: ?*anyopaque, options: i32) void {
        qtc.Poppler__PSConverter_SetPSOptions(@ptrCast(self), @bitCast(options));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_converter_enums.PSOption `
    ///
    pub fn PsOptions(self: ?*anyopaque) i32 {
        return qtc.Poppler__PSConverter_PsOptions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    pub fn Convert(self: ?*anyopaque) bool {
        return qtc.Poppler__PSConverter_Convert(@ptrCast(self));
    }

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PSConverter `
    ///
    /// ## Returns:
    ///
    /// ` poppler_converter_enums.Error `
    ///
    pub fn LastError(self: ?*anyopaque) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self));
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
    /// ` self: QtC.Poppler__PSConverter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__PSConverter_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
pub const poppler__pdfconverter = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    /// ` options: flag of poppler_converter_enums.PDFOption `
    ///
    pub fn SetPDFOptions(self: ?*anyopaque, options: i32) void {
        qtc.Poppler__PDFConverter_SetPDFOptions(@ptrCast(self), @bitCast(options));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_converter_enums.PDFOption `
    ///
    pub fn PdfOptions(self: ?*anyopaque) i32 {
        return qtc.Poppler__PDFConverter_PdfOptions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    /// ` data: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn Sign(self: ?*anyopaque, data: ?*anyopaque) bool {
        return qtc.Poppler__PDFConverter_Sign(@ptrCast(self), @ptrCast(data));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    pub fn Convert(self: ?*anyopaque) bool {
        return qtc.Poppler__PDFConverter_Convert(@ptrCast(self));
    }

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    /// ` outputFileName: []const u8 `
    ///
    pub fn SetOutputFileName(self: ?*anyopaque, outputFileName: []const u8) void {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        qtc.Poppler__BaseConverter_SetOutputFileName(@ptrCast(self), outputFileName_str);
    }

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.Poppler__BaseConverter_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    /// Inherited from Poppler::BaseConverter
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    /// ## Returns:
    ///
    /// ` poppler_converter_enums.Error `
    ///
    pub fn LastError(self: ?*anyopaque) i32 {
        return qtc.Poppler__BaseConverter_LastError(@ptrCast(self));
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
    /// ` self: QtC.Poppler__PDFConverter `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__PDFConverter_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
pub const poppler__pdfconverter__newsignaturedata = struct {
    /// New constructs a new Poppler::PDFConverter::NewSignatureData object.
    ///
    pub fn New() QtC.Poppler__PDFConverter__NewSignatureData {
        return qtc.Poppler__PDFConverter__NewSignatureData_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CertNickname(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_CertNickname(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.CertNickname: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` certNickname: []const u8 `
    ///
    pub fn SetCertNickname(self: ?*anyopaque, certNickname: []const u8) void {
        const certNickname_str = qtc.libqt_string{
            .len = certNickname.len,
            .data = certNickname.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetCertNickname(@ptrCast(self), certNickname_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetPassword(@ptrCast(self), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn Page(self: ?*anyopaque) i32 {
        return qtc.Poppler__PDFConverter__NewSignatureData_Page(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` page: i32 `
    ///
    pub fn SetPage(self: ?*anyopaque, page: i32) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetPage(@ptrCast(self), @bitCast(page));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BoundingRectangle(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__PDFConverter__NewSignatureData_BoundingRectangle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` rect: QtC.QRectF `
    ///
    pub fn SetBoundingRectangle(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetBoundingRectangle(@ptrCast(self), @ptrCast(rect));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignatureText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_SignatureText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.SignatureText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSignatureText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetSignatureText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignatureLeftText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_SignatureLeftText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.SignatureLeftText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetSignatureLeftText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetSignatureLeftText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Reason(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Reason(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.Reason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` reason: []const u8 `
    ///
    pub fn SetReason(self: ?*anyopaque, reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetReason(@ptrCast(self), reason_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Location(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_Location(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.Location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` location: []const u8 `
    ///
    pub fn SetLocation(self: ?*anyopaque, location: []const u8) void {
        const location_str = qtc.libqt_string{
            .len = location.len,
            .data = location.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetLocation(@ptrCast(self), location_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn FontSize(self: ?*anyopaque) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_FontSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetFontSize(self: ?*anyopaque, fontSize: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetFontSize(@ptrCast(self), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn LeftFontSize(self: ?*anyopaque) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_LeftFontSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetLeftFontSize(self: ?*anyopaque, fontSize: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetLeftFontSize(@ptrCast(self), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn FontColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__PDFConverter__NewSignatureData_FontColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetFontColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetFontColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__PDFConverter__NewSignatureData_BorderColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBorderColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BorderWidth(self: ?*anyopaque) f64 {
        return qtc.Poppler__PDFConverter__NewSignatureData_BorderWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBorderWidth(self: ?*anyopaque, width: f64) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetBorderWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__PDFConverter__NewSignatureData_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__PDFConverter__NewSignatureData_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FieldPartialName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_FieldPartialName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.FieldPartialName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFieldPartialName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetFieldPartialName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentOwnerPassword(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__PDFConverter__NewSignatureData_DocumentOwnerPassword(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__pdfconverter__newsignaturedata.DocumentOwnerPassword: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` password: []u8 `
    ///
    pub fn SetDocumentOwnerPassword(self: ?*anyopaque, password: []u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetDocumentOwnerPassword(@ptrCast(self), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentUserPassword(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__PDFConverter__NewSignatureData_DocumentUserPassword(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__pdfconverter__newsignaturedata.DocumentUserPassword: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` password: []u8 `
    ///
    pub fn SetDocumentUserPassword(self: ?*anyopaque, password: []u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetDocumentUserPassword(@ptrCast(self), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImagePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__PDFConverter__NewSignatureData_ImagePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__pdfconverter__newsignaturedata.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetImagePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.Poppler__PDFConverter__NewSignatureData_SetImagePath(@ptrCast(self), path_str);
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
    /// ` self: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__PDFConverter__NewSignatureData_Delete(@ptrCast(self));
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
