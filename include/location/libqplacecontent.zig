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

    /// New constructs a new QPlaceContent object.
    ///
    pub fn New() QPlaceContent {
        return .{ .ptr = qtc.QPlaceContent_new() };
    }

    /// New2 constructs a new QPlaceContent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn New2(other: anytype) QPlaceContent {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        return .{ .ptr = qtc.QPlaceContent_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPlaceContent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn New3(typeVal: i32) QPlaceContent {
        return .{ .ptr = qtc.QPlaceContent_new3(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn OperatorAssign(self: QPlaceContent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        qtc.QPlaceContent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn Swap(self: QPlaceContent, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        qtc.QPlaceContent_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn Detach(self: QPlaceContent) void {
        qtc.QPlaceContent_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn OperatorEqual(self: QPlaceContent, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        return qtc.QPlaceContent_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` other: QPlaceContent `
    ///
    pub fn OperatorNotEqual(self: QPlaceContent, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPlaceContent;
        return qtc.QPlaceContent_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn Type(self: QPlaceContent) i32 {
        return qtc.QPlaceContent_Type(@ptrCast(self.ptr));
    }

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
    pub fn DataTags(self: QPlaceContent, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPlaceContent_DataTags(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qplacecontent.DataTags: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` tag: qplacecontent_enums.DataTag `
    ///
    pub fn Value(self: QPlaceContent, tag: i32) QVariant {
        return .{ .ptr = qtc.QPlaceContent_Value(@ptrCast(self.ptr), @bitCast(tag)) };
    }

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
    pub fn SetValue(self: QPlaceContent, tag: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QVariant;
        qtc.QPlaceContent_SetValue(@ptrCast(self.ptr), @bitCast(tag), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#supplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn Supplier(self: QPlaceContent) QPlaceSupplier {
        return .{ .ptr = qtc.QPlaceContent_Supplier(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setSupplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` supplier: QPlaceSupplier `
    ///
    pub fn SetSupplier(self: QPlaceContent, supplier: anytype) void {
        comptime _ = @TypeOf(supplier)._is_QPlaceSupplier;
        qtc.QPlaceContent_SetSupplier(@ptrCast(self.ptr), @ptrCast(supplier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn User(self: QPlaceContent) QPlaceUser {
        return .{ .ptr = qtc.QPlaceContent_User(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` user: QPlaceUser `
    ///
    pub fn SetUser(self: QPlaceContent, user: anytype) void {
        comptime _ = @TypeOf(user)._is_QPlaceUser;
        qtc.QPlaceContent_SetUser(@ptrCast(self.ptr), @ptrCast(user.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#attribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attribution(self: QPlaceContent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContent_Attribution(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontent.Attribution: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setAttribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlaceContent `
    ///
    /// ` attribution: []const u8 `
    ///
    pub fn SetAttribution(self: QPlaceContent, attribution: []const u8) void {
        const attribution_str = qtc.libqt_string{
            .len = attribution.len,
            .data = attribution.ptr,
        };
        qtc.QPlaceContent_SetAttribution(@ptrCast(self.ptr), attribution_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dtor.QPlaceContent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlaceContent `
    ///
    pub fn Delete(self: QPlaceContent) void {
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
