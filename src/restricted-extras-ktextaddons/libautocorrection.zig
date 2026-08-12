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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextAutoCorrectionCore::AutoCorrection object in C++ memory
    ///
    pub fn new() TextAutoCorrectionCore__AutoCorrection {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrection_new() };
    }

    /// ### DEPRECATED: Use `writeConfig` instead
    ///
    pub const WriteConfig = writeConfig;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn writeConfig(self: TextAutoCorrectionCore__AutoCorrection) void {
        qtc.TextAutoCorrectionCore__AutoCorrection_WriteConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn readConfig(self: TextAutoCorrectionCore__AutoCorrection) void {
        qtc.TextAutoCorrectionCore__AutoCorrection_ReadConfig(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autocorrect` instead
    ///
    pub const Autocorrect = autocorrect;

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
    pub fn autocorrect(self: TextAutoCorrectionCore__AutoCorrection, htmlMode: bool, document: anytype, position: *i32) bool {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return qtc.TextAutoCorrectionCore__AutoCorrection_Autocorrect(@ptrCast(self.ptr), htmlMode, @ptrCast(document.ptr), @ptrCast(position));
    }

    /// ### DEPRECATED: Use `loadGlobalFileName` instead
    ///
    pub const LoadGlobalFileName = loadGlobalFileName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` fname: []const u8 `
    ///
    pub fn loadGlobalFileName(self: TextAutoCorrectionCore__AutoCorrection, fname: []const u8) void {
        const fname_str = qtc.libqt_string{
            .len = fname.len,
            .data = fname.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrection_LoadGlobalFileName(@ptrCast(self.ptr), fname_str);
    }

    /// ### DEPRECATED: Use `autoCorrectionSettings` instead
    ///
    pub const AutoCorrectionSettings = autoCorrectionSettings;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn autoCorrectionSettings(self: TextAutoCorrectionCore__AutoCorrection) TextAutoCorrectionCore__AutoCorrectionSettings {
        return .{ .ptr = qtc.TextAutoCorrectionCore__AutoCorrection_AutoCorrectionSettings(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoCorrectionSettings` instead
    ///
    pub const SetAutoCorrectionSettings = setAutoCorrectionSettings;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` newAutoCorrectionSettings: TextAutoCorrectionCore__AutoCorrectionSettings `
    ///
    pub fn setAutoCorrectionSettings(self: TextAutoCorrectionCore__AutoCorrection, newAutoCorrectionSettings: anytype) void {
        comptime _ = @TypeOf(newAutoCorrectionSettings)._is_TextAutoCorrectionCore__AutoCorrectionSettings;
        qtc.TextAutoCorrectionCore__AutoCorrection_SetAutoCorrectionSettings(@ptrCast(self.ptr), @ptrCast(newAutoCorrectionSettings.ptr));
    }

    /// ### DEPRECATED: Use `writeAutoCorrectionXmlFile` instead
    ///
    pub const WriteAutoCorrectionXmlFile = writeAutoCorrectionXmlFile;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn writeAutoCorrectionXmlFile(self: TextAutoCorrectionCore__AutoCorrection, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.TextAutoCorrectionCore__AutoCorrection_WriteAutoCorrectionXmlFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAutoCorrectionCore__AutoCorrection `
    ///
    pub fn delete(self: TextAutoCorrectionCore__AutoCorrection) void {
        qtc.TextAutoCorrectionCore__AutoCorrection_Delete(@ptrCast(self.ptr));
    }
};
