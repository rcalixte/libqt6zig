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

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPluginMetaData__ElfNoteHeader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginMetaData__ElfNoteHeader_Delete(@ptrCast(self));
    }
};
