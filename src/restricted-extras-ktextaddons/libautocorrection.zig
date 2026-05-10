const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QTextDocument = @import("libqt6").QTextDocument;
const TextAutoCorrectionCore__AutoCorrectionSettings = @import("libqt6").TextAutoCorrectionCore__AutoCorrectionSettings;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
pub const TextAutoCorrectionCore__AutoCorrection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAutoCorrectionCore__AutoCorrection,

    pub const _is_TextAutoCorrectionCore__AutoCorrection = {};

    /// New constructs a new TextAutoCorrectionCore::AutoCorrection object.
    ///
    pub fn New() TextAutoCorrectionCore__AutoCorrection {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrection_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn WriteConfig(self: TextAutoCorrectionCore__AutoCorrection) void {
        qtc.TextAutoCorrectionCore__AutoCorrection_WriteConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn ReadConfig(self: TextAutoCorrectionCore__AutoCorrection) void {
        qtc.TextAutoCorrectionCore__AutoCorrection_ReadConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` htmlMode: bool `
    ///
    /// ` document: QTextDocument `
    ///
    /// ` position: *i32 `
    ///
    pub fn Autocorrect(self: TextAutoCorrectionCore__AutoCorrection, htmlMode: bool, document: anytype, position: *i32) bool {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return qtc.TextAutoCorrectionCore__AutoCorrection_Autocorrect(@ptrCast(self.ptr), htmlMode, @ptrCast(document.ptr), @ptrCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` fname: []const u8 `
    ///
    pub fn LoadGlobalFileName(self: TextAutoCorrectionCore__AutoCorrection, fname: []const u8) void {
        const fname_str = qtc.libqt_string{
            .len = fname.len,
            .data = fname.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrection_LoadGlobalFileName(@ptrCast(self.ptr), fname_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn AutoCorrectionSettings(self: TextAutoCorrectionCore__AutoCorrection) TextAutoCorrectionCore__AutoCorrectionSettings {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrection_AutoCorrectionSettings(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` newAutoCorrectionSettings: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn SetAutoCorrectionSettings(self: TextAutoCorrectionCore__AutoCorrection, newAutoCorrectionSettings: anytype) void {
        comptime _ = @TypeOf(newAutoCorrectionSettings)._is_TextAutoCorrectionCore__AutoCorrectionSettings;
        qtc.TextAutoCorrectionCore__AutoCorrection_SetAutoCorrectionSettings(@ptrCast(self.ptr), @ptrCast(newAutoCorrectionSettings.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn WriteAutoCorrectionXmlFile(self: TextAutoCorrectionCore__AutoCorrection, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrection_WriteAutoCorrectionXmlFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn Delete(self: TextAutoCorrectionCore__AutoCorrection) void {
        qtc.TextAutoCorrectionCore__AutoCorrection_Delete(@ptrCast(self.ptr));
    }
};
