const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qplacecontent_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html)
pub const qplacecontent = struct {
    /// New constructs a new QPlaceContent object.
    ///
    pub fn New() QtC.QPlaceContent {
        return qtc.QPlaceContent_new();
    }

    /// New2 constructs a new QPlaceContent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPlaceContent `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPlaceContent {
        return qtc.QPlaceContent_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPlaceContent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn New3(typeVal: i32) QtC.QPlaceContent {
        return qtc.QPlaceContent_new3(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` other: QtC.QPlaceContent `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceContent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` other: QtC.QPlaceContent `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPlaceContent_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QPlaceContent_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` other: QtC.QPlaceContent `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPlaceContent_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` other: QtC.QPlaceContent `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPlaceContent_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ## Returns:
    ///
    /// ` qplacecontent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QPlaceContent_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dataTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qplacecontent_enums.DataTag `
    ///
    pub fn DataTags(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QPlaceContent_DataTags(@ptrCast(self));
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
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` tag: qplacecontent_enums.DataTag `
    ///
    pub fn Value(self: ?*anyopaque, tag: i32) QtC.QVariant {
        return qtc.QPlaceContent_Value(@ptrCast(self), @intCast(tag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` tag: qplacecontent_enums.DataTag `
    ///
    /// ` param2: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, tag: i32, param2: ?*anyopaque) void {
        qtc.QPlaceContent_SetValue(@ptrCast(self), @intCast(tag), @ptrCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#supplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    pub fn Supplier(self: ?*anyopaque) QtC.QPlaceSupplier {
        return qtc.QPlaceContent_Supplier(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setSupplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` supplier: QtC.QPlaceSupplier `
    ///
    pub fn SetSupplier(self: ?*anyopaque, supplier: ?*anyopaque) void {
        qtc.QPlaceContent_SetSupplier(@ptrCast(self), @ptrCast(supplier));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    pub fn User(self: ?*anyopaque) QtC.QPlaceUser {
        return qtc.QPlaceContent_User(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` user: QtC.QPlaceUser `
    ///
    pub fn SetUser(self: ?*anyopaque, user: ?*anyopaque) void {
        qtc.QPlaceContent_SetUser(@ptrCast(self), @ptrCast(user));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#attribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attribution(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlaceContent_Attribution(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplacecontent.Attribution: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setAttribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    /// ` attribution: []const u8 `
    ///
    pub fn SetAttribution(self: ?*anyopaque, attribution: []const u8) void {
        const attribution_str = qtc.libqt_string{
            .len = attribution.len,
            .data = attribution.ptr,
        };
        qtc.QPlaceContent_SetAttribution(@ptrCast(self), attribution_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dtor.QPlaceContent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPlaceContent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPlaceContent_Delete(@ptrCast(self));
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
