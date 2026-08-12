const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Poppler__EmbeddedFile = @import("libqt6").Poppler__EmbeddedFile;
const Poppler__Link = @import("libqt6").Poppler__Link;
const Poppler__LinkRendition = @import("libqt6").Poppler__LinkRendition;
const Poppler__MovieObject = @import("libqt6").Poppler__MovieObject;
const Poppler__PDFConverter__NewSignatureData = @import("libqt6").Poppler__PDFConverter__NewSignatureData;
const Poppler__SoundObject = @import("libqt6").Poppler__SoundObject;
const QColor = @import("libqt6").QColor;
const QDateTime = @import("libqt6").QDateTime;
const QFont = @import("libqt6").QFont;
const QImage = @import("libqt6").QImage;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const poppler_annotation_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AnnotationAppearance.html)
pub const Poppler__AnnotationAppearance = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AnnotationAppearance.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__AnnotationAppearance,

    pub const _is_Poppler__AnnotationAppearance = {};
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
pub const Poppler__Annotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Annotation,

    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__Annotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Annotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__Annotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__Annotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Annotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__Annotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__Annotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Annotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__Annotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn modificationDate(self: Poppler__Annotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__Annotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn creationDate(self: Poppler__Annotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__Annotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__Annotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn boundary(self: Poppler__Annotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__Annotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn style(self: Poppler__Annotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__Annotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn popup(self: Poppler__Annotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__Annotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__Annotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__Annotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn annotationAppearance(self: Poppler__Annotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__Annotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn delete(self: Poppler__Annotation) void {
        qtc.Poppler__Annotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
pub const Poppler__TextAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__TextAnnotation,

    pub const _is_Poppler__TextAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::TextAnnotation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: poppler_annotation_enums.TextType `
    ///
    pub fn new(typeVal: i32) Poppler__TextAnnotation {
        return .{ .ptr = qtc.Poppler__TextAnnotation_new(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__TextAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__TextAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textType` instead
    ///
    pub const TextType = textType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.TextType `
    ///
    pub fn textType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_TextType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textIcon` instead
    ///
    pub const TextIcon = textIcon;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textIcon(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__TextAnnotation_TextIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__TextAnnotation.textIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextIcon` instead
    ///
    pub const SetTextIcon = setTextIcon;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn setTextIcon(self: Poppler__TextAnnotation, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__TextAnnotation_SetTextIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `textFont` instead
    ///
    pub const TextFont = textFont;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn textFont(self: Poppler__TextAnnotation) QFont {
        return .{ .ptr = qtc.Poppler__TextAnnotation_TextFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextFont` instead
    ///
    pub const SetTextFont = setTextFont;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` font: QFont `
    ///
    pub fn setTextFont(self: Poppler__TextAnnotation, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.Poppler__TextAnnotation_SetTextFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `textColor` instead
    ///
    pub const TextColor = textColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn textColor(self: Poppler__TextAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__TextAnnotation_TextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextColor` instead
    ///
    pub const SetTextColor = setTextColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn setTextColor(self: Poppler__TextAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__TextAnnotation_SetTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `inplaceAlign` instead
    ///
    pub const InplaceAlign = inplaceAlign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.InplaceAlignPosition `
    ///
    pub fn inplaceAlign(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_InplaceAlign(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInplaceAlign` instead
    ///
    pub const SetInplaceAlign = setInplaceAlign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` alignVal: poppler_annotation_enums.InplaceAlignPosition `
    ///
    pub fn setInplaceAlign(self: Poppler__TextAnnotation, alignVal: i32) void {
        qtc.Poppler__TextAnnotation_SetInplaceAlign(@ptrCast(self.ptr), @bitCast(alignVal));
    }

    /// ### DEPRECATED: Use `calloutPoint` instead
    ///
    pub const CalloutPoint = calloutPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` id: i32 `
    ///
    pub fn calloutPoint(self: Poppler__TextAnnotation, id: i32) QPointF {
        return .{ .ptr = qtc.Poppler__TextAnnotation_CalloutPoint(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `calloutPoints` instead
    ///
    pub const CalloutPoints = calloutPoints;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn calloutPoints(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__TextAnnotation_CalloutPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("Poppler__TextAnnotation.calloutPoints: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCalloutPoints` instead
    ///
    pub const SetCalloutPoints = setCalloutPoints;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` points: []QPointF `
    ///
    pub fn setCalloutPoints(self: Poppler__TextAnnotation, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.Poppler__TextAnnotation_SetCalloutPoints(@ptrCast(self.ptr), points_list);
    }

    /// ### DEPRECATED: Use `inplaceIntent` instead
    ///
    pub const InplaceIntent = inplaceIntent;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.InplaceIntent `
    ///
    pub fn inplaceIntent(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_InplaceIntent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInplaceIntent` instead
    ///
    pub const SetInplaceIntent = setInplaceIntent;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` intent: poppler_annotation_enums.InplaceIntent `
    ///
    pub fn setInplaceIntent(self: Poppler__TextAnnotation, intent: i32) void {
        qtc.Poppler__TextAnnotation_SetInplaceIntent(@ptrCast(self.ptr), @bitCast(intent));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__TextAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__TextAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__TextAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__TextAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__TextAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__TextAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn modificationDate(self: Poppler__TextAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__TextAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn creationDate(self: Poppler__TextAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__TextAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__TextAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn boundary(self: Poppler__TextAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__TextAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn style(self: Poppler__TextAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__TextAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn popup(self: Poppler__TextAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__TextAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__TextAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__TextAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__TextAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn delete(self: Poppler__TextAnnotation) void {
        qtc.Poppler__TextAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
pub const Poppler__LineAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LineAnnotation,

    pub const _is_Poppler__LineAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::LineAnnotation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: poppler_annotation_enums.LineType `
    ///
    pub fn new(typeVal: i32) Poppler__LineAnnotation {
        return .{ .ptr = qtc.Poppler__LineAnnotation_new(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__LineAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LineAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineType` instead
    ///
    pub const LineType = lineType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineType `
    ///
    pub fn lineType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `linePoints` instead
    ///
    pub const LinePoints = linePoints;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn linePoints(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__LineAnnotation_LinePoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("Poppler__LineAnnotation.linePoints: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setLinePoints` instead
    ///
    pub const SetLinePoints = setLinePoints;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` points: []QPointF `
    ///
    pub fn setLinePoints(self: Poppler__LineAnnotation, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.Poppler__LineAnnotation_SetLinePoints(@ptrCast(self.ptr), points_list);
    }

    /// ### DEPRECATED: Use `lineStartStyle` instead
    ///
    pub const LineStartStyle = lineStartStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.TermStyle `
    ///
    pub fn lineStartStyle(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineStartStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineStartStyle` instead
    ///
    pub const SetLineStartStyle = setLineStartStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _style: poppler_annotation_enums.TermStyle `
    ///
    pub fn setLineStartStyle(self: Poppler__LineAnnotation, _style: i32) void {
        qtc.Poppler__LineAnnotation_SetLineStartStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `lineEndStyle` instead
    ///
    pub const LineEndStyle = lineEndStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.TermStyle `
    ///
    pub fn lineEndStyle(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineEndStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineEndStyle` instead
    ///
    pub const SetLineEndStyle = setLineEndStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _style: poppler_annotation_enums.TermStyle `
    ///
    pub fn setLineEndStyle(self: Poppler__LineAnnotation, _style: i32) void {
        qtc.Poppler__LineAnnotation_SetLineEndStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `isLineClosed` instead
    ///
    pub const IsLineClosed = isLineClosed;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn isLineClosed(self: Poppler__LineAnnotation) bool {
        return qtc.Poppler__LineAnnotation_IsLineClosed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineClosed` instead
    ///
    pub const SetLineClosed = setLineClosed;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` closed: bool `
    ///
    pub fn setLineClosed(self: Poppler__LineAnnotation, closed: bool) void {
        qtc.Poppler__LineAnnotation_SetLineClosed(@ptrCast(self.ptr), closed);
    }

    /// ### DEPRECATED: Use `lineInnerColor` instead
    ///
    pub const LineInnerColor = lineInnerColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn lineInnerColor(self: Poppler__LineAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__LineAnnotation_LineInnerColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLineInnerColor` instead
    ///
    pub const SetLineInnerColor = setLineInnerColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn setLineInnerColor(self: Poppler__LineAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__LineAnnotation_SetLineInnerColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `lineLeadingForwardPoint` instead
    ///
    pub const LineLeadingForwardPoint = lineLeadingForwardPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn lineLeadingForwardPoint(self: Poppler__LineAnnotation) f64 {
        return qtc.Poppler__LineAnnotation_LineLeadingForwardPoint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineLeadingForwardPoint` instead
    ///
    pub const SetLineLeadingForwardPoint = setLineLeadingForwardPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` point: f64 `
    ///
    pub fn setLineLeadingForwardPoint(self: Poppler__LineAnnotation, point: f64) void {
        qtc.Poppler__LineAnnotation_SetLineLeadingForwardPoint(@ptrCast(self.ptr), @bitCast(point));
    }

    /// ### DEPRECATED: Use `lineLeadingBackPoint` instead
    ///
    pub const LineLeadingBackPoint = lineLeadingBackPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn lineLeadingBackPoint(self: Poppler__LineAnnotation) f64 {
        return qtc.Poppler__LineAnnotation_LineLeadingBackPoint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineLeadingBackPoint` instead
    ///
    pub const SetLineLeadingBackPoint = setLineLeadingBackPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` point: f64 `
    ///
    pub fn setLineLeadingBackPoint(self: Poppler__LineAnnotation, point: f64) void {
        qtc.Poppler__LineAnnotation_SetLineLeadingBackPoint(@ptrCast(self.ptr), @bitCast(point));
    }

    /// ### DEPRECATED: Use `lineShowCaption` instead
    ///
    pub const LineShowCaption = lineShowCaption;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn lineShowCaption(self: Poppler__LineAnnotation) bool {
        return qtc.Poppler__LineAnnotation_LineShowCaption(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineShowCaption` instead
    ///
    pub const SetLineShowCaption = setLineShowCaption;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` show: bool `
    ///
    pub fn setLineShowCaption(self: Poppler__LineAnnotation, show: bool) void {
        qtc.Poppler__LineAnnotation_SetLineShowCaption(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `lineIntent` instead
    ///
    pub const LineIntent = lineIntent;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineIntent `
    ///
    pub fn lineIntent(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineIntent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineIntent` instead
    ///
    pub const SetLineIntent = setLineIntent;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` intent: poppler_annotation_enums.LineIntent `
    ///
    pub fn setLineIntent(self: Poppler__LineAnnotation, intent: i32) void {
        qtc.Poppler__LineAnnotation_SetLineIntent(@ptrCast(self.ptr), @bitCast(intent));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__LineAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__LineAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__LineAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__LineAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__LineAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__LineAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn modificationDate(self: Poppler__LineAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__LineAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn creationDate(self: Poppler__LineAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__LineAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__LineAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn boundary(self: Poppler__LineAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__LineAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn style(self: Poppler__LineAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__LineAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn popup(self: Poppler__LineAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__LineAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__LineAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__LineAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__LineAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn delete(self: Poppler__LineAnnotation) void {
        qtc.Poppler__LineAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
pub const Poppler__GeomAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__GeomAnnotation,

    pub const _is_Poppler__GeomAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::GeomAnnotation object in C++ memory
    ///
    pub fn new() Poppler__GeomAnnotation {
        return .{ .ptr = qtc.Poppler__GeomAnnotation_new() };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__GeomAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__GeomAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__GeomAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__GeomAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geomType` instead
    ///
    pub const GeomType = geomType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.GeomType `
    ///
    pub fn geomType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__GeomAnnotation_GeomType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeomType` instead
    ///
    pub const SetGeomType = setGeomType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.GeomType `
    ///
    pub fn setGeomType(self: Poppler__GeomAnnotation, typeVal: i32) void {
        qtc.Poppler__GeomAnnotation_SetGeomType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `geomInnerColor` instead
    ///
    pub const GeomInnerColor = geomInnerColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn geomInnerColor(self: Poppler__GeomAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__GeomAnnotation_GeomInnerColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeomInnerColor` instead
    ///
    pub const SetGeomInnerColor = setGeomInnerColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn setGeomInnerColor(self: Poppler__GeomAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__GeomAnnotation_SetGeomInnerColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__GeomAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__GeomAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__GeomAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__GeomAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__GeomAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__GeomAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn modificationDate(self: Poppler__GeomAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__GeomAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn creationDate(self: Poppler__GeomAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__GeomAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__GeomAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn boundary(self: Poppler__GeomAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__GeomAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn style(self: Poppler__GeomAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__GeomAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn popup(self: Poppler__GeomAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__GeomAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__GeomAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__GeomAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__GeomAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn delete(self: Poppler__GeomAnnotation) void {
        qtc.Poppler__GeomAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
pub const Poppler__HighlightAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__HighlightAnnotation,

    pub const _is_Poppler__HighlightAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::HighlightAnnotation object in C++ memory
    ///
    pub fn new() Poppler__HighlightAnnotation {
        return .{ .ptr = qtc.Poppler__HighlightAnnotation_new() };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__HighlightAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__HighlightAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__HighlightAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__HighlightAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `highlightType` instead
    ///
    pub const HighlightType = highlightType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.HighlightType `
    ///
    pub fn highlightType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__HighlightAnnotation_HighlightType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHighlightType` instead
    ///
    pub const SetHighlightType = setHighlightType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.HighlightType `
    ///
    pub fn setHighlightType(self: Poppler__HighlightAnnotation, typeVal: i32) void {
        qtc.Poppler__HighlightAnnotation_SetHighlightType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `highlightQuads` instead
    ///
    pub const HighlightQuads = highlightQuads;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn highlightQuads(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []Poppler__HighlightAnnotation__Quad {
        const _arr: qtc.libqt_list = qtc.Poppler__HighlightAnnotation_HighlightQuads(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__HighlightAnnotation__Quad, _arr.len) catch @panic("Poppler__HighlightAnnotation.highlightQuads: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__HighlightAnnotation__Quad = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setHighlightQuads` instead
    ///
    pub const SetHighlightQuads = setHighlightQuads;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` quads: []Poppler__HighlightAnnotation__Quad `
    ///
    pub fn setHighlightQuads(self: Poppler__HighlightAnnotation, quads: []Poppler__HighlightAnnotation__Quad) void {
        const quads_list = qtc.libqt_list{
            .len = quads.len,
            .data = @ptrCast(quads.ptr),
        };
        qtc.Poppler__HighlightAnnotation_SetHighlightQuads(@ptrCast(self.ptr), quads_list);
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__HighlightAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__HighlightAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__HighlightAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__HighlightAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__HighlightAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__HighlightAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn modificationDate(self: Poppler__HighlightAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__HighlightAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn creationDate(self: Poppler__HighlightAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__HighlightAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__HighlightAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn boundary(self: Poppler__HighlightAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__HighlightAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn style(self: Poppler__HighlightAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__HighlightAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn popup(self: Poppler__HighlightAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__HighlightAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__HighlightAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__HighlightAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__HighlightAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn delete(self: Poppler__HighlightAnnotation) void {
        qtc.Poppler__HighlightAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
pub const Poppler__StampAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__StampAnnotation,

    pub const _is_Poppler__StampAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::StampAnnotation object in C++ memory
    ///
    pub fn new() Poppler__StampAnnotation {
        return .{ .ptr = qtc.Poppler__StampAnnotation_new() };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__StampAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__StampAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__StampAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__StampAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stampIconName` instead
    ///
    pub const StampIconName = stampIconName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn stampIconName(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__StampAnnotation_StampIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__StampAnnotation.stampIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStampIconName` instead
    ///
    pub const SetStampIconName = setStampIconName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setStampIconName(self: Poppler__StampAnnotation, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__StampAnnotation_SetStampIconName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setStampCustomImage` instead
    ///
    pub const SetStampCustomImage = setStampCustomImage;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` image: QImage `
    ///
    pub fn setStampCustomImage(self: Poppler__StampAnnotation, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.Poppler__StampAnnotation_SetStampCustomImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__StampAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__StampAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__StampAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__StampAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__StampAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__StampAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn modificationDate(self: Poppler__StampAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__StampAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn creationDate(self: Poppler__StampAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__StampAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__StampAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn boundary(self: Poppler__StampAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__StampAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn style(self: Poppler__StampAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__StampAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn popup(self: Poppler__StampAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__StampAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__StampAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__StampAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__StampAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn delete(self: Poppler__StampAnnotation) void {
        qtc.Poppler__StampAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
pub const Poppler__SignatureAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__SignatureAnnotation,

    pub const _is_Poppler__SignatureAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::SignatureAnnotation object in C++ memory
    ///
    pub fn new() Poppler__SignatureAnnotation {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_new() };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__SignatureAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__SignatureAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__SignatureAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__SignatureAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setText(self: Poppler__SignatureAnnotation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setLeftText` instead
    ///
    pub const SetLeftText = setLeftText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setLeftText(self: Poppler__SignatureAnnotation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetLeftText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `fontSize` instead
    ///
    pub const FontSize = fontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn fontSize(self: Poppler__SignatureAnnotation) f64 {
        return qtc.Poppler__SignatureAnnotation_FontSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontSize` instead
    ///
    pub const SetFontSize = setFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _fontSize: f64 `
    ///
    pub fn setFontSize(self: Poppler__SignatureAnnotation, _fontSize: f64) void {
        qtc.Poppler__SignatureAnnotation_SetFontSize(@ptrCast(self.ptr), @bitCast(_fontSize));
    }

    /// ### DEPRECATED: Use `leftFontSize` instead
    ///
    pub const LeftFontSize = leftFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn leftFontSize(self: Poppler__SignatureAnnotation) f64 {
        return qtc.Poppler__SignatureAnnotation_LeftFontSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftFontSize` instead
    ///
    pub const SetLeftFontSize = setLeftFontSize;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _fontSize: f64 `
    ///
    pub fn setLeftFontSize(self: Poppler__SignatureAnnotation, _fontSize: f64) void {
        qtc.Poppler__SignatureAnnotation_SetLeftFontSize(@ptrCast(self.ptr), @bitCast(_fontSize));
    }

    /// ### DEPRECATED: Use `fontColor` instead
    ///
    pub const FontColor = fontColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn fontColor(self: Poppler__SignatureAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_FontColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontColor` instead
    ///
    pub const SetFontColor = setFontColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn setFontColor(self: Poppler__SignatureAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__SignatureAnnotation_SetFontColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn borderColor(self: Poppler__SignatureAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn setBorderColor(self: Poppler__SignatureAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__SignatureAnnotation_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `borderWidth` instead
    ///
    pub const BorderWidth = borderWidth;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn borderWidth(self: Poppler__SignatureAnnotation) f64 {
        return qtc.Poppler__SignatureAnnotation_BorderWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderWidth` instead
    ///
    pub const SetBorderWidth = setBorderWidth;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` width: f64 `
    ///
    pub fn setBorderWidth(self: Poppler__SignatureAnnotation, width: f64) void {
        qtc.Poppler__SignatureAnnotation_SetBorderWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn backgroundColor(self: Poppler__SignatureAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackgroundColor` instead
    ///
    pub const SetBackgroundColor = setBackgroundColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn setBackgroundColor(self: Poppler__SignatureAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__SignatureAnnotation_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `imagePath` instead
    ///
    pub const ImagePath = imagePath;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn imagePath(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureAnnotation_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureAnnotation.imagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setImagePath` instead
    ///
    pub const SetImagePath = setImagePath;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _imagePath: []const u8 `
    ///
    pub fn setImagePath(self: Poppler__SignatureAnnotation, _imagePath: []const u8) void {
        const imagePath_str = qtc.libqt_string{
            .len = _imagePath.len,
            .data = _imagePath.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetImagePath(@ptrCast(self.ptr), imagePath_str);
    }

    /// ### DEPRECATED: Use `fieldPartialName` instead
    ///
    pub const FieldPartialName = fieldPartialName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fieldPartialName(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureAnnotation_FieldPartialName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureAnnotation.fieldPartialName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFieldPartialName` instead
    ///
    pub const SetFieldPartialName = setFieldPartialName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _fieldPartialName: []const u8 `
    ///
    pub fn setFieldPartialName(self: Poppler__SignatureAnnotation, _fieldPartialName: []const u8) void {
        const fieldPartialName_str = qtc.libqt_string{
            .len = _fieldPartialName.len,
            .data = _fieldPartialName.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetFieldPartialName(@ptrCast(self.ptr), fieldPartialName_str);
    }

    /// ### DEPRECATED: Use `sign` instead
    ///
    pub const Sign = sign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` outputFileName: []const u8 `
    ///
    /// ` data: Poppler__PDFConverter__NewSignatureData `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SigningResult `
    ///
    pub fn sign(self: Poppler__SignatureAnnotation, outputFileName: []const u8, data: anytype) i32 {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        comptime _ = @TypeOf(data)._is_Poppler__PDFConverter__NewSignatureData;
        return qtc.Poppler__SignatureAnnotation_Sign(@ptrCast(self.ptr), outputFileName_str, @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__SignatureAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__SignatureAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SignatureAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__SignatureAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn modificationDate(self: Poppler__SignatureAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__SignatureAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn creationDate(self: Poppler__SignatureAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__SignatureAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__SignatureAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn boundary(self: Poppler__SignatureAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__SignatureAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn style(self: Poppler__SignatureAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__SignatureAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn popup(self: Poppler__SignatureAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__SignatureAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__SignatureAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__SignatureAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__SignatureAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn delete(self: Poppler__SignatureAnnotation) void {
        qtc.Poppler__SignatureAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
pub const Poppler__InkAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__InkAnnotation,

    pub const _is_Poppler__InkAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::InkAnnotation object in C++ memory
    ///
    pub fn new() Poppler__InkAnnotation {
        return .{ .ptr = qtc.Poppler__InkAnnotation_new() };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__InkAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__InkAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__InkAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__InkAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inkPaths` instead
    ///
    pub const InkPaths = inkPaths;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inkPaths(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) [][]QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__InkAnnotation_InkPaths(@ptrCast(self.ptr));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_free(_list[i].data);
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QPointF, _arr.len) catch @panic("Poppler__InkAnnotation.inkPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QPointF, _list[i].len) catch @panic("Poppler__InkAnnotation.inkPaths: Memory allocation failed");
            for (0.._list[i].len) |j|
                _ret[i][j] = .{ .ptr = _data_val[j] };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setInkPaths` instead
    ///
    pub const SetInkPaths = setInkPaths;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: [][]QPointF `
    ///
    pub fn setInkPaths(self: Poppler__InkAnnotation, allocator: std.mem.Allocator, paths: [][]QPointF) void {
        const paths_arr = allocator.alloc(qtc.libqt_list, paths.len) catch @panic("Poppler__InkAnnotation.setInkPaths: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..) |paths_inner, i|
            paths_arr[i] = qtc.libqt_list{
                .len = paths_inner.len,
                .data = @ptrCast(paths_inner.ptr),
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = @ptrCast(paths_arr.ptr),
        };
        qtc.Poppler__InkAnnotation_SetInkPaths(@ptrCast(self.ptr), paths_list);
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__InkAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__InkAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__InkAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__InkAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__InkAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__InkAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn modificationDate(self: Poppler__InkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__InkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn creationDate(self: Poppler__InkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__InkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__InkAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn boundary(self: Poppler__InkAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__InkAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn style(self: Poppler__InkAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__InkAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn popup(self: Poppler__InkAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__InkAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__InkAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__InkAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__InkAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn delete(self: Poppler__InkAnnotation) void {
        qtc.Poppler__InkAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
pub const Poppler__LinkAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkAnnotation,

    pub const _is_Poppler__LinkAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__LinkAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `linkDestination` instead
    ///
    pub const LinkDestination = linkDestination;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn linkDestination(self: Poppler__LinkAnnotation) Poppler__Link {
        return .{ .ptr = qtc.Poppler__LinkAnnotation_LinkDestination(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `linkHighlightMode` instead
    ///
    pub const LinkHighlightMode = linkHighlightMode;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.HighlightMode `
    ///
    pub fn linkHighlightMode(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__LinkAnnotation_LinkHighlightMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLinkHighlightMode` instead
    ///
    pub const SetLinkHighlightMode = setLinkHighlightMode;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` mode: poppler_annotation_enums.HighlightMode `
    ///
    pub fn setLinkHighlightMode(self: Poppler__LinkAnnotation, mode: i32) void {
        qtc.Poppler__LinkAnnotation_SetLinkHighlightMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `linkRegionPoint` instead
    ///
    pub const LinkRegionPoint = linkRegionPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` id: i32 `
    ///
    pub fn linkRegionPoint(self: Poppler__LinkAnnotation, id: i32) QPointF {
        return .{ .ptr = qtc.Poppler__LinkAnnotation_LinkRegionPoint(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### DEPRECATED: Use `setLinkRegionPoint` instead
    ///
    pub const SetLinkRegionPoint = setLinkRegionPoint;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` id: i32 `
    ///
    /// ` point: QPointF `
    ///
    pub fn setLinkRegionPoint(self: Poppler__LinkAnnotation, id: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.Poppler__LinkAnnotation_SetLinkRegionPoint(@ptrCast(self.ptr), @bitCast(id), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__LinkAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__LinkAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__LinkAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__LinkAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__LinkAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__LinkAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn modificationDate(self: Poppler__LinkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__LinkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn creationDate(self: Poppler__LinkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__LinkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__LinkAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn boundary(self: Poppler__LinkAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__LinkAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn style(self: Poppler__LinkAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__LinkAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn popup(self: Poppler__LinkAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__LinkAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__LinkAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__LinkAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__LinkAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn delete(self: Poppler__LinkAnnotation) void {
        qtc.Poppler__LinkAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
pub const Poppler__CaretAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__CaretAnnotation,

    pub const _is_Poppler__CaretAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::CaretAnnotation object in C++ memory
    ///
    pub fn new() Poppler__CaretAnnotation {
        return .{ .ptr = qtc.Poppler__CaretAnnotation_new() };
    }

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__CaretAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubType` instead
    ///
    pub const OnSubType = onSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSubType(self: Poppler__CaretAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__CaretAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubType` instead
    ///
    pub const SuperSubType = superSubType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn superSubType(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__CaretAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `caretSymbol` instead
    ///
    pub const CaretSymbol = caretSymbol;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.CaretSymbol `
    ///
    pub fn caretSymbol(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__CaretAnnotation_CaretSymbol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCaretSymbol` instead
    ///
    pub const SetCaretSymbol = setCaretSymbol;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` symbol: poppler_annotation_enums.CaretSymbol `
    ///
    pub fn setCaretSymbol(self: Poppler__CaretAnnotation, symbol: i32) void {
        qtc.Poppler__CaretAnnotation_SetCaretSymbol(@ptrCast(self.ptr), @bitCast(symbol));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__CaretAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__CaretAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__CaretAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__CaretAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__CaretAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__CaretAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn modificationDate(self: Poppler__CaretAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__CaretAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn creationDate(self: Poppler__CaretAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__CaretAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__CaretAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn boundary(self: Poppler__CaretAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__CaretAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn style(self: Poppler__CaretAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__CaretAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn popup(self: Poppler__CaretAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__CaretAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__CaretAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__CaretAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__CaretAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn delete(self: Poppler__CaretAnnotation) void {
        qtc.Poppler__CaretAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
pub const Poppler__FileAttachmentAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__FileAttachmentAnnotation,

    pub const _is_Poppler__FileAttachmentAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__FileAttachmentAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileIconName` instead
    ///
    pub const FileIconName = fileIconName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileIconName(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FileAttachmentAnnotation_FileIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FileAttachmentAnnotation.fileIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFileIconName` instead
    ///
    pub const SetFileIconName = setFileIconName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn setFileIconName(self: Poppler__FileAttachmentAnnotation, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__FileAttachmentAnnotation_SetFileIconName(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `embeddedFile` instead
    ///
    pub const EmbeddedFile = embeddedFile;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn embeddedFile(self: Poppler__FileAttachmentAnnotation) Poppler__EmbeddedFile {
        return .{ .ptr = qtc.Poppler__FileAttachmentAnnotation_EmbeddedFile(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEmbeddedFile` instead
    ///
    pub const SetEmbeddedFile = setEmbeddedFile;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` ef: Poppler__EmbeddedFile `
    ///
    pub fn setEmbeddedFile(self: Poppler__FileAttachmentAnnotation, ef: anytype) void {
        comptime _ = @TypeOf(ef)._is_Poppler__EmbeddedFile;
        qtc.Poppler__FileAttachmentAnnotation_SetEmbeddedFile(@ptrCast(self.ptr), @ptrCast(ef.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FileAttachmentAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__FileAttachmentAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FileAttachmentAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__FileAttachmentAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__FileAttachmentAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__FileAttachmentAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn modificationDate(self: Poppler__FileAttachmentAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__FileAttachmentAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn creationDate(self: Poppler__FileAttachmentAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__FileAttachmentAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__FileAttachmentAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn boundary(self: Poppler__FileAttachmentAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__FileAttachmentAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn style(self: Poppler__FileAttachmentAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__FileAttachmentAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn popup(self: Poppler__FileAttachmentAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__FileAttachmentAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__FileAttachmentAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__FileAttachmentAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__FileAttachmentAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn delete(self: Poppler__FileAttachmentAnnotation) void {
        qtc.Poppler__FileAttachmentAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
pub const Poppler__SoundAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__SoundAnnotation,

    pub const _is_Poppler__SoundAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__SoundAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `soundIconName` instead
    ///
    pub const SoundIconName = soundIconName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn soundIconName(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SoundAnnotation_SoundIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SoundAnnotation.soundIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSoundIconName` instead
    ///
    pub const SetSoundIconName = setSoundIconName;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn setSoundIconName(self: Poppler__SoundAnnotation, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__SoundAnnotation_SetSoundIconName(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `sound` instead
    ///
    pub const Sound = sound;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn sound(self: Poppler__SoundAnnotation) Poppler__SoundObject {
        return .{ .ptr = qtc.Poppler__SoundAnnotation_Sound(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSound` instead
    ///
    pub const SetSound = setSound;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` s: Poppler__SoundObject `
    ///
    pub fn setSound(self: Poppler__SoundAnnotation, s: anytype) void {
        comptime _ = @TypeOf(s)._is_Poppler__SoundObject;
        qtc.Poppler__SoundAnnotation_SetSound(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SoundAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__SoundAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SoundAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__SoundAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__SoundAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__SoundAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn modificationDate(self: Poppler__SoundAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__SoundAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn creationDate(self: Poppler__SoundAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__SoundAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__SoundAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn boundary(self: Poppler__SoundAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__SoundAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn style(self: Poppler__SoundAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__SoundAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn popup(self: Poppler__SoundAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__SoundAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__SoundAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__SoundAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__SoundAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn delete(self: Poppler__SoundAnnotation) void {
        qtc.Poppler__SoundAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
pub const Poppler__MovieAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__MovieAnnotation,

    pub const _is_Poppler__MovieAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__MovieAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `movie` instead
    ///
    pub const Movie = movie;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn movie(self: Poppler__MovieAnnotation) Poppler__MovieObject {
        return .{ .ptr = qtc.Poppler__MovieAnnotation_Movie(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMovie` instead
    ///
    pub const SetMovie = setMovie;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _movie: Poppler__MovieObject `
    ///
    pub fn setMovie(self: Poppler__MovieAnnotation, _movie: anytype) void {
        comptime _ = @TypeOf(_movie)._is_Poppler__MovieObject;
        qtc.Poppler__MovieAnnotation_SetMovie(@ptrCast(self.ptr), @ptrCast(_movie.ptr));
    }

    /// ### DEPRECATED: Use `movieTitle` instead
    ///
    pub const MovieTitle = movieTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn movieTitle(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MovieAnnotation_MovieTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MovieAnnotation.movieTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMovieTitle` instead
    ///
    pub const SetMovieTitle = setMovieTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setMovieTitle(self: Poppler__MovieAnnotation, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__MovieAnnotation_SetMovieTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MovieAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__MovieAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MovieAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__MovieAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__MovieAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__MovieAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn modificationDate(self: Poppler__MovieAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__MovieAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn creationDate(self: Poppler__MovieAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__MovieAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__MovieAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn boundary(self: Poppler__MovieAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__MovieAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn style(self: Poppler__MovieAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__MovieAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn popup(self: Poppler__MovieAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__MovieAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__MovieAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__MovieAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__MovieAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn delete(self: Poppler__MovieAnnotation) void {
        qtc.Poppler__MovieAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
pub const Poppler__ScreenAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__ScreenAnnotation,

    pub const _is_Poppler__ScreenAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__ScreenAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn action(self: Poppler__ScreenAnnotation) Poppler__LinkRendition {
        return .{ .ptr = qtc.Poppler__ScreenAnnotation_Action(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAction` instead
    ///
    pub const SetAction = setAction;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _action: Poppler__LinkRendition `
    ///
    pub fn setAction(self: Poppler__ScreenAnnotation, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_Poppler__LinkRendition;
        qtc.Poppler__ScreenAnnotation_SetAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `screenTitle` instead
    ///
    pub const ScreenTitle = screenTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn screenTitle(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__ScreenAnnotation_ScreenTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__ScreenAnnotation.screenTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setScreenTitle` instead
    ///
    pub const SetScreenTitle = setScreenTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setScreenTitle(self: Poppler__ScreenAnnotation, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__ScreenAnnotation_SetScreenTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__ScreenAnnotation, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__ScreenAnnotation_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__ScreenAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__ScreenAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__ScreenAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__ScreenAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__ScreenAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__ScreenAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn modificationDate(self: Poppler__ScreenAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__ScreenAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn creationDate(self: Poppler__ScreenAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__ScreenAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__ScreenAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn boundary(self: Poppler__ScreenAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__ScreenAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn style(self: Poppler__ScreenAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__ScreenAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn popup(self: Poppler__ScreenAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__ScreenAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__ScreenAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__ScreenAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__ScreenAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn delete(self: Poppler__ScreenAnnotation) void {
        qtc.Poppler__ScreenAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
pub const Poppler__WidgetAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__WidgetAnnotation,

    pub const _is_Poppler__WidgetAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__WidgetAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `additionalAction` instead
    ///
    pub const AdditionalAction = additionalAction;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn additionalAction(self: Poppler__WidgetAnnotation, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__WidgetAnnotation_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__WidgetAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__WidgetAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__WidgetAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__WidgetAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__WidgetAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__WidgetAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn modificationDate(self: Poppler__WidgetAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__WidgetAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn creationDate(self: Poppler__WidgetAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__WidgetAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__WidgetAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn boundary(self: Poppler__WidgetAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__WidgetAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn style(self: Poppler__WidgetAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__WidgetAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn popup(self: Poppler__WidgetAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__WidgetAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__WidgetAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__WidgetAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__WidgetAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn delete(self: Poppler__WidgetAnnotation) void {
        qtc.Poppler__WidgetAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
pub const Poppler__RichMediaAnnotation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation,

    pub const _is_Poppler__RichMediaAnnotation = {};
    pub const _is_Poppler__Annotation = {};

    /// ### DEPRECATED: Use `subType` instead
    ///
    pub const SubType = subType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn subType(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__RichMediaAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `settings` instead
    ///
    pub const Settings = settings;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn settings(self: Poppler__RichMediaAnnotation) Poppler__RichMediaAnnotation__Settings {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation_Settings(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `content` instead
    ///
    pub const Content = content;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn content(self: Poppler__RichMediaAnnotation) Poppler__RichMediaAnnotation__Content {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation_Content(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__RichMediaAnnotation.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _author: []const u8 `
    ///
    pub fn setAuthor(self: Poppler__RichMediaAnnotation, _author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = _author.len,
            .data = _author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### DEPRECATED: Use `contents` instead
    ///
    pub const Contents = contents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contents(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__RichMediaAnnotation.contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContents` instead
    ///
    pub const SetContents = setContents;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _contents: []const u8 `
    ///
    pub fn setContents(self: Poppler__RichMediaAnnotation, _contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = _contents.len,
            .data = _contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### DEPRECATED: Use `uniqueName` instead
    ///
    pub const UniqueName = uniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueName(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__RichMediaAnnotation.uniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueName` instead
    ///
    pub const SetUniqueName = setUniqueName;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _uniqueName: []const u8 `
    ///
    pub fn setUniqueName(self: Poppler__RichMediaAnnotation, _uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = _uniqueName.len,
            .data = _uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### DEPRECATED: Use `modificationDate` instead
    ///
    pub const ModificationDate = modificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn modificationDate(self: Poppler__RichMediaAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModificationDate` instead
    ///
    pub const SetModificationDate = setModificationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setModificationDate(self: Poppler__RichMediaAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `creationDate` instead
    ///
    pub const CreationDate = creationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn creationDate(self: Poppler__RichMediaAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCreationDate` instead
    ///
    pub const SetCreationDate = setCreationDate;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setCreationDate(self: Poppler__RichMediaAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn flags(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn setFlags(self: Poppler__RichMediaAnnotation, _flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `boundary` instead
    ///
    pub const Boundary = boundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn boundary(self: Poppler__RichMediaAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBoundary` instead
    ///
    pub const SetBoundary = setBoundary;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _boundary: QRectF `
    ///
    pub fn setBoundary(self: Poppler__RichMediaAnnotation, _boundary: anytype) void {
        comptime _ = @TypeOf(_boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(_boundary.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn style(self: Poppler__RichMediaAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _style: Poppler__Annotation__Style `
    ///
    pub fn setStyle(self: Poppler__RichMediaAnnotation, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `popup` instead
    ///
    pub const Popup = popup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn popup(self: Poppler__RichMediaAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPopup` instead
    ///
    pub const SetPopup = setPopup;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _popup: Poppler__Annotation__Popup `
    ///
    pub fn setPopup(self: Poppler__RichMediaAnnotation, _popup: anytype) void {
        comptime _ = @TypeOf(_popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(_popup.ptr));
    }

    /// ### DEPRECATED: Use `revisionScope` instead
    ///
    pub const RevisionScope = revisionScope;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn revisionScope(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisionType` instead
    ///
    pub const RevisionType = revisionType;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn revisionType(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revisions` instead
    ///
    pub const Revisions = revisions;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn revisions(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("Poppler__RichMediaAnnotation.revisions: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationAppearance` instead
    ///
    pub const AnnotationAppearance = annotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn annotationAppearance(self: Poppler__RichMediaAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAnnotationAppearance` instead
    ///
    pub const SetAnnotationAppearance = setAnnotationAppearance;

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` _annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn setAnnotationAppearance(self: Poppler__RichMediaAnnotation, _annotationAppearance: anytype) void {
        comptime _ = @TypeOf(_annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(_annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation) void {
        qtc.Poppler__RichMediaAnnotation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
pub const Poppler__Annotation__Style = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Annotation__Style,

    pub const _is_Poppler__Annotation__Style = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::Annotation::Style object in C++ memory
    ///
    pub fn new() Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation__Style_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Poppler::Annotation::Style object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__Annotation__Style `
    ///
    pub fn new2(other: anytype) Poppler__Annotation__Style {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Style;
        return .{ .ptr = qtc.Poppler__Annotation__Style_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` other: Poppler__Annotation__Style `
    ///
    pub fn operatorAssign(self: Poppler__Annotation__Style, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation__Style_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn color(self: Poppler__Annotation__Style) QColor {
        return .{ .ptr = qtc.Poppler__Annotation__Style_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: Poppler__Annotation__Style, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.Poppler__Annotation__Style_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn opacity(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: Poppler__Annotation__Style, _opacity: f64) void {
        qtc.Poppler__Annotation__Style_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn width(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: Poppler__Annotation__Style, _width: f64) void {
        qtc.Poppler__Annotation__Style_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `lineStyle` instead
    ///
    pub const LineStyle = lineStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineStyle `
    ///
    pub fn lineStyle(self: Poppler__Annotation__Style) i32 {
        return qtc.Poppler__Annotation__Style_LineStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineStyle` instead
    ///
    pub const SetLineStyle = setLineStyle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` _style: poppler_annotation_enums.LineStyle `
    ///
    pub fn setLineStyle(self: Poppler__Annotation__Style, _style: i32) void {
        qtc.Poppler__Annotation__Style_SetLineStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `xCorners` instead
    ///
    pub const XCorners = xCorners;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn xCorners(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_XCorners(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXCorners` instead
    ///
    pub const SetXCorners = setXCorners;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` radius: f64 `
    ///
    pub fn setXCorners(self: Poppler__Annotation__Style, radius: f64) void {
        qtc.Poppler__Annotation__Style_SetXCorners(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### DEPRECATED: Use `yCorners` instead
    ///
    pub const YCorners = yCorners;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn yCorners(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_YCorners(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setYCorners` instead
    ///
    pub const SetYCorners = setYCorners;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` radius: f64 `
    ///
    pub fn setYCorners(self: Poppler__Annotation__Style, radius: f64) void {
        qtc.Poppler__Annotation__Style_SetYCorners(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### DEPRECATED: Use `dashArray` instead
    ///
    pub const DashArray = dashArray;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dashArray(self: Poppler__Annotation__Style, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation__Style_DashArray(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("Poppler__Annotation__Style.dashArray: Memory allocation failed");
        const _data_val: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDashArray` instead
    ///
    pub const SetDashArray = setDashArray;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` array: []f64 `
    ///
    pub fn setDashArray(self: Poppler__Annotation__Style, array: []f64) void {
        const array_list = qtc.libqt_list{
            .len = array.len,
            .data = array.ptr,
        };
        qtc.Poppler__Annotation__Style_SetDashArray(@ptrCast(self.ptr), array_list);
    }

    /// ### DEPRECATED: Use `lineEffect` instead
    ///
    pub const LineEffect = lineEffect;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineEffect `
    ///
    pub fn lineEffect(self: Poppler__Annotation__Style) i32 {
        return qtc.Poppler__Annotation__Style_LineEffect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineEffect` instead
    ///
    pub const SetLineEffect = setLineEffect;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` effect: poppler_annotation_enums.LineEffect `
    ///
    pub fn setLineEffect(self: Poppler__Annotation__Style, effect: i32) void {
        qtc.Poppler__Annotation__Style_SetLineEffect(@ptrCast(self.ptr), @bitCast(effect));
    }

    /// ### DEPRECATED: Use `effectIntensity` instead
    ///
    pub const EffectIntensity = effectIntensity;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn effectIntensity(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_EffectIntensity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEffectIntensity` instead
    ///
    pub const SetEffectIntensity = setEffectIntensity;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` intens: f64 `
    ///
    pub fn setEffectIntensity(self: Poppler__Annotation__Style, intens: f64) void {
        qtc.Poppler__Annotation__Style_SetEffectIntensity(@ptrCast(self.ptr), @bitCast(intens));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn delete(self: Poppler__Annotation__Style) void {
        qtc.Poppler__Annotation__Style_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
pub const Poppler__Annotation__Popup = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Annotation__Popup,

    pub const _is_Poppler__Annotation__Popup = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::Annotation::Popup object in C++ memory
    ///
    pub fn new() Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation__Popup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Poppler::Annotation::Popup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__Annotation__Popup `
    ///
    pub fn new2(other: anytype) Poppler__Annotation__Popup {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Popup;
        return .{ .ptr = qtc.Poppler__Annotation__Popup_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` other: Poppler__Annotation__Popup `
    ///
    pub fn operatorAssign(self: Poppler__Annotation__Popup, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation__Popup_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    pub fn flags(self: Poppler__Annotation__Popup) i32 {
        return qtc.Poppler__Annotation__Popup_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` _flags: i32 `
    ///
    pub fn setFlags(self: Poppler__Annotation__Popup, _flags: i32) void {
        qtc.Poppler__Annotation__Popup_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    pub fn geometry(self: Poppler__Annotation__Popup) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation__Popup_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` geom: QRectF `
    ///
    pub fn setGeometry(self: Poppler__Annotation__Popup, geom: anytype) void {
        comptime _ = @TypeOf(geom)._is_QRectF;
        qtc.Poppler__Annotation__Popup_SetGeometry(@ptrCast(self.ptr), @ptrCast(geom.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: Poppler__Annotation__Popup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Annotation__Popup.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: Poppler__Annotation__Popup, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `summary` instead
    ///
    pub const Summary = summary;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn summary(self: Poppler__Annotation__Popup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Annotation__Popup.summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSummary` instead
    ///
    pub const SetSummary = setSummary;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` _summary: []const u8 `
    ///
    pub fn setSummary(self: Poppler__Annotation__Popup, _summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = _summary.len,
            .data = _summary.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: Poppler__Annotation__Popup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__Annotation__Popup.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: Poppler__Annotation__Popup, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    pub fn delete(self: Poppler__Annotation__Popup) void {
        qtc.Poppler__Annotation__Popup_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
pub const Poppler__HighlightAnnotation__Quad = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__HighlightAnnotation__Quad,

    pub const _is_Poppler__HighlightAnnotation__Quad = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::HighlightAnnotation::Quad object in C++ memory
    ///
    pub fn new() Poppler__HighlightAnnotation__Quad {
        return .{ .ptr = qtc.Poppler__HighlightAnnotation__Quad_new() };
    }

    /// ### DEPRECATED: Use `capStart` instead
    ///
    pub const CapStart = capStart;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn capStart(self: Poppler__HighlightAnnotation__Quad) bool {
        return qtc.Poppler__HighlightAnnotation__Quad_CapStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapStart` instead
    ///
    pub const SetCapStart = setCapStart;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    /// ` _capStart: bool `
    ///
    pub fn setCapStart(self: Poppler__HighlightAnnotation__Quad, _capStart: bool) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetCapStart(@ptrCast(self.ptr), _capStart);
    }

    /// ### DEPRECATED: Use `capEnd` instead
    ///
    pub const CapEnd = capEnd;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn capEnd(self: Poppler__HighlightAnnotation__Quad) bool {
        return qtc.Poppler__HighlightAnnotation__Quad_CapEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapEnd` instead
    ///
    pub const SetCapEnd = setCapEnd;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    /// ` _capEnd: bool `
    ///
    pub fn setCapEnd(self: Poppler__HighlightAnnotation__Quad, _capEnd: bool) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetCapEnd(@ptrCast(self.ptr), _capEnd);
    }

    /// ### DEPRECATED: Use `feather` instead
    ///
    pub const Feather = feather;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn feather(self: Poppler__HighlightAnnotation__Quad) f64 {
        return qtc.Poppler__HighlightAnnotation__Quad_Feather(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeather` instead
    ///
    pub const SetFeather = setFeather;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    /// ` _feather: f64 `
    ///
    pub fn setFeather(self: Poppler__HighlightAnnotation__Quad, _feather: f64) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetFeather(@ptrCast(self.ptr), @bitCast(_feather));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn delete(self: Poppler__HighlightAnnotation__Quad) void {
        qtc.Poppler__HighlightAnnotation__Quad_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
pub const Poppler__RichMediaAnnotation__Params = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Params,

    pub const _is_Poppler__RichMediaAnnotation__Params = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Params object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Params {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Params_new() };
    }

    /// ### DEPRECATED: Use `flashVars` instead
    ///
    pub const FlashVars = flashVars;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Params `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn flashVars(self: Poppler__RichMediaAnnotation__Params, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Params_FlashVars(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__RichMediaAnnotation__Params.flashVars: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Params `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Params) void {
        qtc.Poppler__RichMediaAnnotation__Params_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
pub const Poppler__RichMediaAnnotation__Instance = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Instance,

    pub const _is_Poppler__RichMediaAnnotation__Instance = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Instance object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Instance {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Instance_new() };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Instance `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Type `
    ///
    pub fn type0(self: Poppler__RichMediaAnnotation__Instance) i32 {
        return qtc.Poppler__RichMediaAnnotation__Instance_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `params` instead
    ///
    pub const Params = params;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Instance `
    ///
    pub fn params(self: Poppler__RichMediaAnnotation__Instance) Poppler__RichMediaAnnotation__Params {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Instance_Params(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Instance `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Instance) void {
        qtc.Poppler__RichMediaAnnotation__Instance_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
pub const Poppler__RichMediaAnnotation__Configuration = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Configuration,

    pub const _is_Poppler__RichMediaAnnotation__Configuration = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Configuration object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Configuration {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Configuration_new() };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Type `
    ///
    pub fn type0(self: Poppler__RichMediaAnnotation__Configuration) i32 {
        return qtc.Poppler__RichMediaAnnotation__Configuration_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__RichMediaAnnotation__Configuration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Configuration_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__RichMediaAnnotation__Configuration.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instances` instead
    ///
    pub const Instances = instances;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn instances(self: Poppler__RichMediaAnnotation__Configuration, allocator: std.mem.Allocator) []Poppler__RichMediaAnnotation__Instance {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Configuration_Instances(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__RichMediaAnnotation__Instance, _arr.len) catch @panic("Poppler__RichMediaAnnotation__Configuration.instances: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__RichMediaAnnotation__Instance = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Configuration) void {
        qtc.Poppler__RichMediaAnnotation__Configuration_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
pub const Poppler__RichMediaAnnotation__Asset = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Asset,

    pub const _is_Poppler__RichMediaAnnotation__Asset = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Asset object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Asset {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Asset_new() };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Asset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Poppler__RichMediaAnnotation__Asset, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Asset_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Poppler__RichMediaAnnotation__Asset.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `embeddedFile` instead
    ///
    pub const EmbeddedFile = embeddedFile;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Asset `
    ///
    pub fn embeddedFile(self: Poppler__RichMediaAnnotation__Asset) Poppler__EmbeddedFile {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Asset_EmbeddedFile(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Asset `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Asset) void {
        qtc.Poppler__RichMediaAnnotation__Asset_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
pub const Poppler__RichMediaAnnotation__Content = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Content,

    pub const _is_Poppler__RichMediaAnnotation__Content = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Content object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Content {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Content_new() };
    }

    /// ### DEPRECATED: Use `configurations` instead
    ///
    pub const Configurations = configurations;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn configurations(self: Poppler__RichMediaAnnotation__Content, allocator: std.mem.Allocator) []Poppler__RichMediaAnnotation__Configuration {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Content_Configurations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__RichMediaAnnotation__Configuration, _arr.len) catch @panic("Poppler__RichMediaAnnotation__Content.configurations: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__RichMediaAnnotation__Configuration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `assets` instead
    ///
    pub const Assets = assets;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn assets(self: Poppler__RichMediaAnnotation__Content, allocator: std.mem.Allocator) []Poppler__RichMediaAnnotation__Asset {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Content_Assets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__RichMediaAnnotation__Asset, _arr.len) catch @panic("Poppler__RichMediaAnnotation__Content.assets: Memory allocation failed");
        const _data_val: [*]QtC.Poppler__RichMediaAnnotation__Asset = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Content `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Content) void {
        qtc.Poppler__RichMediaAnnotation__Content_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
pub const Poppler__RichMediaAnnotation__Activation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Activation,

    pub const _is_Poppler__RichMediaAnnotation__Activation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Activation object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Activation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Activation_new() };
    }

    /// ### DEPRECATED: Use `condition` instead
    ///
    pub const Condition = condition;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Activation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Condition `
    ///
    pub fn condition(self: Poppler__RichMediaAnnotation__Activation) i32 {
        return qtc.Poppler__RichMediaAnnotation__Activation_Condition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Activation `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Activation) void {
        qtc.Poppler__RichMediaAnnotation__Activation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
pub const Poppler__RichMediaAnnotation__Deactivation = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Deactivation,

    pub const _is_Poppler__RichMediaAnnotation__Deactivation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Deactivation object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Deactivation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Deactivation_new() };
    }

    /// ### DEPRECATED: Use `condition` instead
    ///
    pub const Condition = condition;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Deactivation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Condition `
    ///
    pub fn condition(self: Poppler__RichMediaAnnotation__Deactivation) i32 {
        return qtc.Poppler__RichMediaAnnotation__Deactivation_Condition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Deactivation `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Deactivation) void {
        qtc.Poppler__RichMediaAnnotation__Deactivation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
pub const Poppler__RichMediaAnnotation__Settings = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__RichMediaAnnotation__Settings,

    pub const _is_Poppler__RichMediaAnnotation__Settings = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Poppler::RichMediaAnnotation::Settings object in C++ memory
    ///
    pub fn new() Poppler__RichMediaAnnotation__Settings {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Settings_new() };
    }

    /// ### DEPRECATED: Use `activation` instead
    ///
    pub const Activation = activation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn activation(self: Poppler__RichMediaAnnotation__Settings) Poppler__RichMediaAnnotation__Activation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Settings_Activation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deactivation` instead
    ///
    pub const Deactivation = deactivation;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn deactivation(self: Poppler__RichMediaAnnotation__Settings) Poppler__RichMediaAnnotation__Deactivation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Settings_Deactivation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn delete(self: Poppler__RichMediaAnnotation__Settings) void {
        qtc.Poppler__RichMediaAnnotation__Settings_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
pub const enums = struct {
    pub const SubType = enum(i32) {
        pub const AText: i32 = 1;
        pub const ALine: i32 = 2;
        pub const AGeom: i32 = 3;
        pub const AHighlight: i32 = 4;
        pub const AStamp: i32 = 5;
        pub const AInk: i32 = 6;
        pub const ALink: i32 = 7;
        pub const ACaret: i32 = 8;
        pub const AFileAttachment: i32 = 9;
        pub const ASound: i32 = 10;
        pub const AMovie: i32 = 11;
        pub const AScreen: i32 = 12;
        pub const AWidget: i32 = 13;
        pub const ARichMedia: i32 = 14;
    };

    pub const Flag = enum(i32) {
        pub const Hidden: i32 = 1;
        pub const FixedSize: i32 = 2;
        pub const FixedRotation: i32 = 4;
        pub const DenyPrint: i32 = 8;
        pub const DenyWrite: i32 = 16;
        pub const DenyDelete: i32 = 32;
        pub const ToggleHidingOnMouse: i32 = 64;
        pub const External: i32 = 128;
    };

    pub const LineStyle = enum(i32) {
        pub const Solid: i32 = 1;
        pub const Dashed: i32 = 2;
        pub const Beveled: i32 = 4;
        pub const Inset: i32 = 8;
        pub const Underline: i32 = 16;
    };

    pub const LineEffect = enum(i32) {
        pub const NoEffect: i32 = 1;
        pub const Cloudy: i32 = 2;
    };

    pub const RevScope = enum(i32) {
        pub const Root: i32 = 0;
        pub const Reply: i32 = 1;
        pub const Group: i32 = 2;
        pub const Delete: i32 = 4;
    };

    pub const RevType = enum(i32) {
        pub const None: i32 = 1;
        pub const Marked: i32 = 2;
        pub const Unmarked: i32 = 4;
        pub const Accepted: i32 = 8;
        pub const Rejected: i32 = 16;
        pub const Cancelled: i32 = 32;
        pub const Completed: i32 = 64;
    };

    pub const AdditionalActionType = enum(i32) {
        pub const CursorEnteringAction: i32 = 0;
        pub const CursorLeavingAction: i32 = 1;
        pub const MousePressedAction: i32 = 2;
        pub const MouseReleasedAction: i32 = 3;
        pub const FocusInAction: i32 = 4;
        pub const FocusOutAction: i32 = 5;
        pub const PageOpeningAction: i32 = 6;
        pub const PageClosingAction: i32 = 7;
        pub const PageVisibleAction: i32 = 8;
        pub const PageInvisibleAction: i32 = 9;
    };

    pub const TextType = enum(i32) {
        pub const Linked: i32 = 0;
        pub const InPlace: i32 = 1;
    };

    pub const InplaceIntent = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Callout: i32 = 1;
        pub const TypeWriter: i32 = 2;
    };

    pub const InplaceAlignPosition = enum(i32) {
        pub const InplaceAlignLeft: i32 = 0;
        pub const InplaceAlignCenter: i32 = 1;
        pub const InplaceAlignRight: i32 = 2;
    };

    pub const LineType = enum(i32) {
        pub const StraightLine: i32 = 0;
        pub const Polyline: i32 = 1;
    };

    pub const TermStyle = enum(i32) {
        pub const Square: i32 = 0;
        pub const Circle: i32 = 1;
        pub const Diamond: i32 = 2;
        pub const OpenArrow: i32 = 3;
        pub const ClosedArrow: i32 = 4;
        pub const None: i32 = 5;
        pub const Butt: i32 = 6;
        pub const ROpenArrow: i32 = 7;
        pub const RClosedArrow: i32 = 8;
        pub const Slash: i32 = 9;
    };

    pub const LineIntent = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Arrow: i32 = 1;
        pub const Dimension: i32 = 2;
        pub const PolygonCloud: i32 = 3;
    };

    pub const GeomType = enum(i32) {
        pub const InscribedSquare: i32 = 0;
        pub const InscribedCircle: i32 = 1;
    };

    pub const HighlightType = enum(i32) {
        pub const Highlight: i32 = 0;
        pub const Squiggly: i32 = 1;
        pub const Underline: i32 = 2;
        pub const StrikeOut: i32 = 3;
    };

    pub const SigningResult = enum(i32) {
        pub const SigningSuccess: i32 = 0;
        pub const FieldAlreadySigned: i32 = 1;
        pub const GenericSigningError: i32 = 2;
        pub const InternalError: i32 = 3;
        pub const KeyMissing: i32 = 4;
        pub const WriteFailed: i32 = 5;
        pub const UserCancelled: i32 = 6;
        pub const BadPassphrase: i32 = 7;
    };

    pub const HighlightMode = enum(i32) {
        pub const None: i32 = 0;
        pub const Invert: i32 = 1;
        pub const Outline: i32 = 2;
        pub const Push: i32 = 3;
    };

    pub const CaretSymbol = enum(i32) {
        pub const None: i32 = 0;
        pub const P: i32 = 1;
    };

    pub const Type = enum(i32) {
        pub const Type3D: i32 = 0;
        pub const TypeFlash: i32 = 1;
        pub const TypeSound: i32 = 2;
        pub const TypeVideo: i32 = 3;
    };

    pub const Condition = enum(i32) {
        pub const PageOpened: i32 = 0;
        pub const PageVisible: i32 = 1;
        pub const UserAction: i32 = 2;
    };
};
