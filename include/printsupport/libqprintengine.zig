const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qprintengine_enums = enums;
const qprinter_enums = @import("libqprinter.zig").enums;

/// https://doc.qt.io/qt-6/qprintengine.html
pub const qprintengine = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#setProperty)
    ///
    /// ``` self: QtC.QPrintEngine, key: qprintengine_enums.PrintEnginePropertyKey, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, key: i32, value: ?*anyopaque) void {
        qtc.QPrintEngine_SetProperty(@ptrCast(self), @intCast(key), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#property)
    ///
    /// ``` self: QtC.QPrintEngine, key: qprintengine_enums.PrintEnginePropertyKey ```
    pub fn Property(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QPrintEngine_Property(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#newPage)
    ///
    /// ``` self: QtC.QPrintEngine ```
    pub fn NewPage(self: ?*anyopaque) bool {
        return qtc.QPrintEngine_NewPage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#abort)
    ///
    /// ``` self: QtC.QPrintEngine ```
    pub fn Abort(self: ?*anyopaque) bool {
        return qtc.QPrintEngine_Abort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#metric)
    ///
    /// ``` self: QtC.QPrintEngine, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPrintEngine_Metric(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#printerState)
    ///
    /// ``` self: QtC.QPrintEngine ```
    ///
    /// Returns: ``` qprinter_enums.PrinterState ```
    pub fn PrinterState(self: ?*anyopaque) i32 {
        return qtc.QPrintEngine_PrinterState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#operator-eq)
    ///
    /// ``` self: QtC.QPrintEngine, param1: QtC.QPrintEngine ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPrintEngine_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#dtor.QPrintEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPrintEngine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrintEngine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprintengine.html#types
pub const enums = struct {
    pub const PrintEnginePropertyKey = enum {
        pub const PPK_CollateCopies: i32 = 0;
        pub const PPK_ColorMode: i32 = 1;
        pub const PPK_Creator: i32 = 2;
        pub const PPK_DocumentName: i32 = 3;
        pub const PPK_FullPage: i32 = 4;
        pub const PPK_NumberOfCopies: i32 = 5;
        pub const PPK_Orientation: i32 = 6;
        pub const PPK_OutputFileName: i32 = 7;
        pub const PPK_PageOrder: i32 = 8;
        pub const PPK_PageRect: i32 = 9;
        pub const PPK_PageSize: i32 = 10;
        pub const PPK_PaperRect: i32 = 11;
        pub const PPK_PaperSource: i32 = 12;
        pub const PPK_PrinterName: i32 = 13;
        pub const PPK_PrinterProgram: i32 = 14;
        pub const PPK_Resolution: i32 = 15;
        pub const PPK_SelectionOption: i32 = 16;
        pub const PPK_SupportedResolutions: i32 = 17;
        pub const PPK_WindowsPageSize: i32 = 18;
        pub const PPK_FontEmbedding: i32 = 19;
        pub const PPK_Duplex: i32 = 20;
        pub const PPK_PaperSources: i32 = 21;
        pub const PPK_CustomPaperSize: i32 = 22;
        pub const PPK_PageMargins: i32 = 23;
        pub const PPK_CopyCount: i32 = 24;
        pub const PPK_SupportsMultipleCopies: i32 = 25;
        pub const PPK_PaperName: i32 = 26;
        pub const PPK_QPageSize: i32 = 27;
        pub const PPK_QPageMargins: i32 = 28;
        pub const PPK_QPageLayout: i32 = 29;
        pub const PPK_PaperSize: i32 = 10;
        pub const PPK_CustomBase: i32 = 65280;
    };
};
