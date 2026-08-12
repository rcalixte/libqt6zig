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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceContentRequest object in C++ memory
    ///
    pub fn new() QPlaceContentRequest {
        return .{ .ptr = qtc.QPlaceContentRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceContentRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceContentRequest `
    ///
    pub fn new2(other: anytype) QPlaceContentRequest {
        comptime _ = @TypeOf(other)._is_QPlaceContentRequest;
        return .{ .ptr = qtc.QPlaceContentRequest_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` other: QPlaceContentRequest `
    ///
    pub fn operatorAssign(self: QPlaceContentRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContentRequest;
        qtc.QPlaceContentRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` other: QPlaceContentRequest `
    ///
    pub fn swap(self: QPlaceContentRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContentRequest;
        qtc.QPlaceContentRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `contentType` instead
    ///
    pub const ContentType = contentType;

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
    pub fn contentType(self: QPlaceContentRequest) i32 {
        return qtc.QPlaceContentRequest_ContentType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContentType` instead
    ///
    pub const SetContentType = setContentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn setContentType(self: QPlaceContentRequest, typeVal: i32) void {
        qtc.QPlaceContentRequest_SetContentType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `placeId` instead
    ///
    pub const PlaceId = placeId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#placeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn placeId(self: QPlaceContentRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContentRequest_PlaceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContentRequest.placeId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPlaceId` instead
    ///
    pub const SetPlaceId = setPlaceId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setPlaceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn setPlaceId(self: QPlaceContentRequest, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlaceContentRequest_SetPlaceId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### DEPRECATED: Use `contentContext` instead
    ///
    pub const ContentContext = contentContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn contentContext(self: QPlaceContentRequest) QVariant {
        return .{ .ptr = qtc.QPlaceContentRequest_ContentContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentContext` instead
    ///
    pub const SetContentContext = setContentContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` context: QVariant `
    ///
    pub fn setContentContext(self: QPlaceContentRequest, context: anytype) void {
        comptime _ = @TypeOf(context)._is_QVariant;
        qtc.QPlaceContentRequest_SetContentContext(@ptrCast(self.ptr), @ptrCast(context.ptr));
    }

    /// ### DEPRECATED: Use `limit` instead
    ///
    pub const Limit = limit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#limit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn limit(self: QPlaceContentRequest) i32 {
        return qtc.QPlaceContentRequest_Limit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLimit` instead
    ///
    pub const SetLimit = setLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    /// ` _limit: i32 `
    ///
    pub fn setLimit(self: QPlaceContentRequest, _limit: i32) void {
        qtc.QPlaceContentRequest_SetLimit(@ptrCast(self.ptr), @bitCast(_limit));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn clear(self: QPlaceContentRequest) void {
        qtc.QPlaceContentRequest_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#dtor.QPlaceContentRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceContentRequest `
    ///
    pub fn delete(self: QPlaceContentRequest) void {
        qtc.QPlaceContentRequest_Delete(@ptrCast(self.ptr));
    }
};
