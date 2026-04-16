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

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: Poppler__Annotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__Annotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: Poppler__Annotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__Annotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: Poppler__Annotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__Annotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn ModificationDate(self: Poppler__Annotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn SetModificationDate(self: Poppler__Annotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn CreationDate(self: Poppler__Annotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` date: QDateTime `
    ///
    pub fn SetCreationDate(self: Poppler__Annotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__Annotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn Boundary(self: Poppler__Annotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__Annotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn Style(self: Poppler__Annotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__Annotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn Popup(self: Poppler__Annotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__Annotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: Poppler__Annotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__annotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn SubType(self: Poppler__Annotation) i32 {
        return qtc.Poppler__Annotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__Annotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__Annotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Annotation `
    ///
    pub fn Delete(self: Poppler__Annotation) void {
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

    /// New constructs a new Poppler::TextAnnotation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: poppler_annotation_enums.TextType `
    ///
    pub fn New(typeVal: i32) Poppler__TextAnnotation {
        return .{ .ptr = qtc.Poppler__TextAnnotation_new(@bitCast(typeVal)) };
    }

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
    pub fn SubType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__TextAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__TextAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

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
    pub fn TextType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_TextType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextIcon(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__TextAnnotation_TextIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textannotation.TextIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetTextIcon(self: Poppler__TextAnnotation, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__TextAnnotation_SetTextIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn TextFont(self: Poppler__TextAnnotation) QFont {
        return .{ .ptr = qtc.Poppler__TextAnnotation_TextFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTextFont(self: Poppler__TextAnnotation, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.Poppler__TextAnnotation_SetTextFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn TextColor(self: Poppler__TextAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__TextAnnotation_TextColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn SetTextColor(self: Poppler__TextAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__TextAnnotation_SetTextColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn InplaceAlign(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_InplaceAlign(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` alignVal: poppler_annotation_enums.InplaceAlignPosition `
    ///
    pub fn SetInplaceAlign(self: Poppler__TextAnnotation, alignVal: i32) void {
        qtc.Poppler__TextAnnotation_SetInplaceAlign(@ptrCast(self.ptr), @bitCast(alignVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` id: i32 `
    ///
    pub fn CalloutPoint(self: Poppler__TextAnnotation, id: i32) QPointF {
        return .{ .ptr = qtc.Poppler__TextAnnotation_CalloutPoint(@ptrCast(self.ptr), @bitCast(id)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CalloutPoints(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__TextAnnotation_CalloutPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("poppler__textannotation.CalloutPoints: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` points: []QPointF `
    ///
    pub fn SetCalloutPoints(self: Poppler__TextAnnotation, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.Poppler__TextAnnotation_SetCalloutPoints(@ptrCast(self.ptr), points_list);
    }

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
    pub fn InplaceIntent(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__TextAnnotation_InplaceIntent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` intent: poppler_annotation_enums.InplaceIntent `
    ///
    pub fn SetInplaceIntent(self: Poppler__TextAnnotation, intent: i32) void {
        qtc.Poppler__TextAnnotation_SetInplaceIntent(@ptrCast(self.ptr), @bitCast(intent));
    }

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
    pub fn Author(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__TextAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__TextAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__TextAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__TextAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__TextAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn CreationDate(self: Poppler__TextAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__TextAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__TextAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn Boundary(self: Poppler__TextAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__TextAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn Style(self: Poppler__TextAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__TextAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn Popup(self: Poppler__TextAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__TextAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__TextAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__TextAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__textannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__TextAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__TextAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__TextAnnotation `
    ///
    pub fn Delete(self: Poppler__TextAnnotation) void {
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

    /// New constructs a new Poppler::LineAnnotation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: poppler_annotation_enums.LineType `
    ///
    pub fn New(typeVal: i32) Poppler__LineAnnotation {
        return .{ .ptr = qtc.Poppler__LineAnnotation_new(@bitCast(typeVal)) };
    }

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
    pub fn SubType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__LineAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LineAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

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
    pub fn LineType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LinePoints(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__LineAnnotation_LinePoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("poppler__lineannotation.LinePoints: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` points: []QPointF `
    ///
    pub fn SetLinePoints(self: Poppler__LineAnnotation, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.Poppler__LineAnnotation_SetLinePoints(@ptrCast(self.ptr), points_list);
    }

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
    pub fn LineStartStyle(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineStartStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` style: poppler_annotation_enums.TermStyle `
    ///
    pub fn SetLineStartStyle(self: Poppler__LineAnnotation, style: i32) void {
        qtc.Poppler__LineAnnotation_SetLineStartStyle(@ptrCast(self.ptr), @bitCast(style));
    }

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
    pub fn LineEndStyle(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineEndStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` style: poppler_annotation_enums.TermStyle `
    ///
    pub fn SetLineEndStyle(self: Poppler__LineAnnotation, style: i32) void {
        qtc.Poppler__LineAnnotation_SetLineEndStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn IsLineClosed(self: Poppler__LineAnnotation) bool {
        return qtc.Poppler__LineAnnotation_IsLineClosed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` closed: bool `
    ///
    pub fn SetLineClosed(self: Poppler__LineAnnotation, closed: bool) void {
        qtc.Poppler__LineAnnotation_SetLineClosed(@ptrCast(self.ptr), closed);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn LineInnerColor(self: Poppler__LineAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__LineAnnotation_LineInnerColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLineInnerColor(self: Poppler__LineAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__LineAnnotation_SetLineInnerColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn LineLeadingForwardPoint(self: Poppler__LineAnnotation) f64 {
        return qtc.Poppler__LineAnnotation_LineLeadingForwardPoint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` point: f64 `
    ///
    pub fn SetLineLeadingForwardPoint(self: Poppler__LineAnnotation, point: f64) void {
        qtc.Poppler__LineAnnotation_SetLineLeadingForwardPoint(@ptrCast(self.ptr), @bitCast(point));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn LineLeadingBackPoint(self: Poppler__LineAnnotation) f64 {
        return qtc.Poppler__LineAnnotation_LineLeadingBackPoint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` point: f64 `
    ///
    pub fn SetLineLeadingBackPoint(self: Poppler__LineAnnotation, point: f64) void {
        qtc.Poppler__LineAnnotation_SetLineLeadingBackPoint(@ptrCast(self.ptr), @bitCast(point));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn LineShowCaption(self: Poppler__LineAnnotation) bool {
        return qtc.Poppler__LineAnnotation_LineShowCaption(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` show: bool `
    ///
    pub fn SetLineShowCaption(self: Poppler__LineAnnotation, show: bool) void {
        qtc.Poppler__LineAnnotation_SetLineShowCaption(@ptrCast(self.ptr), show);
    }

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
    pub fn LineIntent(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__LineAnnotation_LineIntent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` intent: poppler_annotation_enums.LineIntent `
    ///
    pub fn SetLineIntent(self: Poppler__LineAnnotation, intent: i32) void {
        qtc.Poppler__LineAnnotation_SetLineIntent(@ptrCast(self.ptr), @bitCast(intent));
    }

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
    pub fn Author(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__lineannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__LineAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__lineannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__LineAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__lineannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__LineAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__LineAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__LineAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn CreationDate(self: Poppler__LineAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__LineAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__LineAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn Boundary(self: Poppler__LineAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__LineAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn Style(self: Poppler__LineAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__LineAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn Popup(self: Poppler__LineAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__LineAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__LineAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__LineAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__lineannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__LineAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__LineAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__LineAnnotation `
    ///
    pub fn Delete(self: Poppler__LineAnnotation) void {
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

    /// New constructs a new Poppler::GeomAnnotation object.
    ///
    pub fn New() Poppler__GeomAnnotation {
        return .{ .ptr = qtc.Poppler__GeomAnnotation_new() };
    }

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
    pub fn SubType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__GeomAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__GeomAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__GeomAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__GeomAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

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
    pub fn GeomType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__GeomAnnotation_GeomType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.GeomType `
    ///
    pub fn SetGeomType(self: Poppler__GeomAnnotation, typeVal: i32) void {
        qtc.Poppler__GeomAnnotation_SetGeomType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn GeomInnerColor(self: Poppler__GeomAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__GeomAnnotation_GeomInnerColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn SetGeomInnerColor(self: Poppler__GeomAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__GeomAnnotation_SetGeomInnerColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn Author(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__geomannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__GeomAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__geomannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__GeomAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__geomannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__GeomAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__GeomAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__GeomAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn CreationDate(self: Poppler__GeomAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__GeomAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__GeomAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn Boundary(self: Poppler__GeomAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__GeomAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn Style(self: Poppler__GeomAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__GeomAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn Popup(self: Poppler__GeomAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__GeomAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__GeomAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__GeomAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__geomannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__GeomAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__GeomAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__GeomAnnotation `
    ///
    pub fn Delete(self: Poppler__GeomAnnotation) void {
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

    /// New constructs a new Poppler::HighlightAnnotation object.
    ///
    pub fn New() Poppler__HighlightAnnotation {
        return .{ .ptr = qtc.Poppler__HighlightAnnotation_new() };
    }

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
    pub fn SubType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__HighlightAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__HighlightAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__HighlightAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__HighlightAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

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
    pub fn HighlightType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__HighlightAnnotation_HighlightType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.HighlightType `
    ///
    pub fn SetHighlightType(self: Poppler__HighlightAnnotation, typeVal: i32) void {
        qtc.Poppler__HighlightAnnotation_SetHighlightType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HighlightQuads(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []Poppler__HighlightAnnotation__Quad {
        const _arr: qtc.libqt_list = qtc.Poppler__HighlightAnnotation_HighlightQuads(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__HighlightAnnotation__Quad, _arr.len) catch @panic("poppler__highlightannotation.HighlightQuads: Memory allocation failed");
        const _data: [*]QtC.Poppler__HighlightAnnotation__Quad = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` quads: []Poppler__HighlightAnnotation__Quad `
    ///
    pub fn SetHighlightQuads(self: Poppler__HighlightAnnotation, quads: []Poppler__HighlightAnnotation__Quad) void {
        const quads_list = qtc.libqt_list{
            .len = quads.len,
            .data = @ptrCast(quads.ptr),
        };
        qtc.Poppler__HighlightAnnotation_SetHighlightQuads(@ptrCast(self.ptr), quads_list);
    }

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
    pub fn Author(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__highlightannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__HighlightAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__highlightannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__HighlightAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__highlightannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__HighlightAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__HighlightAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__HighlightAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn CreationDate(self: Poppler__HighlightAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__HighlightAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__HighlightAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn Boundary(self: Poppler__HighlightAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__HighlightAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn Style(self: Poppler__HighlightAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__HighlightAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn Popup(self: Poppler__HighlightAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__HighlightAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__HighlightAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__HighlightAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__highlightannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__HighlightAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__HighlightAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__HighlightAnnotation `
    ///
    pub fn Delete(self: Poppler__HighlightAnnotation) void {
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

    /// New constructs a new Poppler::StampAnnotation object.
    ///
    pub fn New() Poppler__StampAnnotation {
        return .{ .ptr = qtc.Poppler__StampAnnotation_new() };
    }

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
    pub fn SubType(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__StampAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__StampAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__StampAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__StampAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StampIconName(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__StampAnnotation_StampIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__stampannotation.StampIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetStampIconName(self: Poppler__StampAnnotation, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__StampAnnotation_SetStampIconName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` image: QImage `
    ///
    pub fn SetStampCustomImage(self: Poppler__StampAnnotation, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.Poppler__StampAnnotation_SetStampCustomImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

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
    pub fn Author(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__stampannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__StampAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__stampannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__StampAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__stampannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__StampAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__StampAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__StampAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn CreationDate(self: Poppler__StampAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__StampAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__StampAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn Boundary(self: Poppler__StampAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__StampAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn Style(self: Poppler__StampAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__StampAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn Popup(self: Poppler__StampAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__StampAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__StampAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__StampAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__stampannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__StampAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__StampAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__StampAnnotation `
    ///
    pub fn Delete(self: Poppler__StampAnnotation) void {
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

    /// New constructs a new Poppler::SignatureAnnotation object.
    ///
    pub fn New() Poppler__SignatureAnnotation {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_new() };
    }

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
    pub fn SubType(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__SignatureAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__SignatureAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__SignatureAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__SignatureAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: Poppler__SignatureAnnotation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetLeftText(self: Poppler__SignatureAnnotation, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetLeftText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn FontSize(self: Poppler__SignatureAnnotation) f64 {
        return qtc.Poppler__SignatureAnnotation_FontSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetFontSize(self: Poppler__SignatureAnnotation, fontSize: f64) void {
        qtc.Poppler__SignatureAnnotation_SetFontSize(@ptrCast(self.ptr), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn LeftFontSize(self: Poppler__SignatureAnnotation) f64 {
        return qtc.Poppler__SignatureAnnotation_LeftFontSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetLeftFontSize(self: Poppler__SignatureAnnotation, fontSize: f64) void {
        qtc.Poppler__SignatureAnnotation_SetLeftFontSize(@ptrCast(self.ptr), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn FontColor(self: Poppler__SignatureAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_FontColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn SetFontColor(self: Poppler__SignatureAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__SignatureAnnotation_SetFontColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn BorderColor(self: Poppler__SignatureAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBorderColor(self: Poppler__SignatureAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__SignatureAnnotation_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn BorderWidth(self: Poppler__SignatureAnnotation) f64 {
        return qtc.Poppler__SignatureAnnotation_BorderWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBorderWidth(self: Poppler__SignatureAnnotation, width: f64) void {
        qtc.Poppler__SignatureAnnotation_SetBorderWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn BackgroundColor(self: Poppler__SignatureAnnotation) QColor {
        return .{ .ptr = qtc.Poppler__SignatureAnnotation_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBackgroundColor(self: Poppler__SignatureAnnotation, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__SignatureAnnotation_SetBackgroundColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImagePath(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureAnnotation_ImagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` imagePath: []const u8 `
    ///
    pub fn SetImagePath(self: Poppler__SignatureAnnotation, imagePath: []const u8) void {
        const imagePath_str = qtc.libqt_string{
            .len = imagePath.len,
            .data = imagePath.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetImagePath(@ptrCast(self.ptr), imagePath_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FieldPartialName(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureAnnotation_FieldPartialName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.FieldPartialName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` fieldPartialName: []const u8 `
    ///
    pub fn SetFieldPartialName(self: Poppler__SignatureAnnotation, fieldPartialName: []const u8) void {
        const fieldPartialName_str = qtc.libqt_string{
            .len = fieldPartialName.len,
            .data = fieldPartialName.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetFieldPartialName(@ptrCast(self.ptr), fieldPartialName_str);
    }

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
    pub fn Sign(self: Poppler__SignatureAnnotation, outputFileName: []const u8, data: anytype) i32 {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        comptime _ = @TypeOf(data)._is_Poppler__PDFConverter__NewSignatureData;
        return qtc.Poppler__SignatureAnnotation_Sign(@ptrCast(self.ptr), outputFileName_str, @ptrCast(data.ptr));
    }

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
    pub fn Author(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__SignatureAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__SignatureAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__SignatureAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__SignatureAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__SignatureAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn CreationDate(self: Poppler__SignatureAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__SignatureAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__SignatureAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn Boundary(self: Poppler__SignatureAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__SignatureAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn Style(self: Poppler__SignatureAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__SignatureAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn Popup(self: Poppler__SignatureAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__SignatureAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__SignatureAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__SignatureAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__signatureannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__SignatureAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__SignatureAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__SignatureAnnotation `
    ///
    pub fn Delete(self: Poppler__SignatureAnnotation) void {
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

    /// New constructs a new Poppler::InkAnnotation object.
    ///
    pub fn New() Poppler__InkAnnotation {
        return .{ .ptr = qtc.Poppler__InkAnnotation_new() };
    }

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
    pub fn SubType(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__InkAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__InkAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__InkAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__InkAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InkPaths(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) [][]QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__InkAnnotation_InkPaths(@ptrCast(self.ptr));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_free(_list[i].data);
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QPointF, _arr.len) catch @panic("poppler__inkannotation.InkPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QPointF, _list[i].len) catch @panic("poppler__inkannotation.InkPaths: Memory allocation failed");
            for (0.._list[i].len) |j|
                _ret[i][j] = .{ .ptr = _data[j] };
        }
        return _ret;
    }

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
    pub fn SetInkPaths(self: Poppler__InkAnnotation, allocator: std.mem.Allocator, paths: [][]QPointF) void {
        const paths_arr = allocator.alloc(qtc.libqt_list, paths.len) catch @panic("poppler__inkannotation.SetInkPaths: Memory allocation failed");
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
    pub fn Author(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__inkannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__InkAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__inkannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__InkAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__inkannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__InkAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__InkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__InkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn CreationDate(self: Poppler__InkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__InkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__InkAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn Boundary(self: Poppler__InkAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__InkAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn Style(self: Poppler__InkAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__InkAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn Popup(self: Poppler__InkAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__InkAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__InkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__InkAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__inkannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__InkAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__InkAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__InkAnnotation `
    ///
    pub fn Delete(self: Poppler__InkAnnotation) void {
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
    pub fn SubType(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__LinkAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn LinkDestination(self: Poppler__LinkAnnotation) Poppler__Link {
        return .{ .ptr = qtc.Poppler__LinkAnnotation_LinkDestination(@ptrCast(self.ptr)) };
    }

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
    pub fn LinkHighlightMode(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__LinkAnnotation_LinkHighlightMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` mode: poppler_annotation_enums.HighlightMode `
    ///
    pub fn SetLinkHighlightMode(self: Poppler__LinkAnnotation, mode: i32) void {
        qtc.Poppler__LinkAnnotation_SetLinkHighlightMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` id: i32 `
    ///
    pub fn LinkRegionPoint(self: Poppler__LinkAnnotation, id: i32) QPointF {
        return .{ .ptr = qtc.Poppler__LinkAnnotation_LinkRegionPoint(@ptrCast(self.ptr), @bitCast(id)) };
    }

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
    pub fn SetLinkRegionPoint(self: Poppler__LinkAnnotation, id: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.Poppler__LinkAnnotation_SetLinkRegionPoint(@ptrCast(self.ptr), @bitCast(id), @ptrCast(point.ptr));
    }

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
    pub fn Author(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__LinkAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__LinkAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__LinkAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__LinkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__LinkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn CreationDate(self: Poppler__LinkAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__LinkAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__LinkAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn Boundary(self: Poppler__LinkAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__LinkAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn Style(self: Poppler__LinkAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__LinkAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn Popup(self: Poppler__LinkAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__LinkAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__LinkAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__LinkAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__linkannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__LinkAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__LinkAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__LinkAnnotation `
    ///
    pub fn Delete(self: Poppler__LinkAnnotation) void {
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

    /// New constructs a new Poppler::CaretAnnotation object.
    ///
    pub fn New() Poppler__CaretAnnotation {
        return .{ .ptr = qtc.Poppler__CaretAnnotation_new() };
    }

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
    pub fn SubType(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__CaretAnnotation_SubType(@ptrCast(self.ptr));
    }

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
    pub fn OnSubType(self: Poppler__CaretAnnotation, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__CaretAnnotation_OnSubType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubType` instead
    ///
    pub const QBaseSubType = SuperSubType;

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
    pub fn SuperSubType(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__CaretAnnotation_SuperSubType(@ptrCast(self.ptr));
    }

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
    pub fn CaretSymbol(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__CaretAnnotation_CaretSymbol(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` symbol: poppler_annotation_enums.CaretSymbol `
    ///
    pub fn SetCaretSymbol(self: Poppler__CaretAnnotation, symbol: i32) void {
        qtc.Poppler__CaretAnnotation_SetCaretSymbol(@ptrCast(self.ptr), @bitCast(symbol));
    }

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
    pub fn Author(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__caretannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__CaretAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__caretannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__CaretAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__caretannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__CaretAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__CaretAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__CaretAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn CreationDate(self: Poppler__CaretAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__CaretAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__CaretAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn Boundary(self: Poppler__CaretAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__CaretAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn Style(self: Poppler__CaretAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__CaretAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn Popup(self: Poppler__CaretAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__CaretAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__CaretAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__CaretAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__caretannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__CaretAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__CaretAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__CaretAnnotation `
    ///
    pub fn Delete(self: Poppler__CaretAnnotation) void {
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
    pub fn SubType(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__FileAttachmentAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileIconName(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FileAttachmentAnnotation_FileIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fileattachmentannotation.FileIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetFileIconName(self: Poppler__FileAttachmentAnnotation, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__FileAttachmentAnnotation_SetFileIconName(@ptrCast(self.ptr), icon_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn EmbeddedFile(self: Poppler__FileAttachmentAnnotation) Poppler__EmbeddedFile {
        return .{ .ptr = qtc.Poppler__FileAttachmentAnnotation_EmbeddedFile(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` ef: Poppler__EmbeddedFile `
    ///
    pub fn SetEmbeddedFile(self: Poppler__FileAttachmentAnnotation, ef: anytype) void {
        comptime _ = @TypeOf(ef)._is_Poppler__EmbeddedFile;
        qtc.Poppler__FileAttachmentAnnotation_SetEmbeddedFile(@ptrCast(self.ptr), @ptrCast(ef.ptr));
    }

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
    pub fn Author(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fileattachmentannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__FileAttachmentAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fileattachmentannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__FileAttachmentAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fileattachmentannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__FileAttachmentAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__FileAttachmentAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__FileAttachmentAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn CreationDate(self: Poppler__FileAttachmentAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__FileAttachmentAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__FileAttachmentAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn Boundary(self: Poppler__FileAttachmentAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__FileAttachmentAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn Style(self: Poppler__FileAttachmentAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__FileAttachmentAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn Popup(self: Poppler__FileAttachmentAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__FileAttachmentAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__FileAttachmentAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__FileAttachmentAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__fileattachmentannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__FileAttachmentAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__FileAttachmentAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__FileAttachmentAnnotation `
    ///
    pub fn Delete(self: Poppler__FileAttachmentAnnotation) void {
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
    pub fn SubType(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__SoundAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SoundIconName(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SoundAnnotation_SoundIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundannotation.SoundIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetSoundIconName(self: Poppler__SoundAnnotation, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__SoundAnnotation_SetSoundIconName(@ptrCast(self.ptr), icon_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn Sound(self: Poppler__SoundAnnotation) Poppler__SoundObject {
        return .{ .ptr = qtc.Poppler__SoundAnnotation_Sound(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` s: Poppler__SoundObject `
    ///
    pub fn SetSound(self: Poppler__SoundAnnotation, s: anytype) void {
        comptime _ = @TypeOf(s)._is_Poppler__SoundObject;
        qtc.Poppler__SoundAnnotation_SetSound(@ptrCast(self.ptr), @ptrCast(s.ptr));
    }

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
    pub fn Author(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__SoundAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__SoundAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__SoundAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__SoundAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__SoundAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn CreationDate(self: Poppler__SoundAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__SoundAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__SoundAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn Boundary(self: Poppler__SoundAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__SoundAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn Style(self: Poppler__SoundAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__SoundAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn Popup(self: Poppler__SoundAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__SoundAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__SoundAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__SoundAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__soundannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__SoundAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__SoundAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__SoundAnnotation `
    ///
    pub fn Delete(self: Poppler__SoundAnnotation) void {
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
    pub fn SubType(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__MovieAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn Movie(self: Poppler__MovieAnnotation) Poppler__MovieObject {
        return .{ .ptr = qtc.Poppler__MovieAnnotation_Movie(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` movie: Poppler__MovieObject `
    ///
    pub fn SetMovie(self: Poppler__MovieAnnotation, movie: anytype) void {
        comptime _ = @TypeOf(movie)._is_Poppler__MovieObject;
        qtc.Poppler__MovieAnnotation_SetMovie(@ptrCast(self.ptr), @ptrCast(movie.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MovieTitle(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MovieAnnotation_MovieTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieannotation.MovieTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetMovieTitle(self: Poppler__MovieAnnotation, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__MovieAnnotation_SetMovieTitle(@ptrCast(self.ptr), title_str);
    }

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
    pub fn Author(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__MovieAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__MovieAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__MovieAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__MovieAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__MovieAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn CreationDate(self: Poppler__MovieAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__MovieAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__MovieAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn Boundary(self: Poppler__MovieAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__MovieAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn Style(self: Poppler__MovieAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__MovieAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn Popup(self: Poppler__MovieAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__MovieAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__MovieAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__MovieAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__movieannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__MovieAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__MovieAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__MovieAnnotation `
    ///
    pub fn Delete(self: Poppler__MovieAnnotation) void {
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
    pub fn SubType(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__ScreenAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn Action(self: Poppler__ScreenAnnotation) Poppler__LinkRendition {
        return .{ .ptr = qtc.Poppler__ScreenAnnotation_Action(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` action: Poppler__LinkRendition `
    ///
    pub fn SetAction(self: Poppler__ScreenAnnotation, action: anytype) void {
        comptime _ = @TypeOf(action)._is_Poppler__LinkRendition;
        qtc.Poppler__ScreenAnnotation_SetAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScreenTitle(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__ScreenAnnotation_ScreenTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__screenannotation.ScreenTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetScreenTitle(self: Poppler__ScreenAnnotation, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__ScreenAnnotation_SetScreenTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: Poppler__ScreenAnnotation, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__ScreenAnnotation_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

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
    pub fn Author(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__screenannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__ScreenAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__screenannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__ScreenAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__screenannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__ScreenAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__ScreenAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__ScreenAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn CreationDate(self: Poppler__ScreenAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__ScreenAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__ScreenAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn Boundary(self: Poppler__ScreenAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__ScreenAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn Style(self: Poppler__ScreenAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__ScreenAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn Popup(self: Poppler__ScreenAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__ScreenAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__ScreenAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__ScreenAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__screenannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__ScreenAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__ScreenAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__ScreenAnnotation `
    ///
    pub fn Delete(self: Poppler__ScreenAnnotation) void {
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
    pub fn SubType(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__WidgetAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: Poppler__WidgetAnnotation, typeVal: i32) Poppler__Link {
        return .{ .ptr = qtc.Poppler__WidgetAnnotation_AdditionalAction(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

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
    pub fn Author(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__widgetannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__WidgetAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__widgetannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__WidgetAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__widgetannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__WidgetAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__WidgetAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__WidgetAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn CreationDate(self: Poppler__WidgetAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__WidgetAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__WidgetAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn Boundary(self: Poppler__WidgetAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__WidgetAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn Style(self: Poppler__WidgetAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__WidgetAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn Popup(self: Poppler__WidgetAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__WidgetAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__WidgetAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__WidgetAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__widgetannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__WidgetAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__WidgetAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__WidgetAnnotation `
    ///
    pub fn Delete(self: Poppler__WidgetAnnotation) void {
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
    pub fn SubType(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__RichMediaAnnotation_SubType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn Settings(self: Poppler__RichMediaAnnotation) Poppler__RichMediaAnnotation__Settings {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation_Settings(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn Content(self: Poppler__RichMediaAnnotation) Poppler__RichMediaAnnotation__Content {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation_Content(@ptrCast(self.ptr)) };
    }

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
    pub fn Author(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: Poppler__RichMediaAnnotation, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self.ptr), author_str);
    }

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
    pub fn Contents(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: Poppler__RichMediaAnnotation, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self.ptr), contents_str);
    }

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
    pub fn UniqueName(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: Poppler__RichMediaAnnotation, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self.ptr), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn ModificationDate(self: Poppler__RichMediaAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_ModificationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetModificationDate(self: Poppler__RichMediaAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn CreationDate(self: Poppler__RichMediaAnnotation) QDateTime {
        return .{ .ptr = qtc.Poppler__Annotation_CreationDate(@ptrCast(self.ptr)) };
    }

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
    pub fn SetCreationDate(self: Poppler__RichMediaAnnotation, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

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
    pub fn Flags(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: Poppler__RichMediaAnnotation, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn Boundary(self: Poppler__RichMediaAnnotation) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation_Boundary(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` boundary: QRectF `
    ///
    pub fn SetBoundary(self: Poppler__RichMediaAnnotation, boundary: anytype) void {
        comptime _ = @TypeOf(boundary)._is_QRectF;
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self.ptr), @ptrCast(boundary.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn Style(self: Poppler__RichMediaAnnotation) Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` style: Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: Poppler__RichMediaAnnotation, style: anytype) void {
        comptime _ = @TypeOf(style)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn Popup(self: Poppler__RichMediaAnnotation) Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation_Popup(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` popup: Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: Poppler__RichMediaAnnotation, popup: anytype) void {
        comptime _ = @TypeOf(popup)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self.ptr), @ptrCast(popup.ptr));
    }

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
    pub fn RevisionScope(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self.ptr));
    }

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
    pub fn RevisionType(self: Poppler__RichMediaAnnotation) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self.ptr));
    }

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
    pub fn Revisions(self: Poppler__RichMediaAnnotation, allocator: std.mem.Allocator) []Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Annotation, _arr.len) catch @panic("poppler__richmediaannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn AnnotationAppearance(self: Poppler__RichMediaAnnotation) Poppler__AnnotationAppearance {
        return .{ .ptr = qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    /// ` annotationAppearance: Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: Poppler__RichMediaAnnotation, annotationAppearance: anytype) void {
        comptime _ = @TypeOf(annotationAppearance)._is_Poppler__AnnotationAppearance;
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self.ptr), @ptrCast(annotationAppearance.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation) void {
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

    /// New constructs a new Poppler::Annotation::Style object.
    ///
    pub fn New() Poppler__Annotation__Style {
        return .{ .ptr = qtc.Poppler__Annotation__Style_new() };
    }

    /// New2 constructs a new Poppler::Annotation::Style object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__Annotation__Style `
    ///
    pub fn New2(other: anytype) Poppler__Annotation__Style {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Style;
        return .{ .ptr = qtc.Poppler__Annotation__Style_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` other: Poppler__Annotation__Style `
    ///
    pub fn OperatorAssign(self: Poppler__Annotation__Style, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Style;
        qtc.Poppler__Annotation__Style_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn Color(self: Poppler__Annotation__Style) QColor {
        return .{ .ptr = qtc.Poppler__Annotation__Style_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: Poppler__Annotation__Style, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.Poppler__Annotation__Style_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn Opacity(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_Opacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: Poppler__Annotation__Style, opacity: f64) void {
        qtc.Poppler__Annotation__Style_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn Width(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: Poppler__Annotation__Style, width: f64) void {
        qtc.Poppler__Annotation__Style_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

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
    pub fn LineStyle(self: Poppler__Annotation__Style) i32 {
        return qtc.Poppler__Annotation__Style_LineStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` style: poppler_annotation_enums.LineStyle `
    ///
    pub fn SetLineStyle(self: Poppler__Annotation__Style, style: i32) void {
        qtc.Poppler__Annotation__Style_SetLineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn XCorners(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_XCorners(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetXCorners(self: Poppler__Annotation__Style, radius: f64) void {
        qtc.Poppler__Annotation__Style_SetXCorners(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn YCorners(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_YCorners(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetYCorners(self: Poppler__Annotation__Style, radius: f64) void {
        qtc.Poppler__Annotation__Style_SetYCorners(@ptrCast(self.ptr), @bitCast(radius));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DashArray(self: Poppler__Annotation__Style, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation__Style_DashArray(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(f64, _arr.len) catch @panic("poppler__annotation__style.DashArray: Memory allocation failed");
        const _data: [*]f64 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` array: []f64 `
    ///
    pub fn SetDashArray(self: Poppler__Annotation__Style, array: []f64) void {
        const array_list = qtc.libqt_list{
            .len = array.len,
            .data = array.ptr,
        };
        qtc.Poppler__Annotation__Style_SetDashArray(@ptrCast(self.ptr), array_list);
    }

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
    pub fn LineEffect(self: Poppler__Annotation__Style) i32 {
        return qtc.Poppler__Annotation__Style_LineEffect(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` effect: poppler_annotation_enums.LineEffect `
    ///
    pub fn SetLineEffect(self: Poppler__Annotation__Style, effect: i32) void {
        qtc.Poppler__Annotation__Style_SetLineEffect(@ptrCast(self.ptr), @bitCast(effect));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn EffectIntensity(self: Poppler__Annotation__Style) f64 {
        return qtc.Poppler__Annotation__Style_EffectIntensity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    /// ` intens: f64 `
    ///
    pub fn SetEffectIntensity(self: Poppler__Annotation__Style, intens: f64) void {
        qtc.Poppler__Annotation__Style_SetEffectIntensity(@ptrCast(self.ptr), @bitCast(intens));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Annotation__Style `
    ///
    pub fn Delete(self: Poppler__Annotation__Style) void {
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

    /// New constructs a new Poppler::Annotation::Popup object.
    ///
    pub fn New() Poppler__Annotation__Popup {
        return .{ .ptr = qtc.Poppler__Annotation__Popup_new() };
    }

    /// New2 constructs a new Poppler::Annotation::Popup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__Annotation__Popup `
    ///
    pub fn New2(other: anytype) Poppler__Annotation__Popup {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Popup;
        return .{ .ptr = qtc.Poppler__Annotation__Popup_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` other: Poppler__Annotation__Popup `
    ///
    pub fn OperatorAssign(self: Poppler__Annotation__Popup, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__Annotation__Popup;
        qtc.Poppler__Annotation__Popup_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    pub fn Flags(self: Poppler__Annotation__Popup) i32 {
        return qtc.Poppler__Annotation__Popup_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` flags: i32 `
    ///
    pub fn SetFlags(self: Poppler__Annotation__Popup, flags: i32) void {
        qtc.Poppler__Annotation__Popup_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    pub fn Geometry(self: Poppler__Annotation__Popup) QRectF {
        return .{ .ptr = qtc.Poppler__Annotation__Popup_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` geom: QRectF `
    ///
    pub fn SetGeometry(self: Poppler__Annotation__Popup, geom: anytype) void {
        comptime _ = @TypeOf(geom)._is_QRectF;
        qtc.Poppler__Annotation__Popup_SetGeometry(@ptrCast(self.ptr), @ptrCast(geom.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: Poppler__Annotation__Popup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation__popup.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: Poppler__Annotation__Popup, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Summary(self: Poppler__Annotation__Popup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation__popup.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn SetSummary(self: Poppler__Annotation__Popup, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: Poppler__Annotation__Popup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation__popup.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: Poppler__Annotation__Popup, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__Annotation__Popup `
    ///
    pub fn Delete(self: Poppler__Annotation__Popup) void {
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

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn CapStart(self: Poppler__HighlightAnnotation__Quad) bool {
        return qtc.Poppler__HighlightAnnotation__Quad_CapStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    /// ` capStart: bool `
    ///
    pub fn SetCapStart(self: Poppler__HighlightAnnotation__Quad, capStart: bool) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetCapStart(@ptrCast(self.ptr), capStart);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn CapEnd(self: Poppler__HighlightAnnotation__Quad) bool {
        return qtc.Poppler__HighlightAnnotation__Quad_CapEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    /// ` capEnd: bool `
    ///
    pub fn SetCapEnd(self: Poppler__HighlightAnnotation__Quad, capEnd: bool) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetCapEnd(@ptrCast(self.ptr), capEnd);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn Feather(self: Poppler__HighlightAnnotation__Quad) f64 {
        return qtc.Poppler__HighlightAnnotation__Quad_Feather(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    /// ` feather: f64 `
    ///
    pub fn SetFeather(self: Poppler__HighlightAnnotation__Quad, feather: f64) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetFeather(@ptrCast(self.ptr), @bitCast(feather));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__HighlightAnnotation__Quad `
    ///
    pub fn Delete(self: Poppler__HighlightAnnotation__Quad) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Params object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Params {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Params_new() };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Params `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FlashVars(self: Poppler__RichMediaAnnotation__Params, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Params_FlashVars(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation__params.FlashVars: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Params `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Params) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Instance object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Instance {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Instance_new() };
    }

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
    pub fn Type(self: Poppler__RichMediaAnnotation__Instance) i32 {
        return qtc.Poppler__RichMediaAnnotation__Instance_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Instance `
    ///
    pub fn Params(self: Poppler__RichMediaAnnotation__Instance) Poppler__RichMediaAnnotation__Params {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Instance_Params(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Instance `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Instance) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Configuration object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Configuration {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Configuration_new() };
    }

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
    pub fn Type(self: Poppler__RichMediaAnnotation__Configuration) i32 {
        return qtc.Poppler__RichMediaAnnotation__Configuration_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Poppler__RichMediaAnnotation__Configuration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Configuration_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation__configuration.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Instances(self: Poppler__RichMediaAnnotation__Configuration, allocator: std.mem.Allocator) []Poppler__RichMediaAnnotation__Instance {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Configuration_Instances(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__RichMediaAnnotation__Instance, _arr.len) catch @panic("poppler__richmediaannotation__configuration.Instances: Memory allocation failed");
        const _data: [*]QtC.Poppler__RichMediaAnnotation__Instance = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Configuration `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Configuration) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Asset object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Asset {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Asset_new() };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Asset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Poppler__RichMediaAnnotation__Asset, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Asset_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation__asset.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Asset `
    ///
    pub fn EmbeddedFile(self: Poppler__RichMediaAnnotation__Asset) Poppler__EmbeddedFile {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Asset_EmbeddedFile(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Asset `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Asset) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Content object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Content {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Content_new() };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Configurations(self: Poppler__RichMediaAnnotation__Content, allocator: std.mem.Allocator) []Poppler__RichMediaAnnotation__Configuration {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Content_Configurations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__RichMediaAnnotation__Configuration, _arr.len) catch @panic("poppler__richmediaannotation__content.Configurations: Memory allocation failed");
        const _data: [*]QtC.Poppler__RichMediaAnnotation__Configuration = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Assets(self: Poppler__RichMediaAnnotation__Content, allocator: std.mem.Allocator) []Poppler__RichMediaAnnotation__Asset {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Content_Assets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__RichMediaAnnotation__Asset, _arr.len) catch @panic("poppler__richmediaannotation__content.Assets: Memory allocation failed");
        const _data: [*]QtC.Poppler__RichMediaAnnotation__Asset = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Content `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Content) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Activation object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Activation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Activation_new() };
    }

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
    pub fn Condition(self: Poppler__RichMediaAnnotation__Activation) i32 {
        return qtc.Poppler__RichMediaAnnotation__Activation_Condition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Activation `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Activation) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Deactivation object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Deactivation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Deactivation_new() };
    }

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
    pub fn Condition(self: Poppler__RichMediaAnnotation__Deactivation) i32 {
        return qtc.Poppler__RichMediaAnnotation__Deactivation_Condition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Deactivation `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Deactivation) void {
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

    /// New constructs a new Poppler::RichMediaAnnotation::Settings object.
    ///
    pub fn New() Poppler__RichMediaAnnotation__Settings {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Settings_new() };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn Activation(self: Poppler__RichMediaAnnotation__Settings) Poppler__RichMediaAnnotation__Activation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Settings_Activation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn Deactivation(self: Poppler__RichMediaAnnotation__Settings) Poppler__RichMediaAnnotation__Deactivation {
        return .{ .ptr = qtc.Poppler__RichMediaAnnotation__Settings_Deactivation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn Delete(self: Poppler__RichMediaAnnotation__Settings) void {
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
