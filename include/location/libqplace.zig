const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QGeoLocation = @import("libqt6").QGeoLocation;
const QPlaceAttribute = @import("libqt6").QPlaceAttribute;
const QPlaceCategory = @import("libqt6").QPlaceCategory;
const QPlaceContactDetail = @import("libqt6").QPlaceContactDetail;
const QPlaceContent = @import("libqt6").QPlaceContent;
const QPlaceIcon = @import("libqt6").QPlaceIcon;
const QPlaceRatings = @import("libqt6").QPlaceRatings;
const QPlaceSupplier = @import("libqt6").QPlaceSupplier;
const QUrl = @import("libqt6").QUrl;
const qlocation_enums = @import("libqlocation.zig").enums;
const qplacecontent_enums = @import("libqplacecontent.zig").enums;
const std = @import("std");
const ArrayMap_i32_QPlaceContent = std.array_hash_map.Auto(i32, QPlaceContent);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html)
pub const QPlace = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlace,

    pub const _is_QPlace = {};

    /// New constructs a new QPlace object.
    ///
    pub fn New() QPlace {
        return .{ .ptr = qtc.QPlace_new() };
    }

    /// New2 constructs a new QPlace object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPlace `
    ///
    pub fn New2(other: anytype) QPlace {
        comptime _ = @TypeOf(other)._is_QPlace;
        return .{ .ptr = qtc.QPlace_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` other: QPlace `
    ///
    pub fn OperatorAssign(self: QPlace, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlace;
        qtc.QPlace_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` other: QPlace `
    ///
    pub fn Swap(self: QPlace, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPlace;
        qtc.QPlace_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: QPlace, allocator: std.mem.Allocator) []QPlaceCategory {
        const _arr: qtc.libqt_list = qtc.QPlace_Categories(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceCategory, _arr.len) catch @panic("qplace.Categories: Memory allocation failed");
        const _data: [*]QtC.QPlaceCategory = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` category: QPlaceCategory `
    ///
    pub fn SetCategory(self: QPlace, category: anytype) void {
        comptime _ = @TypeOf(category)._is_QPlaceCategory;
        qtc.QPlace_SetCategory(@ptrCast(self.ptr), @ptrCast(category.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` categories: []QPlaceCategory `
    ///
    pub fn SetCategories(self: QPlace, categories: []QPlaceCategory) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.QPlace_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn Location(self: QPlace) QGeoLocation {
        return .{ .ptr = qtc.QPlace_Location(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` location: QGeoLocation `
    ///
    pub fn SetLocation(self: QPlace, location: anytype) void {
        comptime _ = @TypeOf(location)._is_QGeoLocation;
        qtc.QPlace_SetLocation(@ptrCast(self.ptr), @ptrCast(location.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#ratings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn Ratings(self: QPlace) QPlaceRatings {
        return .{ .ptr = qtc.QPlace_Ratings(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setRatings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` ratings: QPlaceRatings `
    ///
    pub fn SetRatings(self: QPlace, ratings: anytype) void {
        comptime _ = @TypeOf(ratings)._is_QPlaceRatings;
        qtc.QPlace_SetRatings(@ptrCast(self.ptr), @ptrCast(ratings.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#supplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn Supplier(self: QPlace) QPlaceSupplier {
        return .{ .ptr = qtc.QPlace_Supplier(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setSupplier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` supplier: QPlaceSupplier `
    ///
    pub fn SetSupplier(self: QPlace, supplier: anytype) void {
        comptime _ = @TypeOf(supplier)._is_QPlaceSupplier;
        qtc.QPlace_SetSupplier(@ptrCast(self.ptr), @ptrCast(supplier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#attribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attribution(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_Attribution(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.Attribution: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setAttribution)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` attribution: []const u8 `
    ///
    pub fn SetAttribution(self: QPlace, attribution: []const u8) void {
        const attribution_str = qtc.libqt_string{
            .len = attribution.len,
            .data = attribution.ptr,
        };
        qtc.QPlace_SetAttribution(@ptrCast(self.ptr), attribution_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn Icon(self: QPlace) QPlaceIcon {
        return .{ .ptr = qtc.QPlace_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` icon: QPlaceIcon `
    ///
    pub fn SetIcon(self: QPlace, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QPlaceIcon;
        qtc.QPlace_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#content)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn Content(self: QPlace, allocator: std.mem.Allocator, typeVal: i32) ArrayMap_i32_QPlaceContent {
        const _map: qtc.libqt_map = qtc.QPlace_Content(@ptrCast(self.ptr), @bitCast(typeVal));
        var _ret: ArrayMap_i32_QPlaceContent = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QPlaceContent = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qplace.Content: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` content: ArrayMap_i32_QPlaceContent `
    ///
    pub fn SetContent(self: QPlace, allocator: std.mem.Allocator, typeVal: i32, content: ArrayMap_i32_QPlaceContent) void {
        const content_count = content.count();
        const content_keys = allocator.alloc(i32, content_count) catch @panic("qplace.SetContent: Memory allocation failed");
        defer allocator.free(content_keys);
        const content_values = allocator.alloc(QtC.QPlaceContent, content_count) catch @panic("qplace.SetContent: Memory allocation failed");
        defer allocator.free(content_values);
        var i: usize = 0;
        var content_it = content.iterator();
        while (content_it.next()) |it_entry| : (i += 1) {
            const content_key = it_entry.key_ptr.*;
            content_keys[i] = @bitCast(content_key);
            content_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const content_map = qtc.libqt_map{
            .len = content_count,
            .keys = @ptrCast(content_keys.ptr),
            .values = @ptrCast(content_values.ptr),
        };
        qtc.QPlace_SetContent(@ptrCast(self.ptr), @bitCast(typeVal), content_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#insertContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` content: ArrayMap_i32_QPlaceContent `
    ///
    pub fn InsertContent(self: QPlace, allocator: std.mem.Allocator, typeVal: i32, content: ArrayMap_i32_QPlaceContent) void {
        const content_count = content.count();
        const content_keys = allocator.alloc(i32, content_count) catch @panic("qplace.InsertContent: Memory allocation failed");
        defer allocator.free(content_keys);
        const content_values = allocator.alloc(QtC.QPlaceContent, content_count) catch @panic("qplace.InsertContent: Memory allocation failed");
        defer allocator.free(content_values);
        var i: usize = 0;
        var content_it = content.iterator();
        while (content_it.next()) |it_entry| : (i += 1) {
            const content_key = it_entry.key_ptr.*;
            content_keys[i] = @bitCast(content_key);
            content_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const content_map = qtc.libqt_map{
            .len = content_count,
            .keys = @ptrCast(content_keys.ptr),
            .values = @ptrCast(content_values.ptr),
        };
        qtc.QPlace_InsertContent(@ptrCast(self.ptr), @bitCast(typeVal), content_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#totalContentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    pub fn TotalContentCount(self: QPlace, typeVal: i32) i32 {
        return qtc.QPlace_TotalContentCount(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setTotalContentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` typeVal: qplacecontent_enums.Type `
    ///
    /// ` total: i32 `
    ///
    pub fn SetTotalContentCount(self: QPlace, typeVal: i32, total: i32) void {
        qtc.QPlace_SetTotalContentCount(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(total));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QPlace, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QPlace_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#placeId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceId(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PlaceId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PlaceId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setPlaceId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` identifier: []const u8 `
    ///
    pub fn SetPlaceId(self: QPlace, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
            .len = identifier.len,
            .data = identifier.ptr,
        };
        qtc.QPlace_SetPlaceId(@ptrCast(self.ptr), identifier_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryPhone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrimaryPhone(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryPhone(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PrimaryPhone: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryFax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrimaryFax(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryFax(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PrimaryFax: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrimaryEmail(self: QPlace, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlace_PrimaryEmail(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplace.PrimaryEmail: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn PrimaryWebsite(self: QPlace) QUrl {
        return .{ .ptr = qtc.QPlace_PrimaryWebsite(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#detailsFetched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn DetailsFetched(self: QPlace) bool {
        return qtc.QPlace_DetailsFetched(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setDetailsFetched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` fetched: bool `
    ///
    pub fn SetDetailsFetched(self: QPlace, fetched: bool) void {
        qtc.QPlace_SetDetailsFetched(@ptrCast(self.ptr), fetched);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttributeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributeTypes(self: QPlace, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlace_ExtendedAttributeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qplace.ExtendedAttributeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplace.ExtendedAttributeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    pub fn ExtendedAttribute(self: QPlace, attributeType: []const u8) QPlaceAttribute {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        return .{ .ptr = qtc.QPlace_ExtendedAttribute(@ptrCast(self.ptr), attributeType_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    /// ` attribute: QPlaceAttribute `
    ///
    pub fn SetExtendedAttribute(self: QPlace, attributeType: []const u8, attribute: anytype) void {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        comptime _ = @TypeOf(attribute)._is_QPlaceAttribute;
        qtc.QPlace_SetExtendedAttribute(@ptrCast(self.ptr), attributeType_str, @ptrCast(attribute.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` attributeType: []const u8 `
    ///
    pub fn RemoveExtendedAttribute(self: QPlace, attributeType: []const u8) void {
        const attributeType_str = qtc.libqt_string{
            .len = attributeType.len,
            .data = attributeType.ptr,
        };
        qtc.QPlace_RemoveExtendedAttribute(@ptrCast(self.ptr), attributeType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContactTypes(self: QPlace, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPlace_ContactTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qplace.ContactTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplace.ContactTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` contactType: []const u8 `
    ///
    pub fn ContactDetails(self: QPlace, allocator: std.mem.Allocator, contactType: []const u8) []QPlaceContactDetail {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QPlace_ContactDetails(@ptrCast(self.ptr), contactType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPlaceContactDetail, _arr.len) catch @panic("qplace.ContactDetails: Memory allocation failed");
        const _data: [*]QtC.QPlaceContactDetail = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContactDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    /// ` details: []QPlaceContactDetail `
    ///
    pub fn SetContactDetails(self: QPlace, contactType: []const u8, details: []QPlaceContactDetail) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        const details_list = qtc.libqt_list{
            .len = details.len,
            .data = @ptrCast(details.ptr),
        };
        qtc.QPlace_SetContactDetails(@ptrCast(self.ptr), contactType_str, details_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#appendContactDetail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    /// ` detail: QPlaceContactDetail `
    ///
    pub fn AppendContactDetail(self: QPlace, contactType: []const u8, detail: anytype) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        comptime _ = @TypeOf(detail)._is_QPlaceContactDetail;
        qtc.QPlace_AppendContactDetail(@ptrCast(self.ptr), contactType_str, @ptrCast(detail.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeContactDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` contactType: []const u8 `
    ///
    pub fn RemoveContactDetails(self: QPlace, contactType: []const u8) void {
        const contactType_str = qtc.libqt_string{
            .len = contactType.len,
            .data = contactType.ptr,
        };
        qtc.QPlace_RemoveContactDetails(@ptrCast(self.ptr), contactType_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ## Returns:
    ///
    /// ` qlocation_enums.Visibility `
    ///
    pub fn Visibility(self: QPlace) i32 {
        return qtc.QPlace_Visibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    /// ` visibility: qlocation_enums.Visibility `
    ///
    pub fn SetVisibility(self: QPlace, visibility: i32) void {
        qtc.QPlace_SetVisibility(@ptrCast(self.ptr), @bitCast(visibility));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlace `
    ///
    pub fn IsEmpty(self: QPlace) bool {
        return qtc.QPlace_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplace.html#dtor.QPlace)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlace `
    ///
    pub fn Delete(self: QPlace) void {
        qtc.QPlace_Delete(@ptrCast(self.ptr));
    }
};
