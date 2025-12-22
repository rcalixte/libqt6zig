const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qplacecontent_enums = @import("libqplacecontent.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html)
pub const qplacecontentrequest = struct {
    /// New constructs a new QPlaceContentRequest object.
    ///
    pub fn New() QtC.QPlaceContentRequest {
        return qtc.QPlaceContentRequest_new();
    }

    /// New2 constructs a new QPlaceContentRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceContentRequest `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceContentRequest {
        return qtc.QPlaceContentRequest_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` other: QtC.QPlaceContentRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceContentRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` other: QtC.QPlaceContentRequest `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceContentRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ## Returns:
    ///
    /// ` qplacecontent_enums.Type `
    ///
    pub fn ContentType(self: ?*anyopaque) i32 {
        return qtc.QPlaceContentRequest_ContentType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn SetContentType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QPlaceContentRequest_SetContentType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#placeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContentRequest_PlaceId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontentrequest.PlaceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setPlaceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetPlaceId(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceContentRequest_SetPlaceId(@ptrCast(self), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    pub fn ContentContext(self: ?*anyopaque) QtC.QVariant {
        return qtc.QPlaceContentRequest_ContentContext(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` context: QtC.QVariant `
    ///
    pub fn SetContentContext(self: ?*anyopaque, context: ?*anyopaque) void {
        qtc.QPlaceContentRequest_SetContentContext(@ptrCast(self), @ptrCast(context));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    pub fn Limit(self: ?*anyopaque) i32 {
        return qtc.QPlaceContentRequest_Limit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QPlaceContentRequest_SetLimit(@ptrCast(self), @intCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPlaceContentRequest_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#dtor.QPlaceContentRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceContentRequest `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceContentRequest_Delete(@ptrCast(self));
    }
};
