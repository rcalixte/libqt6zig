const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprintengine.html)
pub const QPrintEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprintengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPrintEngine,

    pub const _is_QPrintEngine = {};

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qprintengine.html#dtor.QPrintEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPrintEngine `
    ///
    pub fn delete(self: QPrintEngine) void {
        qtc.QPrintEngine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qprintengine.html#public-types)
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
