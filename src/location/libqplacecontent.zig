const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPlaceSupplier = @import("libqt6").QPlaceSupplier;
const QPlaceUser = @import("libqt6").QPlaceUser;
const QVariant = @import("libqt6").QVariant;
const qplacecontent_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html)
pub const QPlaceContent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlaceContent,

    pub const _is_QPlaceContent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlaceContent object in C++ memory
    ///
    pub fn new() QPlaceContent {
        return .{ .ptr = qtc.QPlaceContent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlaceContent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn new2(other: anytype) QPlaceContent {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        return .{ .ptr = qtc.QPlaceContent_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPlaceContent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn new3(typeVal: i32) QPlaceContent {
        return .{ .ptr = qtc.QPlaceContent_new3(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn operatorAssign(self: QPlaceContent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        qtc.QPlaceContent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn swap(self: QPlaceContent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        qtc.QPlaceContent_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn detach(self: QPlaceContent) void {
        qtc.QPlaceContent_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn operatorEqual(self: QPlaceContent, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        return qtc.QPlaceContent_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn operatorNotEqual(self: QPlaceContent, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        return qtc.QPlaceContent_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ## Returns:
    ///
    /// ` qplacecontent_enums.Type `
    ///
    pub fn type0(self: QPlaceContent) i32 {
        return qtc.QPlaceContent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dataTags` instead
    ///
    pub const DataTags = dataTags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dataTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qplacecontent_enums.DataTag `
    ///
    pub fn dataTags(self: QPlaceContent, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPlaceContent_DataTags(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QPlaceContent.dataTags: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` tag: qplacecontent_enums.DataTag `
    ///
    pub fn value(self: QPlaceContent, tag: i32) QVariant {
        return .{ .ptr = qtc.QPlaceContent_Value(@ptrCast(self.ptr), @bitCast(tag)) };
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` tag: qplacecontent_enums.DataTag `
    ///
    /// ` param2: QVariant `
    ///
    pub fn setValue(self: QPlaceContent, tag: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QVariant;
        qtc.QPlaceContent_SetValue(@ptrCast(self.ptr), @bitCast(tag), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `supplier` instead
    ///
    pub const Supplier = supplier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#supplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn supplier(self: QPlaceContent) QPlaceSupplier {
        return .{ .ptr = qtc.QPlaceContent_Supplier(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSupplier` instead
    ///
    pub const SetSupplier = setSupplier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setSupplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` _supplier: QPlaceSupplier `
    ///
    pub fn setSupplier(self: QPlaceContent, _supplier: anytype) void {
        comptime _ = @TypeOf(_supplier)._is_QPlaceSupplier;
        qtc.QPlaceContent_SetSupplier(@ptrCast(self.ptr), @ptrCast(_supplier.ptr));
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn user(self: QPlaceContent) QPlaceUser {
        return .{ .ptr = qtc.QPlaceContent_User(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` _user: QPlaceUser `
    ///
    pub fn setUser(self: QPlaceContent, _user: anytype) void {
        comptime _ = @TypeOf(_user)._is_QPlaceUser;
        qtc.QPlaceContent_SetUser(@ptrCast(self.ptr), @ptrCast(_user.ptr));
    }

    /// ### DEPRECATED: Use `attribution` instead
    ///
    pub const Attribution = attribution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#attribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attribution(self: QPlaceContent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContent_Attribution(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlaceContent.attribution: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribution` instead
    ///
    pub const SetAttribution = setAttribution;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setAttribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` _attribution: []const u8 `
    ///
    pub fn setAttribution(self: QPlaceContent, _attribution: []const u8) void {
        const attribution_str = qtc.libqt_string{
            .len = _attribution.len,
            .data = _attribution.ptr,
        };
        qtc.QPlaceContent_SetAttribution(@ptrCast(self.ptr), attribution_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dtor.QPlaceContent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn delete(self: QPlaceContent) void {
        qtc.QPlaceContent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const NoType: i32 = 0;
        pub const ImageType: i32 = 1;
        pub const ReviewType: i32 = 2;
        pub const EditorialType: i32 = 3;
        pub const CustomType: i32 = 256;
    };

    pub const DataTag = enum(i32) {
        pub const ContentSupplier: i32 = 0;
        pub const ContentUser: i32 = 1;
        pub const ContentAttribution: i32 = 2;
        pub const ImageId: i32 = 3;
        pub const ImageUrl: i32 = 4;
        pub const ImageMimeType: i32 = 5;
        pub const EditorialTitle: i32 = 6;
        pub const EditorialText: i32 = 7;
        pub const EditorialLanguage: i32 = 8;
        pub const ReviewId: i32 = 9;
        pub const ReviewDateTime: i32 = 10;
        pub const ReviewTitle: i32 = 11;
        pub const ReviewText: i32 = 12;
        pub const ReviewLanguage: i32 = 13;
        pub const ReviewRating: i32 = 14;
        pub const CustomDataTag: i32 = 1000;
    };
};
