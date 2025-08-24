const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qpluginmetadata.html
pub const qpluginmetadata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata.html#archRequirements)
    ///
    ///
    pub fn ArchRequirements() u8 {
        return qtc.QPluginMetaData_ArchRequirements();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata.html#size-var)
    ///
    /// ``` self: QtC.QPluginMetaData ```
    pub fn Size(self: ?*anyopaque) u64 {
        return qtc.QPluginMetaData_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata.html#size-var)
    ///
    /// ``` self: QtC.QPluginMetaData, size: u64 ```
    pub fn SetSize(self: ?*anyopaque, size: u64) void {
        qtc.QPluginMetaData_SetSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata.html#dtor.QPluginMetaData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPluginMetaData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstaticplugin.html
pub const qstaticplugin = struct {
    /// New constructs a new QStaticPlugin object.
    ///
    /// ``` other: QtC.QStaticPlugin ```
    pub fn New(other: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new(@ptrCast(other));
    }

    /// New2 constructs a new QStaticPlugin object and invalidates the source QStaticPlugin object.
    ///
    /// ``` other: QtC.QStaticPlugin ```
    pub fn New2(other: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStaticPlugin object.
    ///
    /// ``` param1: QtC.QStaticPlugin ```
    pub fn New3(param1: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QStaticPlugin, other: QtC.QStaticPlugin ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticPlugin_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QStaticPlugin, other: QtC.QStaticPlugin ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticPlugin_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstaticplugin.html#metaData)
    ///
    /// ``` self: QtC.QStaticPlugin ```
    pub fn MetaData(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QStaticPlugin_MetaData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstaticplugin.html#dtor.QStaticPlugin)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStaticPlugin ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStaticPlugin_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpluginmetadata-header.html
pub const qpluginmetadata__header = struct {
    /// New constructs a new QPluginMetaData::Header object.
    ///
    /// ``` other: QtC.QPluginMetaData__Header ```
    pub fn New(other: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__Header_new(@ptrCast(other));
    }

    /// New2 constructs a new QPluginMetaData::Header object and invalidates the source QPluginMetaData::Header object.
    ///
    /// ``` other: QtC.QPluginMetaData__Header ```
    pub fn New2(other: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__Header_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPluginMetaData::Header object.
    ///
    /// ``` param1: QtC.QPluginMetaData__Header ```
    pub fn New3(param1: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__Header_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPluginMetaData__Header, other: QtC.QPluginMetaData__Header ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__Header_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPluginMetaData__Header, other: QtC.QPluginMetaData__Header ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__Header_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#version-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header ```
    pub fn Version(self: ?*anyopaque) u8 {
        return qtc.QPluginMetaData__Header_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#version-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header, version: u8 ```
    pub fn SetVersion(self: ?*anyopaque, version: u8) void {
        qtc.QPluginMetaData__Header_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#qt_major_version-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header ```
    pub fn MajorVersion(self: ?*anyopaque) u8 {
        return qtc.QPluginMetaData__Header_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#qt_major_version-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header, qt_major_version: u8 ```
    pub fn SetQtMajorVersion(self: ?*anyopaque, qt_major_version: u8) void {
        qtc.QPluginMetaData__Header_SetQtMajorVersion(@ptrCast(self), @intCast(qt_major_version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#qt_minor_version-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header ```
    pub fn MinorVersion(self: ?*anyopaque) u8 {
        return qtc.QPluginMetaData__Header_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#qt_minor_version-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header, qt_minor_version: u8 ```
    pub fn SetQtMinorVersion(self: ?*anyopaque, qt_minor_version: u8) void {
        qtc.QPluginMetaData__Header_SetQtMinorVersion(@ptrCast(self), @intCast(qt_minor_version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#plugin_arch_requirements-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header ```
    pub fn PluginArchRequirements(self: ?*anyopaque) u8 {
        return qtc.QPluginMetaData__Header_PluginArchRequirements(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-header.html#plugin_arch_requirements-var)
    ///
    /// ``` self: QtC.QPluginMetaData__Header, plugin_arch_requirements: u8 ```
    pub fn SetPluginArchRequirements(self: ?*anyopaque, plugin_arch_requirements: u8) void {
        qtc.QPluginMetaData__Header_SetPluginArchRequirements(@ptrCast(self), @intCast(plugin_arch_requirements));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPluginMetaData__Header ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__Header_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpluginmetadata-magicheader.html
pub const qpluginmetadata__magicheader = struct {
    /// New constructs a new QPluginMetaData::MagicHeader object.
    ///
    /// ``` other: QtC.QPluginMetaData__MagicHeader ```
    pub fn New(other: ?*anyopaque) QtC.QPluginMetaData__MagicHeader {
        return qtc.QPluginMetaData__MagicHeader_new(@ptrCast(other));
    }

    /// New2 constructs a new QPluginMetaData::MagicHeader object and invalidates the source QPluginMetaData::MagicHeader object.
    ///
    /// ``` other: QtC.QPluginMetaData__MagicHeader ```
    pub fn New2(other: ?*anyopaque) QtC.QPluginMetaData__MagicHeader {
        return qtc.QPluginMetaData__MagicHeader_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPluginMetaData::MagicHeader object.
    ///
    ///
    pub fn New3() QtC.QPluginMetaData__MagicHeader {
        return qtc.QPluginMetaData__MagicHeader_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPluginMetaData__MagicHeader, other: QtC.QPluginMetaData__MagicHeader ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__MagicHeader_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPluginMetaData__MagicHeader, other: QtC.QPluginMetaData__MagicHeader ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__MagicHeader_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-magicheader.html#header-var)
    ///
    /// ``` self: QtC.QPluginMetaData__MagicHeader ```
    pub fn Header(self: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__MagicHeader_Header(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-magicheader.html#header-var)
    ///
    /// ``` self: QtC.QPluginMetaData__MagicHeader, header: QtC.QPluginMetaData__Header ```
    pub fn SetHeader(self: ?*anyopaque, header: QtC.QPluginMetaData__Header) void {
        qtc.QPluginMetaData__MagicHeader_SetHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPluginMetaData__MagicHeader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__MagicHeader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html
pub const qpluginmetadata__elfnoteheader = struct {
    /// New constructs a new QPluginMetaData::ElfNoteHeader object.
    ///
    /// ``` other: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn New(other: ?*anyopaque) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new(@ptrCast(other));
    }

    /// New2 constructs a new QPluginMetaData::ElfNoteHeader object and invalidates the source QPluginMetaData::ElfNoteHeader object.
    ///
    /// ``` other: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn New2(other: ?*anyopaque) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPluginMetaData::ElfNoteHeader object.
    ///
    /// ``` payloadSize: u32 ```
    pub fn New3(payloadSize: u32) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new3(@intCast(payloadSize));
    }

    /// New4 constructs a new QPluginMetaData::ElfNoteHeader object.
    ///
    /// ``` param1: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn New4(param1: ?*anyopaque) QtC.QPluginMetaData__ElfNoteHeader {
        return qtc.QPluginMetaData__ElfNoteHeader_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader, other: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader, other: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#n_namesz-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn NNamesz(self: ?*anyopaque) u32 {
        return qtc.QPluginMetaData__ElfNoteHeader_NNamesz(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#n_namesz-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader, n_namesz: u32 ```
    pub fn SetNNamesz(self: ?*anyopaque, n_namesz: u32) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetNNamesz(@ptrCast(self), @intCast(n_namesz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#n_descsz-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn NDescsz(self: ?*anyopaque) u32 {
        return qtc.QPluginMetaData__ElfNoteHeader_NDescsz(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#n_descsz-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader, n_descsz: u32 ```
    pub fn SetNDescsz(self: ?*anyopaque, n_descsz: u32) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetNDescsz(@ptrCast(self), @intCast(n_descsz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#n_type-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn NType(self: ?*anyopaque) u32 {
        return qtc.QPluginMetaData__ElfNoteHeader_NType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#n_type-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader, n_type: u32 ```
    pub fn SetNType(self: ?*anyopaque, n_type: u32) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetNType(@ptrCast(self), @intCast(n_type));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#header-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn Header(self: ?*anyopaque) QtC.QPluginMetaData__Header {
        return qtc.QPluginMetaData__ElfNoteHeader_Header(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html#header-var)
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader, header: QtC.QPluginMetaData__Header ```
    pub fn SetHeader(self: ?*anyopaque, header: QtC.QPluginMetaData__Header) void {
        qtc.QPluginMetaData__ElfNoteHeader_SetHeader(@ptrCast(self), @ptrCast(header));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_Delete(@ptrCast(self));
    }
};
