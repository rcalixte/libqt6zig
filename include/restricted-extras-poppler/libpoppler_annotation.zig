const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_annotation_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
pub const poppler__annotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation.Contents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation.UniqueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__annotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__Annotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Annotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
pub const poppler__textannotation = struct {
    /// New constructs a new Poppler::TextAnnotation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: poppler_annotation_enums.TextType `
    ///
    pub fn New(typeVal: i32) QtC.Poppler__TextAnnotation {
        return qtc.Poppler__TextAnnotation_new(@bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__TextAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__TextAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__TextAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.TextType `
    ///
    pub fn TextType(self: ?*anyopaque) i32 {
        return qtc.Poppler__TextAnnotation_TextType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextIcon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__TextAnnotation_TextIcon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__textannotation.TextIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetTextIcon(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__TextAnnotation_SetTextIcon(@ptrCast(self), icon_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn TextFont(self: ?*anyopaque) QtC.QFont {
        return qtc.Poppler__TextAnnotation_TextFont(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetTextFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.Poppler__TextAnnotation_SetTextFont(@ptrCast(self), @ptrCast(font));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn TextColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__TextAnnotation_TextColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetTextColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__TextAnnotation_SetTextColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.InplaceAlignPosition `
    ///
    pub fn InplaceAlign(self: ?*anyopaque) i32 {
        return qtc.Poppler__TextAnnotation_InplaceAlign(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` alignVal: poppler_annotation_enums.InplaceAlignPosition `
    ///
    pub fn SetInplaceAlign(self: ?*anyopaque, alignVal: i32) void {
        qtc.Poppler__TextAnnotation_SetInplaceAlign(@ptrCast(self), @bitCast(alignVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` id: i32 `
    ///
    pub fn CalloutPoint(self: ?*anyopaque, id: i32) QtC.QPointF {
        return qtc.Poppler__TextAnnotation_CalloutPoint(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CalloutPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__TextAnnotation_CalloutPoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("poppler__textannotation.CalloutPoints: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn SetCalloutPoints(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.Poppler__TextAnnotation_SetCalloutPoints(@ptrCast(self), points_list);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.InplaceIntent `
    ///
    pub fn InplaceIntent(self: ?*anyopaque) i32 {
        return qtc.Poppler__TextAnnotation_InplaceIntent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` intent: poppler_annotation_enums.InplaceIntent `
    ///
    pub fn SetInplaceIntent(self: ?*anyopaque, intent: i32) void {
        qtc.Poppler__TextAnnotation_SetInplaceIntent(@ptrCast(self), @bitCast(intent));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__textannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__TextAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__TextAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
pub const poppler__lineannotation = struct {
    /// New constructs a new Poppler::LineAnnotation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: poppler_annotation_enums.LineType `
    ///
    pub fn New(typeVal: i32) QtC.Poppler__LineAnnotation {
        return qtc.Poppler__LineAnnotation_new(@bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LineAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LineAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LineAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineType `
    ///
    pub fn LineType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LineAnnotation_LineType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LinePoints(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__LineAnnotation_LinePoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("poppler__lineannotation.LinePoints: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn SetLinePoints(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.Poppler__LineAnnotation_SetLinePoints(@ptrCast(self), points_list);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.TermStyle `
    ///
    pub fn LineStartStyle(self: ?*anyopaque) i32 {
        return qtc.Poppler__LineAnnotation_LineStartStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` style: poppler_annotation_enums.TermStyle `
    ///
    pub fn SetLineStartStyle(self: ?*anyopaque, style: i32) void {
        qtc.Poppler__LineAnnotation_SetLineStartStyle(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.TermStyle `
    ///
    pub fn LineEndStyle(self: ?*anyopaque) i32 {
        return qtc.Poppler__LineAnnotation_LineEndStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` style: poppler_annotation_enums.TermStyle `
    ///
    pub fn SetLineEndStyle(self: ?*anyopaque, style: i32) void {
        qtc.Poppler__LineAnnotation_SetLineEndStyle(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn IsLineClosed(self: ?*anyopaque) bool {
        return qtc.Poppler__LineAnnotation_IsLineClosed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` closed: bool `
    ///
    pub fn SetLineClosed(self: ?*anyopaque, closed: bool) void {
        qtc.Poppler__LineAnnotation_SetLineClosed(@ptrCast(self), closed);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn LineInnerColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__LineAnnotation_LineInnerColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetLineInnerColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__LineAnnotation_SetLineInnerColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn LineLeadingForwardPoint(self: ?*anyopaque) f64 {
        return qtc.Poppler__LineAnnotation_LineLeadingForwardPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` point: f64 `
    ///
    pub fn SetLineLeadingForwardPoint(self: ?*anyopaque, point: f64) void {
        qtc.Poppler__LineAnnotation_SetLineLeadingForwardPoint(@ptrCast(self), @bitCast(point));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn LineLeadingBackPoint(self: ?*anyopaque) f64 {
        return qtc.Poppler__LineAnnotation_LineLeadingBackPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` point: f64 `
    ///
    pub fn SetLineLeadingBackPoint(self: ?*anyopaque, point: f64) void {
        qtc.Poppler__LineAnnotation_SetLineLeadingBackPoint(@ptrCast(self), @bitCast(point));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn LineShowCaption(self: ?*anyopaque) bool {
        return qtc.Poppler__LineAnnotation_LineShowCaption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` show: bool `
    ///
    pub fn SetLineShowCaption(self: ?*anyopaque, show: bool) void {
        qtc.Poppler__LineAnnotation_SetLineShowCaption(@ptrCast(self), show);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineIntent `
    ///
    pub fn LineIntent(self: ?*anyopaque) i32 {
        return qtc.Poppler__LineAnnotation_LineIntent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` intent: poppler_annotation_enums.LineIntent `
    ///
    pub fn SetLineIntent(self: ?*anyopaque, intent: i32) void {
        qtc.Poppler__LineAnnotation_SetLineIntent(@ptrCast(self), @bitCast(intent));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__lineannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__LineAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LineAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
pub const poppler__geomannotation = struct {
    /// New constructs a new Poppler::GeomAnnotation object.
    ///
    pub fn New() QtC.Poppler__GeomAnnotation {
        return qtc.Poppler__GeomAnnotation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__GeomAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__GeomAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__GeomAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.GeomType `
    ///
    pub fn GeomType(self: ?*anyopaque) i32 {
        return qtc.Poppler__GeomAnnotation_GeomType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.GeomType `
    ///
    pub fn SetGeomType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Poppler__GeomAnnotation_SetGeomType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn GeomInnerColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__GeomAnnotation_GeomInnerColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetGeomInnerColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__GeomAnnotation_SetGeomInnerColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__geomannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__GeomAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__GeomAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
pub const poppler__highlightannotation = struct {
    /// New constructs a new Poppler::HighlightAnnotation object.
    ///
    pub fn New() QtC.Poppler__HighlightAnnotation {
        return qtc.Poppler__HighlightAnnotation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__HighlightAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__HighlightAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__HighlightAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.HighlightType `
    ///
    pub fn HighlightType(self: ?*anyopaque) i32 {
        return qtc.Poppler__HighlightAnnotation_HighlightType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.HighlightType `
    ///
    pub fn SetHighlightType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Poppler__HighlightAnnotation_SetHighlightType(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HighlightQuads(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__HighlightAnnotation__Quad {
        const _arr: qtc.libqt_list = qtc.Poppler__HighlightAnnotation_HighlightQuads(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__HighlightAnnotation__Quad, _arr.len) catch @panic("poppler__highlightannotation.HighlightQuads: Memory allocation failed");
        const _data: [*]QtC.Poppler__HighlightAnnotation__Quad = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` quads: []QtC.Poppler__HighlightAnnotation__Quad `
    ///
    pub fn SetHighlightQuads(self: ?*anyopaque, quads: []QtC.Poppler__HighlightAnnotation__Quad) void {
        const quads_list = qtc.libqt_list{
            .len = quads.len,
            .data = @ptrCast(quads.ptr),
        };
        qtc.Poppler__HighlightAnnotation_SetHighlightQuads(@ptrCast(self), quads_list);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__highlightannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__HighlightAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__HighlightAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
pub const poppler__stampannotation = struct {
    /// New constructs a new Poppler::StampAnnotation object.
    ///
    pub fn New() QtC.Poppler__StampAnnotation {
        return qtc.Poppler__StampAnnotation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__StampAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__StampAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__StampAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StampIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__StampAnnotation_StampIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__stampannotation.StampIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetStampIconName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__StampAnnotation_SetStampIconName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` image: QtC.QImage `
    ///
    pub fn SetStampCustomImage(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.Poppler__StampAnnotation_SetStampCustomImage(@ptrCast(self), @ptrCast(image));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__stampannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__StampAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__StampAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
pub const poppler__signatureannotation = struct {
    /// New constructs a new Poppler::SignatureAnnotation object.
    ///
    pub fn New() QtC.Poppler__SignatureAnnotation {
        return qtc.Poppler__SignatureAnnotation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__SignatureAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__SignatureAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__SignatureAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetLeftText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetLeftText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn FontSize(self: ?*anyopaque) f64 {
        return qtc.Poppler__SignatureAnnotation_FontSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetFontSize(self: ?*anyopaque, fontSize: f64) void {
        qtc.Poppler__SignatureAnnotation_SetFontSize(@ptrCast(self), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn LeftFontSize(self: ?*anyopaque) f64 {
        return qtc.Poppler__SignatureAnnotation_LeftFontSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` fontSize: f64 `
    ///
    pub fn SetLeftFontSize(self: ?*anyopaque, fontSize: f64) void {
        qtc.Poppler__SignatureAnnotation_SetLeftFontSize(@ptrCast(self), @bitCast(fontSize));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn FontColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__SignatureAnnotation_FontColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetFontColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__SignatureAnnotation_SetFontColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn BorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__SignatureAnnotation_BorderColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBorderColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__SignatureAnnotation_SetBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn BorderWidth(self: ?*anyopaque) f64 {
        return qtc.Poppler__SignatureAnnotation_BorderWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` width: f64 `
    ///
    pub fn SetBorderWidth(self: ?*anyopaque, width: f64) void {
        qtc.Poppler__SignatureAnnotation_SetBorderWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__SignatureAnnotation_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBackgroundColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__SignatureAnnotation_SetBackgroundColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImagePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureAnnotation_ImagePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.ImagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` imagePath: []const u8 `
    ///
    pub fn SetImagePath(self: ?*anyopaque, imagePath: []const u8) void {
        const imagePath_str = qtc.libqt_string{
            .len = imagePath.len,
            .data = imagePath.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetImagePath(@ptrCast(self), imagePath_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FieldPartialName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureAnnotation_FieldPartialName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signatureannotation.FieldPartialName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` fieldPartialName: []const u8 `
    ///
    pub fn SetFieldPartialName(self: ?*anyopaque, fieldPartialName: []const u8) void {
        const fieldPartialName_str = qtc.libqt_string{
            .len = fieldPartialName.len,
            .data = fieldPartialName.ptr,
        };
        qtc.Poppler__SignatureAnnotation_SetFieldPartialName(@ptrCast(self), fieldPartialName_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` outputFileName: []const u8 `
    ///
    /// ` data: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SigningResult `
    ///
    pub fn Sign(self: ?*anyopaque, outputFileName: []const u8, data: ?*anyopaque) i32 {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        return qtc.Poppler__SignatureAnnotation_Sign(@ptrCast(self), outputFileName_str, @ptrCast(data));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__signatureannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__SignatureAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__SignatureAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
pub const poppler__inkannotation = struct {
    /// New constructs a new Poppler::InkAnnotation object.
    ///
    pub fn New() QtC.Poppler__InkAnnotation {
        return qtc.Poppler__InkAnnotation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__InkAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__InkAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__InkAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InkPaths(self: ?*anyopaque, allocator: std.mem.Allocator) [][]QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.Poppler__InkAnnotation_InkPaths(@ptrCast(self));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_free(_list[i].data);
            }
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QtC.QPointF, _arr.len) catch @panic("poppler__inkannotation.InkPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QtC.QPointF, _list[i].len) catch @panic("poppler__inkannotation.InkPaths: Memory allocation failed");
            @memcpy(_ret[i], _data[0.._list[i].len]);
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` paths: [][]QtC.QPointF `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetInkPaths(self: ?*anyopaque, paths: [][]QtC.QPointF, allocator: std.mem.Allocator) void {
        const paths_arr = allocator.alloc(qtc.libqt_list, paths.len) catch @panic("poppler__inkannotation.SetInkPaths: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..) |paths_inner, i| {
            paths_arr[i] = qtc.libqt_list{
                .len = paths_inner.len,
                .data = @ptrCast(paths_inner.ptr),
            };
        }
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = @ptrCast(paths_arr.ptr),
        };
        qtc.Poppler__InkAnnotation_SetInkPaths(@ptrCast(self), paths_list);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__inkannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__InkAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__InkAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
pub const poppler__linkannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn LinkDestination(self: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__LinkAnnotation_LinkDestination(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.HighlightMode `
    ///
    pub fn LinkHighlightMode(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkAnnotation_LinkHighlightMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` mode: poppler_annotation_enums.HighlightMode `
    ///
    pub fn SetLinkHighlightMode(self: ?*anyopaque, mode: i32) void {
        qtc.Poppler__LinkAnnotation_SetLinkHighlightMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` id: i32 `
    ///
    pub fn LinkRegionPoint(self: ?*anyopaque, id: i32) QtC.QPointF {
        return qtc.Poppler__LinkAnnotation_LinkRegionPoint(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` id: i32 `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn SetLinkRegionPoint(self: ?*anyopaque, id: i32, point: QtC.QPointF) void {
        qtc.Poppler__LinkAnnotation_SetLinkRegionPoint(@ptrCast(self), @bitCast(id), @ptrCast(point));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__linkannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__LinkAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
pub const poppler__caretannotation = struct {
    /// New constructs a new Poppler::CaretAnnotation object.
    ///
    pub fn New() QtC.Poppler__CaretAnnotation {
        return qtc.Poppler__CaretAnnotation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__CaretAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSubType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__CaretAnnotation_OnSubType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SuperSubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__CaretAnnotation_SuperSubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.CaretSymbol `
    ///
    pub fn CaretSymbol(self: ?*anyopaque) i32 {
        return qtc.Poppler__CaretAnnotation_CaretSymbol(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` symbol: poppler_annotation_enums.CaretSymbol `
    ///
    pub fn SetCaretSymbol(self: ?*anyopaque, symbol: i32) void {
        qtc.Poppler__CaretAnnotation_SetCaretSymbol(@ptrCast(self), @bitCast(symbol));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__caretannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__CaretAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__CaretAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
pub const poppler__fileattachmentannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__FileAttachmentAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FileAttachmentAnnotation_FileIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__fileattachmentannotation.FileIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetFileIconName(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__FileAttachmentAnnotation_SetFileIconName(@ptrCast(self), icon_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn EmbeddedFile(self: ?*anyopaque) QtC.Poppler__EmbeddedFile {
        return qtc.Poppler__FileAttachmentAnnotation_EmbeddedFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` ef: QtC.Poppler__EmbeddedFile `
    ///
    pub fn SetEmbeddedFile(self: ?*anyopaque, ef: ?*anyopaque) void {
        qtc.Poppler__FileAttachmentAnnotation_SetEmbeddedFile(@ptrCast(self), @ptrCast(ef));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__fileattachmentannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__FileAttachmentAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FileAttachmentAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
pub const poppler__soundannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__SoundAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SoundIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SoundAnnotation_SoundIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__soundannotation.SoundIconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetSoundIconName(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.Poppler__SoundAnnotation_SetSoundIconName(@ptrCast(self), icon_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn Sound(self: ?*anyopaque) QtC.Poppler__SoundObject {
        return qtc.Poppler__SoundAnnotation_Sound(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` s: QtC.Poppler__SoundObject `
    ///
    pub fn SetSound(self: ?*anyopaque, s: ?*anyopaque) void {
        qtc.Poppler__SoundAnnotation_SetSound(@ptrCast(self), @ptrCast(s));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__soundannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__SoundAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__SoundAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
pub const poppler__movieannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__MovieAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn Movie(self: ?*anyopaque) QtC.Poppler__MovieObject {
        return qtc.Poppler__MovieAnnotation_Movie(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` movie: QtC.Poppler__MovieObject `
    ///
    pub fn SetMovie(self: ?*anyopaque, movie: ?*anyopaque) void {
        qtc.Poppler__MovieAnnotation_SetMovie(@ptrCast(self), @ptrCast(movie));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MovieTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__MovieAnnotation_MovieTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__movieannotation.MovieTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetMovieTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__MovieAnnotation_SetMovieTitle(@ptrCast(self), title_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__movieannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__MovieAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__MovieAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
pub const poppler__screenannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__ScreenAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn Action(self: ?*anyopaque) QtC.Poppler__LinkRendition {
        return qtc.Poppler__ScreenAnnotation_Action(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` action: QtC.Poppler__LinkRendition `
    ///
    pub fn SetAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.Poppler__ScreenAnnotation_SetAction(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScreenTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__ScreenAnnotation_ScreenTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__screenannotation.ScreenTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetScreenTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__ScreenAnnotation_SetScreenTitle(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__ScreenAnnotation_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__screenannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__ScreenAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
pub const poppler__widgetannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__WidgetAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__WidgetAnnotation_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__widgetannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__WidgetAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__WidgetAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
pub const poppler__richmediaannotation = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.SubType `
    ///
    pub fn SubType(self: ?*anyopaque) i32 {
        return qtc.Poppler__RichMediaAnnotation_SubType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn Settings(self: ?*anyopaque) QtC.Poppler__RichMediaAnnotation__Settings {
        return qtc.Poppler__RichMediaAnnotation_Settings(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn Content(self: ?*anyopaque) QtC.Poppler__RichMediaAnnotation__Content {
        return qtc.Poppler__RichMediaAnnotation_Content(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Author(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` author: []const u8 `
    ///
    pub fn SetAuthor(self: ?*anyopaque, author: []const u8) void {
        const author_str = qtc.libqt_string{
            .len = author.len,
            .data = author.ptr,
        };
        qtc.Poppler__Annotation_SetAuthor(@ptrCast(self), author_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Contents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_Contents(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` contents: []const u8 `
    ///
    pub fn SetContents(self: ?*anyopaque, contents: []const u8) void {
        const contents_str = qtc.libqt_string{
            .len = contents.len,
            .data = contents.ptr,
        };
        qtc.Poppler__Annotation_SetContents(@ptrCast(self), contents_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation_UniqueName(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` uniqueName: []const u8 `
    ///
    pub fn SetUniqueName(self: ?*anyopaque, uniqueName: []const u8) void {
        const uniqueName_str = qtc.libqt_string{
            .len = uniqueName.len,
            .data = uniqueName.ptr,
        };
        qtc.Poppler__Annotation_SetUniqueName(@ptrCast(self), uniqueName_str);
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn ModificationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_ModificationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetModificationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetModificationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn CreationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__Annotation_CreationDate(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetCreationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetCreationDate(@ptrCast(self), @ptrCast(date));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_annotation_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_Flags(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` flags: flag of poppler_annotation_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn Boundary(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation_Boundary(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` boundary: QtC.QRectF `
    ///
    pub fn SetBoundary(self: ?*anyopaque, boundary: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetBoundary(@ptrCast(self), @ptrCast(boundary));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn Style(self: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation_Style(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` style: QtC.Poppler__Annotation__Style `
    ///
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn Popup(self: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation_Popup(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` popup: QtC.Poppler__Annotation__Popup `
    ///
    pub fn SetPopup(self: ?*anyopaque, popup: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetPopup(@ptrCast(self), @ptrCast(popup));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevScope `
    ///
    pub fn RevisionScope(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionScope(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.RevType `
    ///
    pub fn RevisionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation_RevisionType(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Revisions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Annotation {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation_Revisions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Annotation, _arr.len) catch @panic("poppler__richmediaannotation.Revisions: Memory allocation failed");
        const _data: [*]QtC.Poppler__Annotation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn AnnotationAppearance(self: ?*anyopaque) QtC.Poppler__AnnotationAppearance {
        return qtc.Poppler__Annotation_AnnotationAppearance(@ptrCast(self));
    }

    /// Inherited from Poppler::Annotation
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    /// ` annotationAppearance: QtC.Poppler__AnnotationAppearance `
    ///
    pub fn SetAnnotationAppearance(self: ?*anyopaque, annotationAppearance: ?*anyopaque) void {
        qtc.Poppler__Annotation_SetAnnotationAppearance(@ptrCast(self), @ptrCast(annotationAppearance));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
pub const poppler__annotation__style = struct {
    /// New constructs a new Poppler::Annotation::Style object.
    ///
    pub fn New() QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation__Style_new();
    }

    /// New2 constructs a new Poppler::Annotation::Style object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Poppler__Annotation__Style `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Poppler__Annotation__Style {
        return qtc.Poppler__Annotation__Style_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` other: QtC.Poppler__Annotation__Style `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__Annotation__Style_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.Poppler__Annotation__Style_Color(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.Poppler__Annotation__Style_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.Poppler__Annotation__Style_Opacity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.Poppler__Annotation__Style_SetOpacity(@ptrCast(self), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn Width(self: ?*anyopaque) f64 {
        return qtc.Poppler__Annotation__Style_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` width: f64 `
    ///
    pub fn SetWidth(self: ?*anyopaque, width: f64) void {
        qtc.Poppler__Annotation__Style_SetWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineStyle `
    ///
    pub fn LineStyle(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation__Style_LineStyle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` style: poppler_annotation_enums.LineStyle `
    ///
    pub fn SetLineStyle(self: ?*anyopaque, style: i32) void {
        qtc.Poppler__Annotation__Style_SetLineStyle(@ptrCast(self), @bitCast(style));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn XCorners(self: ?*anyopaque) f64 {
        return qtc.Poppler__Annotation__Style_XCorners(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetXCorners(self: ?*anyopaque, radius: f64) void {
        qtc.Poppler__Annotation__Style_SetXCorners(@ptrCast(self), @bitCast(radius));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn YCorners(self: ?*anyopaque) f64 {
        return qtc.Poppler__Annotation__Style_YCorners(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` radius: f64 `
    ///
    pub fn SetYCorners(self: ?*anyopaque, radius: f64) void {
        qtc.Poppler__Annotation__Style_SetYCorners(@ptrCast(self), @bitCast(radius));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DashArray(self: ?*anyopaque, allocator: std.mem.Allocator) []f64 {
        const _arr: qtc.libqt_list = qtc.Poppler__Annotation__Style_DashArray(@ptrCast(self));
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
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` array: []f64 `
    ///
    pub fn SetDashArray(self: ?*anyopaque, array: []f64) void {
        const array_list = qtc.libqt_list{
            .len = array.len,
            .data = array.ptr,
        };
        qtc.Poppler__Annotation__Style_SetDashArray(@ptrCast(self), array_list);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.LineEffect `
    ///
    pub fn LineEffect(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation__Style_LineEffect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` effect: poppler_annotation_enums.LineEffect `
    ///
    pub fn SetLineEffect(self: ?*anyopaque, effect: i32) void {
        qtc.Poppler__Annotation__Style_SetLineEffect(@ptrCast(self), @bitCast(effect));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn EffectIntensity(self: ?*anyopaque) f64 {
        return qtc.Poppler__Annotation__Style_EffectIntensity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    /// ` intens: f64 `
    ///
    pub fn SetEffectIntensity(self: ?*anyopaque, intens: f64) void {
        qtc.Poppler__Annotation__Style_SetEffectIntensity(@ptrCast(self), @bitCast(intens));
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
    /// ` self: QtC.Poppler__Annotation__Style `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Annotation__Style_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
pub const poppler__annotation__popup = struct {
    /// New constructs a new Poppler::Annotation::Popup object.
    ///
    pub fn New() QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation__Popup_new();
    }

    /// New2 constructs a new Poppler::Annotation::Popup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Poppler__Annotation__Popup `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Poppler__Annotation__Popup {
        return qtc.Poppler__Annotation__Popup_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` other: QtC.Poppler__Annotation__Popup `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__Annotation__Popup_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.Poppler__Annotation__Popup_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` flags: i32 `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.Poppler__Annotation__Popup_SetFlags(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Annotation__Popup_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` geom: QtC.QRectF `
    ///
    pub fn SetGeometry(self: ?*anyopaque, geom: ?*anyopaque) void {
        qtc.Poppler__Annotation__Popup_SetGeometry(@ptrCast(self), @ptrCast(geom));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation__popup.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetTitle(@ptrCast(self), title_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Summary(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Summary(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation__popup.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn SetSummary(self: ?*anyopaque, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetSummary(@ptrCast(self), summary_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__Annotation__Popup_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__annotation__popup.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__Annotation__Popup_SetText(@ptrCast(self), text_str);
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
    /// ` self: QtC.Poppler__Annotation__Popup `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Annotation__Popup_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
pub const poppler__highlightannotation__quad = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    pub fn CapStart(self: ?*anyopaque) bool {
        return qtc.Poppler__HighlightAnnotation__Quad_CapStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    /// ` capStart: bool `
    ///
    pub fn SetCapStart(self: ?*anyopaque, capStart: bool) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetCapStart(@ptrCast(self), capStart);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    pub fn CapEnd(self: ?*anyopaque) bool {
        return qtc.Poppler__HighlightAnnotation__Quad_CapEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    /// ` capEnd: bool `
    ///
    pub fn SetCapEnd(self: ?*anyopaque, capEnd: bool) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetCapEnd(@ptrCast(self), capEnd);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    pub fn Feather(self: ?*anyopaque) f64 {
        return qtc.Poppler__HighlightAnnotation__Quad_Feather(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    /// ` feather: f64 `
    ///
    pub fn SetFeather(self: ?*anyopaque, feather: f64) void {
        qtc.Poppler__HighlightAnnotation__Quad_SetFeather(@ptrCast(self), @bitCast(feather));
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
    /// ` self: QtC.Poppler__HighlightAnnotation__Quad `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__HighlightAnnotation__Quad_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
pub const poppler__richmediaannotation__params = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Params object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Params {
        return qtc.Poppler__RichMediaAnnotation__Params_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Params `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FlashVars(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Params_FlashVars(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Params `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Params_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
pub const poppler__richmediaannotation__instance = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Instance object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Instance {
        return qtc.Poppler__RichMediaAnnotation__Instance_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Instance `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__RichMediaAnnotation__Instance_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Instance `
    ///
    pub fn Params(self: ?*anyopaque) QtC.Poppler__RichMediaAnnotation__Params {
        return qtc.Poppler__RichMediaAnnotation__Instance_Params(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Instance `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Instance_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
pub const poppler__richmediaannotation__configuration = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Configuration object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Configuration {
        return qtc.Poppler__RichMediaAnnotation__Configuration_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__RichMediaAnnotation__Configuration_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Configuration_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation__configuration.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Configuration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Instances(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__RichMediaAnnotation__Instance {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Configuration_Instances(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__RichMediaAnnotation__Instance, _arr.len) catch @panic("poppler__richmediaannotation__configuration.Instances: Memory allocation failed");
        const _data: [*]QtC.Poppler__RichMediaAnnotation__Instance = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Configuration `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Configuration_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
pub const poppler__richmediaannotation__asset = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Asset object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Asset {
        return qtc.Poppler__RichMediaAnnotation__Asset_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Asset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__RichMediaAnnotation__Asset_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__richmediaannotation__asset.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Asset `
    ///
    pub fn EmbeddedFile(self: ?*anyopaque) QtC.Poppler__EmbeddedFile {
        return qtc.Poppler__RichMediaAnnotation__Asset_EmbeddedFile(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Asset `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Asset_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
pub const poppler__richmediaannotation__content = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Content object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Content {
        return qtc.Poppler__RichMediaAnnotation__Content_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Configurations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__RichMediaAnnotation__Configuration {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Content_Configurations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__RichMediaAnnotation__Configuration, _arr.len) catch @panic("poppler__richmediaannotation__content.Configurations: Memory allocation failed");
        const _data: [*]QtC.Poppler__RichMediaAnnotation__Configuration = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Assets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__RichMediaAnnotation__Asset {
        const _arr: qtc.libqt_list = qtc.Poppler__RichMediaAnnotation__Content_Assets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__RichMediaAnnotation__Asset, _arr.len) catch @panic("poppler__richmediaannotation__content.Assets: Memory allocation failed");
        const _data: [*]QtC.Poppler__RichMediaAnnotation__Asset = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Content `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Content_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
pub const poppler__richmediaannotation__activation = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Activation object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Activation {
        return qtc.Poppler__RichMediaAnnotation__Activation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Activation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Condition `
    ///
    pub fn Condition(self: ?*anyopaque) i32 {
        return qtc.Poppler__RichMediaAnnotation__Activation_Condition(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Activation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Activation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
pub const poppler__richmediaannotation__deactivation = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Deactivation object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Deactivation {
        return qtc.Poppler__RichMediaAnnotation__Deactivation_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Deactivation `
    ///
    /// ## Returns:
    ///
    /// ` poppler_annotation_enums.Condition `
    ///
    pub fn Condition(self: ?*anyopaque) i32 {
        return qtc.Poppler__RichMediaAnnotation__Deactivation_Condition(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Deactivation `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Deactivation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
pub const poppler__richmediaannotation__settings = struct {
    /// New constructs a new Poppler::RichMediaAnnotation::Settings object.
    ///
    pub fn New() QtC.Poppler__RichMediaAnnotation__Settings {
        return qtc.Poppler__RichMediaAnnotation__Settings_new();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn Activation(self: ?*anyopaque) QtC.Poppler__RichMediaAnnotation__Activation {
        return qtc.Poppler__RichMediaAnnotation__Settings_Activation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn Deactivation(self: ?*anyopaque) QtC.Poppler__RichMediaAnnotation__Deactivation {
        return qtc.Poppler__RichMediaAnnotation__Settings_Deactivation(@ptrCast(self));
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
    /// ` self: QtC.Poppler__RichMediaAnnotation__Settings `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__RichMediaAnnotation__Settings_Delete(@ptrCast(self));
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
