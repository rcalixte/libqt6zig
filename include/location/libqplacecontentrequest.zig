const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const qplacecontent_enums = @import("libqplacecontent.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html)
pub const QPlaceContentRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceContentRequest,

    pub const _is_QPlaceContentRequest = {};

    /// New constructs a new QPlaceContentRequest object.
    ///
    pub fn New() QPlaceContentRequest {
        return .{ .ptr = qtc.QPlaceContentRequest_new() };
    }

    /// New2 constructs a new QPlaceContentRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceContentRequest `
    ///
    pub fn New2(other: anytype) QPlaceContentRequest {
        comptime _ = @TypeOf(other)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceContentRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` other: QPlaceContentRequest `
    ///
    pub fn OperatorAssign(self: QPlaceContentRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContentRequest;
        qtc.QPlaceContentRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` other: QPlaceContentRequest `
    ///
    pub fn Swap(self: QPlaceContentRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContentRequest;
        qtc.QPlaceContentRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ## Returns:
    ///
    /// ` qplacecontent_enums.Type `
    ///
    pub fn ContentType(self: QPlaceContentRequest) i32 {
        return qtc.QPlaceContentRequest_ContentType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn SetContentType(self: QPlaceContentRequest, typeVal: i32) void {
        qtc.QPlaceContentRequest_SetContentType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#placeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceId(self: QPlaceContentRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContentRequest_PlaceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontentrequest.PlaceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setPlaceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetPlaceId(self: QPlaceContentRequest, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceContentRequest_SetPlaceId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn ContentContext(self: QPlaceContentRequest) QVariant {
        return .{ .ptr = qtc.QPlaceContentRequest_ContentContext(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` context: QVariant `
    ///
    pub fn SetContentContext(self: QPlaceContentRequest, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QVariant;
        qtc.QPlaceContentRequest_SetContentContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn Limit(self: QPlaceContentRequest) i32 {
        return qtc.QPlaceContentRequest_Limit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetLimit(self: QPlaceContentRequest, limit: i32) void {
        qtc.QPlaceContentRequest_SetLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn Clear(self: QPlaceContentRequest) void {
        qtc.QPlaceContentRequest_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#dtor.QPlaceContentRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn Delete(self: QPlaceContentRequest) void {
        qtc.QPlaceContentRequest_Delete(@ptrCast(self.ptr));
    }
};
